#!/usr/bin/env python3
"""
gen_ddnet_sdk.py — regenerate the build-specific offsets for the xenon DDNet SDK.

Two stages, cleanly separated:

  1. EXTRACT  (fragile, optional)  PDB  -> offsets JSON
  2. CODEGEN  (deterministic)      JSON -> ddnet_sdk.hpp + scanner.hpp

The CODEGEN stage is the guaranteed contract: give it a JSON of offsets and it
rewrites the generated regions of the two headers, byte-for-byte predictable.

The EXTRACT stage reads a PDB via `llvm-pdbutil pretty` (best-effort). When no
PDB / no llvm-pdbutil is available, produce the JSON by hand (or via the IDA
session described in REGEN_PROMPT.md) and feed it with --symbols.

Usage
-----
  # codegen only, from a hand/IDA-made JSON (always works):
  python gen_ddnet_sdk.py --symbols offsets.json

  # full pipeline from a PDB (needs llvm-pdbutil on PATH):
  python gen_ddnet_sdk.py --pdb DDNet.pdb --vtable-rva 0x14b99a8

  # just see what the PDB parser finds, write nothing:
  python gen_ddnet_sdk.py --pdb DDNet.pdb --dump

  # extract to JSON, inspect, then codegen from it:
  python gen_ddnet_sdk.py --pdb DDNet.pdb --emit-json offsets.json
  python gen_ddnet_sdk.py --symbols offsets.json
"""

import argparse
import json
import re
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
OFFSETS_DIR = HERE.parent / "offsets"
SDK_HPP = OFFSETS_DIR / "ddnet_sdk.hpp"
SCANNER_HPP = OFFSETS_DIR / "scanner.hpp"

# ── Mapping: PDB type/field name -> JSON group/key ──────────────────────────────
# Used only by the llvm-pdbutil extractor. (class names are matched on their last
# "::" segment, so CGameClient::CSnapState -> CSnapState, etc.)
# Each group: (type_name, [(json_key, [candidate field names])...], optional sizeof_key)
FIELD_MAP = {
    "gameclient": ("CGameClient", [
        ("SNAP",       ["m_Snap"]),
        ("CLIENTS",    ["m_aClients"]),
        ("ICLIENT",    ["m_pClient"]),
        ("COLLISION",  ["m_Collision"]),
        ("TUNING",     ["m_aTuning", "m_Tuning"]),
        ("CONTROLS",   ["m_Controls"]),
        ("RENDER_POS", ["m_aLastPos"]),   # opt-in; native px, stride 8
    ]),
    "snapstate": ("CSnapState", [
        ("SNAP_LOCAL_ID",    ["m_LocalClientId", "m_LocalClientID"]),
        ("SNAP_NUM_PLAYERS", ["m_NumPlayers"]),
        ("SNAP_CHARACTERS",  ["m_aCharacters"]),
    ]),
    "charinfo": ("CCharacterInfo", [
        ("CHARINFO_ACTIVE", ["m_Active"]),
        ("CHARINFO_PREV",   ["m_Prev"]),
        ("CHARINFO_CUR",    ["m_Cur"]),
    ], "CHARINFO_STRIDE"),
    "clientdata": ("CClientData", [
        ("CLIENTDATA_NAME",       ["m_aName"]),
        ("CLIENTDATA_CLAN",       ["m_aClan"]),
        ("CLIENTDATA_TEAM",       ["m_Team"]),
        ("CLIENTDATA_FREEZE_END", ["m_FreezeEnd"]),
    ], "CLIENTDATA_STRIDE"),
    "controls": ("CControls", [
        ("CONTROLS_INPUT", ["m_aInputData", "m_InputData"]),
    ]),
}

