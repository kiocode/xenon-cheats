#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LevelBuffHookerBP

#include "Basic.hpp"

#include "PyLevelBuffHookerComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LevelBuffHookerBP.LevelBuffHookerBP_C
// 0x0000 (0x0118 - 0x0118)
class ULevelBuffHookerBP_C final : public UPyLevelBuffHookerComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LevelBuffHookerBP_C">();
	}
	static class ULevelBuffHookerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelBuffHookerBP_C>();
	}
};
static_assert(alignof(ULevelBuffHookerBP_C) == 0x000008, "Wrong alignment on ULevelBuffHookerBP_C");
static_assert(sizeof(ULevelBuffHookerBP_C) == 0x000118, "Wrong size on ULevelBuffHookerBP_C");

}

