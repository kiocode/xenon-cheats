#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySubVoMgr_Escort

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PySubVoMgrBase_classes.hpp"


namespace SDK
{

// PythonClass PySubVoMgr_Escort.PySubVoMgr_Escort
// 0x0000 (0x00F0 - 0x00F0)
class UPySubVoMgr_Escort final : public UPySubVoMgrBase
{
public:
	void OnPayloadOwnerSideChanged(class AActor* Control_base, EOwnershipType Owner_side);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySubVoMgr_Escort">();
	}
	static class UPySubVoMgr_Escort* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySubVoMgr_Escort>();
	}
};
static_assert(alignof(UPySubVoMgr_Escort) == 0x000008, "Wrong alignment on UPySubVoMgr_Escort");
static_assert(sizeof(UPySubVoMgr_Escort) == 0x0000F0, "Wrong size on UPySubVoMgr_Escort");

}