# Keys that must be non-zero for the base ESP/aimbot to work.
REQUIRED = {
    "gameclient": ["SNAP", "CLIENTS", "ICLIENT"],
    "snapstate":  ["SNAP_LOCAL_ID", "SNAP_NUM_PLAYERS", "SNAP_CHARACTERS"],
    "charinfo":   ["CHARINFO_STRIDE", "CHARINFO_CUR"],
    "clientdata": ["CLIENTDATA_STRIDE", "CLIENTDATA_NAME", "CLIENTDATA_TEAM"],
}


# Canonical ordering/formatting of the generated Offsets block.
def render_offsets_block(j: dict) -> str:
    gc  = j.get("gameclient", {})
    ss  = j.get("snapstate", {})
    ci  = j.get("charinfo", {})
    cd  = j.get("clientdata", {})
    ct  = j.get("controls", {})
    fn  = j.get("func", {})
    build = j.get("build", "unknown")

    def v(group, key, default="0x0"):
        return str(group.get(key, default))

    L = []
    a = L.append
    a("    // <<<GEN:OFFSETS>>>")
    a(f"    // build: {build}")
    a("")
    a("    // --- CGameClient member offsets ---")
    a(f"    constexpr size_t SNAP          = {v(gc,'SNAP')};")
    a(f"    constexpr size_t CLIENTS       = {v(gc,'CLIENTS')};")
    a(f"    constexpr size_t ICLIENT       = {v(gc,'ICLIENT')};")
    a(f"    constexpr size_t COLLISION     = {v(gc,'COLLISION')};   // m_Collision (CCollision subobject)")
    a(f"    constexpr size_t TUNING        = {v(gc,'TUNING')};   // m_aTuning[0]")
    a(f"    constexpr size_t CONTROLS      = {v(gc,'CONTROLS')};   // m_Controls (CControls subobject)")
    a(f"    constexpr size_t RENDER_POS    = {v(gc,'RENDER_POS')};        // m_aLastPos vec2[128] @0x53ECC0 (native px) — opt-in")
    a(f"    constexpr size_t PRED_POS      = {v(gc,'PRED_POS')};        // no flat per-client predicted array in this build")
    a(f"    constexpr size_t CLIENT_STRIDE = {v(gc,'CLIENT_STRIDE')};        // stride for RENDER_POS/PRED_POS arrays")
    a("")
    a("    // --- CSnapState ---")
    a(f"    constexpr size_t SNAP_LOCAL_ID    = {v(ss,'SNAP_LOCAL_ID')};")
    a(f"    constexpr size_t SNAP_NUM_PLAYERS = {v(ss,'SNAP_NUM_PLAYERS')};")
    a(f"    constexpr size_t SNAP_CHARACTERS  = {v(ss,'SNAP_CHARACTERS')};")
    a("")
    a("    // --- CCharacterInfo ---")
    a(f"    constexpr size_t CHARINFO_STRIDE = {v(ci,'CHARINFO_STRIDE','240')};")
    a(f"    constexpr size_t CHARINFO_ACTIVE = {v(ci,'CHARINFO_ACTIVE','0x00')};")
    a(f"    constexpr size_t CHARINFO_PREV   = {v(ci,'CHARINFO_PREV','0x04')};")
    a(f"    constexpr size_t CHARINFO_CUR    = {v(ci,'CHARINFO_CUR','0x5C')};")
    a("")
    a("    // --- CClientData ---")
    a(f"    constexpr size_t CLIENTDATA_STRIDE     = {v(cd,'CLIENTDATA_STRIDE','14192')};")
    a(f"    constexpr size_t CLIENTDATA_NAME       = {v(cd,'CLIENTDATA_NAME','0x18')};")
    a(f"    constexpr size_t CLIENTDATA_CLAN       = {v(cd,'CLIENTDATA_CLAN','0x28')};")
    a(f"    constexpr size_t CLIENTDATA_TEAM       = {v(cd,'CLIENTDATA_TEAM','0x50')};")
    a(f"    constexpr size_t CLIENTDATA_FREEZE_END = {v(cd,'CLIENTDATA_FREEZE_END')};")
    a("")
    a("    // --- CControls ---")
    a(f"    constexpr size_t CONTROLS_INPUT = {v(ct,'CONTROLS_INPUT')};      // m_aInputData[0]")
    a("")
    a("    // --- Engine function RVAs (module-relative) ---")
    a("    namespace Func")
    a("    {")
    a(f"        constexpr uintptr_t IntersectLine = {v(fn,'IntersectLine')};  // solid raycast: int(self, from, to, *outHit, *outBefore)")
    a(f"        constexpr uintptr_t GetTile       = {v(fn,'GetTile')};  // int(self, int x, int y)")
    a(f"        constexpr uintptr_t IsSolid       = {v(fn,'IsSolid')};  // int(self, int x, int y)")
    a("    }")
    a("    // <<<END GEN:OFFSETS>>>")
    return "\n".join(L)


