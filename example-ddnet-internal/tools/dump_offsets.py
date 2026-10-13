"""
dump_offsets.py — IDAPython offset dumper for the xenon DDNet SDK.

Run it INSIDE IDA (the build has full symbols, so no manual work needed):

  GUI:       File > Script file...  -> pick this file
  Headless:  idat64 -A -S"dump_offsets.py C:\\path\\to\\offsets.json" DDNet.exe

It resolves the CGameClient vtable RVA, every struct field offset, and the
collision function RVAs from the symbols, then writes offsets.json. Feed that to
the codegen that needs no IDA:

  python gen_ddnet_sdk.py --symbols offsets.json

Output path: idc.ARGV[1] if given, else <IDB dir>/offsets.json.
"""

import json
import idaapi
import idc
import ida_name
import ida_typeinf

IMAGEBASE = idaapi.get_imagebase()

# type_name -> list of (json_group, json_key, member_name), plus sizeof capture
STRUCTS = {
    "CGameClient": [
        ("gameclient", "SNAP",       "m_Snap"),
        ("gameclient", "CLIENTS",    "m_aClients"),
        ("gameclient", "ICLIENT",    "m_pClient"),
        ("gameclient", "COLLISION",  "m_Collision"),
        ("gameclient", "TUNING",     "m_aTuning"),
        ("gameclient", "CONTROLS",   "m_Controls"),
    ],
    "CGameClient::CSnapState": [
        ("snapstate", "SNAP_LOCAL_ID",    "m_LocalClientId"),
        ("snapstate", "SNAP_NUM_PLAYERS", "m_NumPlayers"),
        ("snapstate", "SNAP_CHARACTERS",  "m_aCharacters"),
    ],
    "CGameClient::CSnapState::CCharacterInfo": [
        ("charinfo", "CHARINFO_ACTIVE", "m_Active"),
        ("charinfo", "CHARINFO_PREV",   "m_Prev"),
        ("charinfo", "CHARINFO_CUR",    "m_Cur"),
    ],
    "CGameClient::CClientData": [
        ("clientdata", "CLIENTDATA_NAME",       "m_aName"),
        ("clientdata", "CLIENTDATA_CLAN",       "m_aClan"),
        ("clientdata", "CLIENTDATA_TEAM",       "m_Team"),
        ("clientdata", "CLIENTDATA_FREEZE_END", "m_FreezeEnd"),
    ],
    "CControls": [
        ("controls", "CONTROLS_INPUT", "m_aInputData"),
    ],
}

# which struct sizeof goes to which json key
SIZEOF = {
    "CGameClient::CSnapState::CCharacterInfo": ("charinfo", "CHARINFO_STRIDE"),
    "CGameClient::CClientData":                ("clientdata", "CLIENTDATA_STRIDE"),
}

VTABLE_SYMBOL = "??_7CGameClient@@6B@"

FUNCS = {
    "IntersectLine": "?IntersectLine@CCollision@@QEBAHV?$vector2_base@M@@0PEAV2@1@Z",
    "GetTile":       "?GetTile@CCollision@@QEBAHHH@Z",
    "IsSolid":       "?IsSolid@CCollision@@QEBAHHH@Z",
}


def members_of(type_name):
    """Return (sizeof, {member_name: byte_offset}) for a named UDT, or (None, {})."""
    tif = ida_typeinf.tinfo_t()
    til = ida_typeinf.get_idati()
    if not tif.get_named_type(til, type_name):
        return None, {}
    udt = ida_typeinf.udt_type_data_t()
    if not tif.get_udt_details(udt):
        return tif.get_size(), {}
    out = {}
    for m in udt:
        out[m.name] = m.offset // 8  # bits -> bytes
    return tif.get_size(), out


def main():
    warnings = []
    j = {
        "build": "DDNet x64 (dumped by dump_offsets.py)",
        "gameclient": {}, "snapstate": {}, "charinfo": {},
        "clientdata": {}, "controls": {}, "func": {},
    }

    # vtable RVA
    ea = ida_name.get_name_ea(idaapi.BADADDR, VTABLE_SYMBOL)
    if ea != idaapi.BADADDR:
        j["vtable_rva"] = "0x%X" % (ea - IMAGEBASE)
    else:
        warnings.append("vtable symbol %s not found" % VTABLE_SYMBOL)

    # struct fields + sizeofs
    for type_name, fields in STRUCTS.items():
        size, members = members_of(type_name)
        if not members:
            warnings.append("type not found or empty: %s" % type_name)
        for group, key, member in fields:
            if member in members:
                j[group][key] = "0x%X" % members[member]
            else:
                warnings.append("%s::%s missing" % (type_name, member))
        if type_name in SIZEOF and size:
            g, k = SIZEOF[type_name]
            j[g][k] = str(size)

    # opt-in per-client position array (native px, stride 8)
    _, gc_members = members_of("CGameClient")
    if "m_aLastPos" in gc_members:
        j["gameclient"]["RENDER_POS"] = "0x%X" % gc_members["m_aLastPos"]
        j["gameclient"]["CLIENT_STRIDE"] = "0x8"

    # collision function RVAs
    for key, sym in FUNCS.items():
        fea = ida_name.get_name_ea(idaapi.BADADDR, sym)
        if fea != idaapi.BADADDR:
            j["func"][key] = "0x%X" % (fea - IMAGEBASE)
        else:
            warnings.append("func symbol missing: %s (%s)" % (key, sym))

    out_path = idc.ARGV[1] if len(idc.ARGV) > 1 else \
        idaapi.get_input_file_path().rsplit("\\", 1)[0] + "\\offsets.json"
    with open(out_path, "w") as f:
        json.dump(j, f, indent=2)

    print("[dump_offsets] imagebase 0x%X -> wrote %s" % (IMAGEBASE, out_path))
    for w in warnings:
        print("[dump_offsets]  ! " + w)
    print("[dump_offsets] next: python gen_ddnet_sdk.py --symbols \"%s\"" % out_path)


main()
