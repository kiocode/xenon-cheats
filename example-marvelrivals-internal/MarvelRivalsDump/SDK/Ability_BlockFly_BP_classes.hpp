#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_BlockFly_BP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_BlockFly_BP.Ability_BlockFly_BP_C
// 0x0000 (0x1190 - 0x1190)
class UAbility_BlockFly_BP_C final : public UEffectAbility_BlockFly
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_BlockFly_BP_C">();
	}
	static class UAbility_BlockFly_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_BlockFly_BP_C>();
	}
};
//static_assert(alignof(UAbility_BlockFly_BP_C) == 0x000008, "Wrong alignment on UAbility_BlockFly_BP_C");
//static_assert(sizeof(UAbility_BlockFly_BP_C) == 0x001190, "Wrong size on UAbility_BlockFly_BP_C");

}

