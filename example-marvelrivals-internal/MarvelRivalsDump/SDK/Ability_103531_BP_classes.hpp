#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_103531_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hero_1035_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_103531_BP.Ability_103531_BP_C
// 0x0008 (0x2A10 - 0x2A08)
class UAbility_103531_BP_C final : public UAbility_103531
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2A08(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Ability_103531_BP(int32 EntryPoint);
	void SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget);
	void SetAbilityStatusWidget_1(class UUserWidget* InUserWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_103531_BP_C">();
	}
	static class UAbility_103531_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_103531_BP_C>();
	}
};
//static_assert(alignof(UAbility_103531_BP_C) == 0x000008, "Wrong alignment on UAbility_103531_BP_C");
//static_assert(sizeof(UAbility_103531_BP_C) == 0x002A10, "Wrong size on UAbility_103531_BP_C");
//static_assert(offsetof(UAbility_103531_BP_C, UberGraphFrame) == 0x002A08, "Member 'UAbility_103531_BP_C::UberGraphFrame' has a wrong offset!");

}

