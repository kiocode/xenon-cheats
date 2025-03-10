#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103429

#include "Basic.hpp"

#include "Hero_1034_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_103429.PyCue_Ability_Loop_10342901
// 0x0020 (0x21E0 - 0x21C0)
class APyCue_Ability_Loop_10342901 : public ACue_Ability_Loop_10342901
{
public:
	class UFXSystemAsset*                         MainEndFX;                                         // 0x21C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         JunctionRemoveFX;                                  // 0x21C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFXSystemAsset*                         SmallLaserRemoveFX;                                // 0x21D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnExecuteFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10342901">();
	}
	static class APyCue_Ability_Loop_10342901* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10342901>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10342901) == 0x000010, "Wrong alignment on APyCue_Ability_Loop_10342901");
static_assert(sizeof(APyCue_Ability_Loop_10342901) == 0x0021E0, "Wrong size on APyCue_Ability_Loop_10342901");
static_assert(offsetof(APyCue_Ability_Loop_10342901, MainEndFX) == 0x0021C0, "Member 'APyCue_Ability_Loop_10342901::MainEndFX' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10342901, JunctionRemoveFX) == 0x0021C8, "Member 'APyCue_Ability_Loop_10342901::JunctionRemoveFX' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10342901, SmallLaserRemoveFX) == 0x0021D0, "Member 'APyCue_Ability_Loop_10342901::SmallLaserRemoveFX' has a wrong offset!");

}

