# DDNet SDK — Regeneration Prompt (new / updated DDNet.exe)

Give this whole file to Claude when the DDNet build changes and the xenon
`example-ddnet-internal` cheat needs its offsets refreshed. It is written to be
followed top to bottom.

**What is build-specific** (must be refreshed): the `Offsets` block in
`offsets/ddnet_sdk.hpp` and `CGAMECLIENT_VTABLE_RVA` in `offsets/scanner.hpp`.
Everything else — scanner logic, `GetGameState`, the extended API, `dllmain.cpp`,
all struct layouts — is build-agnostic and should not change unless a struct’s
layout actually changed in the DDNet source.

The pipeline is two stages:

```
dump_offsets.py (in IDA)  ->  offsets.json  ->  gen_ddnet_sdk.py --symbols  ->  headers
         EXTRACT                              CODEGEN (no IDA, deterministic)
```

---

## Step 1 — Extract offsets.json (in IDA)

The DDNet debug build ships full symbols, so this is automatic.

- GUI: open `DDNet.exe` in IDA, wait for analysis, then
  `File > Script file...` → `tools/dump_offsets.py`.
- Headless:
  ```
  idat64 -A -S"tools\dump_offsets.py <out>\offsets.json" path\to\DDNet.exe
  ```

It writes `offsets.json` with the vtable RVA, every struct field offset + stride,
and the `CCollision` function RVAs. Read the IDA output log: any line starting
`! ` means a symbol was not found — fix it (Step 3) before trusting that value.

If you are Claude with the IDA MCP tools instead of the GUI: open the IDB
(`idb_open(input_path=..., run_auto_analysis=false)`), then for each type call
`type_inspect` and for each function `lookup_funcs`, and assemble the same JSON by
hand. The names to resolve:

| JSON key | Source | How |
|---|---|---|
| `vtable_rva` | `??_7CGameClient@@6B@` | symbol EA − imagebase (`0x140000000`) |
| `gameclient.SNAP / CLIENTS / ICLIENT` | `CGameClient` | `m_Snap`, `m_aClients`, `m_pClient` |
| `gameclient.COLLISION / TUNING / CONTROLS` | `CGameClient` | `m_Collision`, `m_aTuning` (elem 0), `m_Controls` |
| `gameclient.RENDER_POS` + `CLIENT_STRIDE=0x8` | `CGameClient` | `m_aLastPos` (optional; native px) |
| `snapstate.*` | `CGameClient::CSnapState` | `m_LocalClientId`, `m_NumPlayers`, `m_aCharacters` |
| `charinfo.*` + `CHARINFO_STRIDE` | `CGameClient::CSnapState::CCharacterInfo` | `m_Active`, `m_Prev`, `m_Cur`; stride = sizeof |
| `clientdata.*` + `CLIENTDATA_STRIDE` | `CGameClient::CClientData` | `m_aName`, `m_aClan`, `m_Team`, `m_FreezeEnd`; stride = sizeof |
| `controls.CONTROLS_INPUT` | `CControls` | `m_aInputData` |
| `func.IntersectLine` | `?IntersectLine@CCollision@@QEBAHV?$vector2_base@M@@0PEAV2@1@Z` | EA − imagebase (RVA) |
| `func.GetTile` | `?GetTile@CCollision@@QEBAHHH@Z` | EA − imagebase |
| `func.IsSolid` | `?IsSolid@CCollision@@QEBAHHH@Z` | EA − imagebase |

`tools/offsets.sample.json` is a filled, verified example (the Oct 2026 build) —
copy its shape. Leave any value you don’t need at `"0x0"`; the matching feature
no-ops, nothing crashes.

> Note on older builds: `IntersectLine` here IS the solid raycast (there is no
> `IntersectLineSolid`), and `IsSolid`/`GetTile` take integer tile coords. If a
> build renames these, map the closest function to the same JSON key.

---

## Step 2 — Codegen (no IDA needed)

```bash
cd example-ddnet-internal/tools
python gen_ddnet_sdk.py --symbols offsets.json
```

This rewrites the `// <<<GEN:OFFSETS>>>` block in `ddnet_sdk.hpp` and the vtable
RVA line in `scanner.hpp`, deterministically and idempotently. It prints a
warning if any REQUIRED base offset is still zero. Then rebuild
`example-ddnet-internal` (x64).

Alternative without IDA: if LLVM is installed (`winget install LLVM.LLVM`),
`python gen_ddnet_sdk.py --pdb DDNet.pdb --vtable-rva 0x<RVA> --emit-json offsets.json`
extracts struct offsets via `llvm-pdbutil` (function RVAs and the vtable still
come from IDA, hence `--vtable-rva`). The IDA path (Step 1) is preferred.

---

## Step 3 — Struct layouts (only if a type changed)

`type_inspect` / the IDA log will show if a struct’s layout moved. The structs
live in `ddnet_sdk.hpp` OUTSIDE the GEN markers — edit them directly and fix the
`static_assert`s:

- `NetCharacter` = 88 bytes, `NetCharacterCore` = 60, `NetPlayerInput` = 40.
- `TuningParams` = 188 bytes (47 × `CTuneParam` int). If DDNet adds/removes a tune
  param, add/remove the field and update the assert.
- `Collision` mirrors the first 0x48 bytes of `CCollision`
  (`m_Width`@0x10, `m_Height`@0x14, `m_pTiles`@0x18, …).
- Scale is invariant: snapshot `m_X/m_Y` are native world pixels (1 tile = 32 px);
  the SDK exposes Player `x,y` already divided by 32 (tile units) to match the
  existing ESP. Engine functions (`RaycastSolid`, `IsSolidTile`) take NATIVE
  pixels / tile indices, not the /32 Player units.

Reference base with a richer hook-based layout for a different build (DDNet 19.6):
`E:\Projects\DDNet-internal-Base-1\offsets.h`.

---

## Step 4 — Verify after rebuild

Inject, open a server, check in the menu / console:

- Local ID = your slot; positions track the screen; names / clan / team correct;
  HP + weapon update live; `frozen` flips on freeze tiles.
- Collision wired (`COLLISION`≠0): `DDNet::GetCollision()` non-null,
  `TileAtWorld(c, pxX, pxY)` returns sane indices.
- Functions wired (`func.*`≠0): call `DDNet::InitFunctions()` once after `Init()`,
  then `RaycastSolid` returns hits and `IsSolidTile` matches the map.

| Symptom | Cause |
|---|---|
| "CGameClient not found" | wrong `vtable_rva` |
| garbage positions | wrong `SNAP` / `SNAP_CHARACTERS` |
| garbage names | wrong `CLIENTS` / `CLIENTDATA_NAME` |
| HP/weapon always 0 | wrong `CHARINFO_CUR` or `NetCharacter` layout |
| collision null | wrong `COLLISION` or `Collision` layout drift |
| raycast never hits | wrong `func.IntersectLine`, or passing /32 units instead of pixels |
