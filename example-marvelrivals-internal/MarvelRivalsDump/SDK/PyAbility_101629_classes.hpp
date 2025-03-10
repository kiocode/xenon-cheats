#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101629

#include "Basic.hpp"

#include "Hero_1016_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_101629.PyAbility_101629
// 0x0000 (0x2748 - 0x2748)
class UPyAbility_101629 : public UAbility_101629
{
public:
	class UAnimMontage* GetCurrentMontageToPlay();
	int32 GetCurrentTimelineIndex();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_101629">();
	}
	static class UPyAbility_101629* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_101629>();
	}
};
static_assert(alignof(UPyAbility_101629) == 0x000008, "Wrong alignment on UPyAbility_101629");
static_assert(sizeof(UPyAbility_101629) == 0x002748, "Wrong size on UPyAbility_101629");

}