# ── CODEGEN ─────────────────────────────────────────────────────────────────────
def patch_region(text: str, begin: str, end: str, new_body: str) -> str:
    # eat the indentation before the begin marker so new_body owns it (stable across regens)
    pat = re.compile(r"[ \t]*" + re.escape(begin) + r".*?" + re.escape(end), re.DOTALL)
    if not pat.search(text):
        raise RuntimeError(f"markers not found: {begin} ... {end}")
    return pat.sub(lambda _m: new_body, text, count=1)


def codegen(j: dict, write: bool) -> None:
    # ddnet_sdk.hpp — the Offsets block
    sdk = SDK_HPP.read_text(encoding="utf-8")
    block = render_offsets_block(j)
    sdk_new = patch_region(sdk, "// <<<GEN:OFFSETS>>>", "// <<<END GEN:OFFSETS>>>", block)

    # scanner.hpp — the single vtable RVA line
    scanner = SCANNER_HPP.read_text(encoding="utf-8")
    vt = j.get("vtable_rva")
    scanner_new = scanner
    if vt:
        vt_hex = vt if str(vt).lower().startswith("0x") else hex(int(vt))
        scanner_new, n = re.subn(
            r"(CGAMECLIENT_VTABLE_RVA\s*=\s*)0x[0-9A-Fa-f]+u?",
            rf"\g<1>{vt_hex}u",
            scanner,
            count=1,
        )
        if n == 0:
            print("  ! scanner.hpp: CGAMECLIENT_VTABLE_RVA line not found, left unchanged", file=sys.stderr)

    if write:
        SDK_HPP.write_text(sdk_new, encoding="utf-8")
        print(f"  wrote {SDK_HPP}")
        if vt and scanner_new != scanner:
            SCANNER_HPP.write_text(scanner_new, encoding="utf-8")
            print(f"  wrote {SCANNER_HPP}  (vtable RVA {vt_hex})")
    else:
        print("---- ddnet_sdk.hpp Offsets block ----")
        print(block)
        if vt:
            print(f"---- scanner.hpp vtable RVA -> {vt} ----")


# ── EXTRACT (best-effort, llvm-pdbutil) ─────────────────────────────────────────
def find_llvm_pdbutil() -> str | None:
    exe = shutil.which("llvm-pdbutil")
    if exe:
        return exe
    for base in [
        r"C:\Program Files\LLVM\bin",
        r"C:\Program Files (x86)\LLVM\bin",
    ]:
        p = Path(base) / "llvm-pdbutil.exe"
        if p.exists():
            return str(p)
    return None


def extract_pdb(pdb: Path) -> dict:
    tool = find_llvm_pdbutil()
    if not tool:
        raise RuntimeError(
            "llvm-pdbutil not found. Install LLVM (winget install LLVM.LLVM) "
            "or produce the JSON by hand / via IDA and use --symbols."
        )
    type_filter = "CGameClient|CSnapState|CCharacterInfo|CClientData|CControls"
    cmd = [tool, "pretty", "-class-definitions=layout", "-classes",
           f"-include-types={type_filter}", str(pdb)]
    print(f"  running: {' '.join(cmd)}")
    out = subprocess.run(cmd, capture_output=True, text=True, errors="replace")
    if out.returncode != 0:
        raise RuntimeError(f"llvm-pdbutil failed:\n{out.stderr}")
    return parse_llvm_pretty(out.stdout)


