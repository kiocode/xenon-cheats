#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Mall_FullScreenMask_Snow

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Mall_FullScreenMask_Snow.PyWidget_Mall_FullScreenMask_Snow
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Mall_FullScreenMask_Snow final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Mall_FullScreenMask_Snow">();
	}
	static class UPyWidget_Mall_FullScreenMask_Snow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Mall_FullScreenMask_Snow>();
	}
};
static_assert(alignof(UPyWidget_Mall_FullScreenMask_Snow) == 0x000008, "Wrong alignment on UPyWidget_Mall_FullScreenMask_Snow");
static_assert(sizeof(UPyWidget_Mall_FullScreenMask_Snow) == 0x0005F0, "Wrong size on UPyWidget_Mall_FullScreenMask_Snow");

}

