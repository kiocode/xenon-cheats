#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySubVoMgr_Control

#include "Basic.hpp"

#include "PySubVoMgrBase_classes.hpp"


namespace SDK
{

// PythonClass PySubVoMgr_Control.PySubVoMgr_Control
// 0x0000 (0x00F0 - 0x00F0)
class UPySubVoMgr_Control final : public UPySubVoMgrBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySubVoMgr_Control">();
	}
	static class UPySubVoMgr_Control* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySubVoMgr_Control>();
	}
};
static_assert(alignof(UPySubVoMgr_Control) == 0x000008, "Wrong alignment on UPySubVoMgr_Control");
static_assert(sizeof(UPySubVoMgr_Control) == 0x0000F0, "Wrong size on UPySubVoMgr_Control");

}

