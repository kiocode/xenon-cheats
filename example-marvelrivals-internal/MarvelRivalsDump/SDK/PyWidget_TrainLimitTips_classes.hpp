#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_TrainLimitTips

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_TrainLimitTips.PyWidget_TrainLimitTips
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_TrainLimitTips : public UPyMarvelUserWidget
{
public:
	void Desturct();
	void Construct();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_TrainLimitTips">();
	}
	static class UPyWidget_TrainLimitTips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_TrainLimitTips>();
	}
};
static_assert(alignof(UPyWidget_TrainLimitTips) == 0x000008, "Wrong alignment on UPyWidget_TrainLimitTips");
static_assert(sizeof(UPyWidget_TrainLimitTips) == 0x0005F0, "Wrong size on UPyWidget_TrainLimitTips");

}

