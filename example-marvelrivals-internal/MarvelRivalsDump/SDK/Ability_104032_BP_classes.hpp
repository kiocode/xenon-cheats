#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_104032_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hero_1040_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_104032_BP.Ability_104032_BP_C
// 0x0008 (0x2620 - 0x2618)
class UAbility_104032_BP_C final : public UAbility_104032
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2618(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_104032_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_104032_BP_C">();
	}
	static class UAbility_104032_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_104032_BP_C>();
	}
};
//static_assert(alignof(UAbility_104032_BP_C) == 0x000008, "Wrong alignment on UAbility_104032_BP_C");
//static_assert(sizeof(UAbility_104032_BP_C) == 0x002620, "Wrong size on UAbility_104032_BP_C");
//static_assert(offsetof(UAbility_104032_BP_C, UberGraphFrame) == 0x002618, "Member 'UAbility_104032_BP_C::UberGraphFrame' has a wrong offset!");

}

