#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102671

#include "Basic.hpp"

#include "Marvel_classes.hpp"
#include "Hero_1026_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102671.PyConfig_102671
// 0x0008 (0x00A0 - 0x0098)
class UPyConfig_102671 final : public UMarvelAbilityConfig
{
public:
	int32                                         TraceScopeID;                                      // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BuffID;                                            // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102671">();
	}
	static class UPyConfig_102671* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102671>();
	}
};
static_assert(alignof(UPyConfig_102671) == 0x000008, "Wrong alignment on UPyConfig_102671");
static_assert(sizeof(UPyConfig_102671) == 0x0000A0, "Wrong size on UPyConfig_102671");
static_assert(offsetof(UPyConfig_102671, TraceScopeID) == 0x000098, "Member 'UPyConfig_102671::TraceScopeID' has a wrong offset!");
static_assert(offsetof(UPyConfig_102671, BuffID) == 0x00009C, "Member 'UPyConfig_102671::BuffID' has a wrong offset!");

// PythonClass PyAbility_102671.PyAbility_102671
// 0x0000 (0x2580 - 0x2580)
class UPyAbility_102671 : public UAbility_102671
{
public:
	void BeginPlay();
	bool CanActivate();
	void K2_ActivateAbility();
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);
	void NativeOnMontageEvent(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102671">();
	}
	static class UPyAbility_102671* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102671>();
	}
};
static_assert(alignof(UPyAbility_102671) == 0x000008, "Wrong alignment on UPyAbility_102671");
static_assert(sizeof(UPyAbility_102671) == 0x002580, "Wrong size on UPyAbility_102671");

// PythonClass PyAbility_102671.PySummonedComp_10267101
// 0x0000 (0x0CA0 - 0x0CA0)
class UPySummonedComp_10267101 final : public USummonedComp_10267101
{
public:
	void ClearShiftCD();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySummonedComp_10267101">();
	}
	static class UPySummonedComp_10267101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySummonedComp_10267101>();
	}
};
static_assert(alignof(UPySummonedComp_10267101) == 0x000010, "Wrong alignment on UPySummonedComp_10267101");
static_assert(sizeof(UPySummonedComp_10267101) == 0x000CA0, "Wrong size on UPySummonedComp_10267101");

// PythonClass PyAbility_102671.PyCue_Ability_Loop_10267103
// 0x0008 (0x0E58 - 0x0E50)
class APyCue_Ability_Loop_10267103 final : public AMarvelCueNotify_Ability
{
public:
	float                                         TimeToDetach;                                      // 0x0E50(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void WhileActiveFX(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void Detach();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10267103">();
	}
	static class APyCue_Ability_Loop_10267103* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10267103>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10267103) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10267103");
static_assert(sizeof(APyCue_Ability_Loop_10267103) == 0x000E58, "Wrong size on APyCue_Ability_Loop_10267103");
static_assert(offsetof(APyCue_Ability_Loop_10267103, TimeToDetach) == 0x000E50, "Member 'APyCue_Ability_Loop_10267103::TimeToDetach' has a wrong offset!");

// PythonClass PyAbility_102671.PyProjectile_10267101
// 0x0000 (0x3050 - 0x3050)
class APyProjectile_10267101 final : public AMarvelAbilityTargetActor_Projectile
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyProjectile_10267101">();
	}
	static class APyProjectile_10267101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyProjectile_10267101>();
	}
};
static_assert(alignof(APyProjectile_10267101) == 0x000010, "Wrong alignment on APyProjectile_10267101");
static_assert(sizeof(APyProjectile_10267101) == 0x003050, "Wrong size on APyProjectile_10267101");

// PythonClass PyAbility_102671.PyCue_Ability_Loop_10267101
// 0x0018 (0x0E70 - 0x0E58)
class APyCue_Ability_Loop_10267101 final : public ACue_Ability_Loop_10267101
{
public:
	class UAnimationAsset*                        AnimToPlay;                                        // 0x0E58(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeToDetachMesh;                                  // 0x0E60(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeMeshExists;                                    // 0x0E64(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeSmokeAppear;                                   // 0x0E68(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeSmokeExists;                                   // 0x0E6C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void SetMeshInVisible();
	void DetachMesh();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Ability_Loop_10267101">();
	}
	static class APyCue_Ability_Loop_10267101* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Ability_Loop_10267101>();
	}
};
static_assert(alignof(APyCue_Ability_Loop_10267101) == 0x000008, "Wrong alignment on APyCue_Ability_Loop_10267101");
static_assert(sizeof(APyCue_Ability_Loop_10267101) == 0x000E70, "Wrong size on APyCue_Ability_Loop_10267101");
static_assert(offsetof(APyCue_Ability_Loop_10267101, AnimToPlay) == 0x000E58, "Member 'APyCue_Ability_Loop_10267101::AnimToPlay' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10267101, TimeToDetachMesh) == 0x000E60, "Member 'APyCue_Ability_Loop_10267101::TimeToDetachMesh' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10267101, TimeMeshExists) == 0x000E64, "Member 'APyCue_Ability_Loop_10267101::TimeMeshExists' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10267101, TimeSmokeAppear) == 0x000E68, "Member 'APyCue_Ability_Loop_10267101::TimeSmokeAppear' has a wrong offset!");
static_assert(offsetof(APyCue_Ability_Loop_10267101, TimeSmokeExists) == 0x000E6C, "Member 'APyCue_Ability_Loop_10267101::TimeSmokeExists' has a wrong offset!");

}