_CLASS_RE = re.compile(r"(?:struct|class)\s+([\w:<>]+).*?\[sizeof\s*=\s*(\d+)\]")
_FIELD_RE = re.compile(r"\+0x([0-9A-Fa-f]+)\s+(?:data\s+)?.*?\b(m_\w+)\b")


def parse_llvm_pretty(text: str) -> dict:
    """Very tolerant parser: tracks the current class and grabs '+0xNN ... m_Name'."""
    layouts: dict[str, dict] = {}        # classname -> {sizeof, fields{name:off}}
    cur = None
    for line in text.splitlines():
        m = _CLASS_RE.search(line)
        if m:
            name = m.group(1).split("::")[-1]
            cur = name
            layouts.setdefault(cur, {"sizeof": int(m.group(2)), "fields": {}})
            continue
        if cur:
            fm = _FIELD_RE.search(line)
            if fm:
                off = int(fm.group(1), 16)
                layouts[cur]["fields"][fm.group(2)] = off
            if line.strip() == "}":
                cur = None

    j: dict = {"build": "extracted from PDB"}
    for group, spec in FIELD_MAP.items():
        cls = spec[0]
        fields = spec[1]
        size_key = spec[2] if len(spec) > 2 else None
        found = layouts.get(cls, {})
        bucket = j.setdefault(group, {})
        for json_key, candidates in fields:
            for cand in candidates:
                if cand in found.get("fields", {}):
                    bucket[json_key] = hex(found["fields"][cand])
                    break
        if size_key and "sizeof" in found:
            bucket[size_key] = str(found["sizeof"])
    j["_raw_layouts"] = {k: v for k, v in layouts.items()}
    return j


# ── main ────────────────────────────────────────────────────────────────────────
def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    src = ap.add_mutually_exclusive_group(required=True)
    src.add_argument("--symbols", type=Path, help="offsets JSON produced by hand / IDA / a previous --emit-json")
    src.add_argument("--pdb", type=Path, help="DDNet PDB to extract offsets from (needs llvm-pdbutil)")
    ap.add_argument("--vtable-rva", help="CGameClient vtable RVA, e.g. 0x14b99a8 (merged into the JSON)")
    ap.add_argument("--emit-json", type=Path, help="write the (extracted/merged) JSON here and stop")
    ap.add_argument("--dump", action="store_true", help="print results, write no files")
    args = ap.parse_args()

    if args.symbols:
        j = json.loads(args.symbols.read_text(encoding="utf-8"))
        print(f"  loaded {args.symbols}")
    else:
        j = extract_pdb(args.pdb)

    if args.vtable_rva:
        j["vtable_rva"] = args.vtable_rva

    if args.emit_json:
        args.emit_json.write_text(json.dumps(j, indent=2), encoding="utf-8")
        print(f"  wrote {args.emit_json}")
        return 0

    # warn only when a REQUIRED (base ESP/aimbot) offset is missing/zero
    missing = []
    for group, keys in REQUIRED.items():
        g = j.get(group, {})
        for k in keys:
            if str(g.get(k, "")) in ("0x0", "0", ""):
                missing.append(f"{group}.{k}")
    if missing:
        print("  ! REQUIRED offsets unresolved — base features will break: "
              + ", ".join(missing), file=sys.stderr)

    codegen(j, write=not args.dump)
    if not args.dump:
        print("  done. rebuild example-ddnet-internal (x64).")
    return 0


if __name__ == "__main__":
    sys.exit(main())
