#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_Nameplate

#include "Basic.hpp"

#include "PyWidget_CommonTipsBase_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_Nameplate.PyWidget_Common_Nameplate
// 0x0000 (0x0608 - 0x0608)
class UPyWidget_Common_Nameplate final : public UPyWidget_CommonTipsBase
{
public:
	void OnInitialized();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_Nameplate">();
	}
	static class UPyWidget_Common_Nameplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_Nameplate>();
	}
};
static_assert(alignof(UPyWidget_Common_Nameplate) == 0x000008, "Wrong alignment on UPyWidget_Common_Nameplate");
static_assert(sizeof(UPyWidget_Common_Nameplate) == 0x000608, "Wrong size on UPyWidget_Common_Nameplate");

}

