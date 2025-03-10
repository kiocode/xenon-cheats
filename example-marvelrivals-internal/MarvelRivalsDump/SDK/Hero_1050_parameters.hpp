#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1050

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function Hero_1050.Ability_105001.OnSkillEnergyAttrRegen
// 0x0008 (0x0008 - 0x0000)
struct Ability_105001_OnSkillEnergyAttrRegen final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OldValue;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Ability_105001_OnSkillEnergyAttrRegen) == 0x000004, "Wrong alignment on Ability_105001_OnSkillEnergyAttrRegen");
static_assert(sizeof(Ability_105001_OnSkillEnergyAttrRegen) == 0x000008, "Wrong size on Ability_105001_OnSkillEnergyAttrRegen");
static_assert(offsetof(Ability_105001_OnSkillEnergyAttrRegen, NewValue) == 0x000000, "Member 'Ability_105001_OnSkillEnergyAttrRegen::NewValue' has a wrong offset!");
static_assert(offsetof(Ability_105001_OnSkillEnergyAttrRegen, OldValue) == 0x000004, "Member 'Ability_105001_OnSkillEnergyAttrRegen::OldValue' has a wrong offset!");

// Function Hero_1050.Ability_105001.SetTargetInBattleState
// 0x0010 (0x0010 - 0x0000)
struct Ability_105001_SetTargetInBattleState final
{
public:
	class AActor*                                 InTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsBattling;                                       // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(Ability_105001_SetTargetInBattleState) == 0x000008, "Wrong alignment on Ability_105001_SetTargetInBattleState");
static_assert(sizeof(Ability_105001_SetTargetInBattleState) == 0x000010, "Wrong size on Ability_105001_SetTargetInBattleState");
static_assert(offsetof(Ability_105001_SetTargetInBattleState, InTarget) == 0x000000, "Member 'Ability_105001_SetTargetInBattleState::InTarget' has a wrong offset!");
static_assert(offsetof(Ability_105001_SetTargetInBattleState, bIsBattling) == 0x000008, "Member 'Ability_105001_SetTargetInBattleState::bIsBattling' has a wrong offset!");

// Function Hero_1050.Summoned_1050_Base.InitSummonedHealth
// 0x0004 (0x0004 - 0x0000)
struct Summoned_1050_Base_InitSummonedHealth final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Summoned_1050_Base_InitSummonedHealth) == 0x000004, "Wrong alignment on Summoned_1050_Base_InitSummonedHealth");
static_assert(sizeof(Summoned_1050_Base_InitSummonedHealth) == 0x000004, "Wrong size on Summoned_1050_Base_InitSummonedHealth");
static_assert(offsetof(Summoned_1050_Base_InitSummonedHealth, NewValue) == 0x000000, "Member 'Summoned_1050_Base_InitSummonedHealth::NewValue' has a wrong offset!");

// Function Hero_1050.Summoned_1050_Base.MulticastResetSummonedLifeSpan
// 0x0004 (0x0004 - 0x0000)
struct Summoned_1050_Base_MulticastResetSummonedLifeSpan final
{
public:
	float                                         InLifeTime;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Summoned_1050_Base_MulticastResetSummonedLifeSpan) == 0x000004, "Wrong alignment on Summoned_1050_Base_MulticastResetSummonedLifeSpan");
static_assert(sizeof(Summoned_1050_Base_MulticastResetSummonedLifeSpan) == 0x000004, "Wrong size on Summoned_1050_Base_MulticastResetSummonedLifeSpan");
static_assert(offsetof(Summoned_1050_Base_MulticastResetSummonedLifeSpan, InLifeTime) == 0x000000, "Member 'Summoned_1050_Base_MulticastResetSummonedLifeSpan::InLifeTime' has a wrong offset!");

// Function Hero_1050.Summoned_1050_Base.SetSummonedAttributeValue
// 0x0008 (0x0008 - 0x0000)
struct Summoned_1050_Base_SetSummonedAttributeValue final
{
public:
	EMarvelAttributeType                          InAttributeType;                                   // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewValue;                                          // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Summoned_1050_Base_SetSummonedAttributeValue) == 0x000004, "Wrong alignment on Summoned_1050_Base_SetSummonedAttributeValue");
static_assert(sizeof(Summoned_1050_Base_SetSummonedAttributeValue) == 0x000008, "Wrong size on Summoned_1050_Base_SetSummonedAttributeValue");
static_assert(offsetof(Summoned_1050_Base_SetSummonedAttributeValue, InAttributeType) == 0x000000, "Member 'Summoned_1050_Base_SetSummonedAttributeValue::InAttributeType' has a wrong offset!");
static_assert(offsetof(Summoned_1050_Base_SetSummonedAttributeValue, NewValue) == 0x000004, "Member 'Summoned_1050_Base_SetSummonedAttributeValue::NewValue' has a wrong offset!");

// Function Hero_1050.Summoned_1050_Base.GetSummonedSphereRadius
// 0x0004 (0x0004 - 0x0000)
struct Summoned_1050_Base_GetSummonedSphereRadius final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Summoned_1050_Base_GetSummonedSphereRadius) == 0x000004, "Wrong alignment on Summoned_1050_Base_GetSummonedSphereRadius");
static_assert(sizeof(Summoned_1050_Base_GetSummonedSphereRadius) == 0x000004, "Wrong size on Summoned_1050_Base_GetSummonedSphereRadius");
static_assert(offsetof(Summoned_1050_Base_GetSummonedSphereRadius, ReturnValue) == 0x000000, "Member 'Summoned_1050_Base_GetSummonedSphereRadius::ReturnValue' has a wrong offset!");

// Function Hero_1050.Summoned_1050_Base.SetSummonedSphereRadius
// 0x0004 (0x0004 - 0x0000)
struct Summoned_1050_Base_SetSummonedSphereRadius final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Summoned_1050_Base_SetSummonedSphereRadius) == 0x000004, "Wrong alignment on Summoned_1050_Base_SetSummonedSphereRadius");
static_assert(sizeof(Summoned_1050_Base_SetSummonedSphereRadius) == 0x000004, "Wrong size on Summoned_1050_Base_SetSummonedSphereRadius");
static_assert(offsetof(Summoned_1050_Base_SetSummonedSphereRadius, NewValue) == 0x000000, "Member 'Summoned_1050_Base_SetSummonedSphereRadius::NewValue' has a wrong offset!");

// Function Hero_1050.NotTreatShield_NonOverflow.ShouldExecuteNotTreatShield
// 0x0008 (0x0008 - 0x0000)
struct NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield final
{
public:
	float                                         OutMagnitude;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield) == 0x000004, "Wrong alignment on NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield");
static_assert(sizeof(NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield) == 0x000008, "Wrong size on NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield");
static_assert(offsetof(NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield, OutMagnitude) == 0x000000, "Member 'NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield::OutMagnitude' has a wrong offset!");
static_assert(offsetof(NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield, ReturnValue) == 0x000004, "Member 'NotTreatShield_NonOverflow_ShouldExecuteNotTreatShield::ReturnValue' has a wrong offset!");

// Function Hero_1050.EpicMomentAction_1050.OnScopeBegin
// 0x0060 (0x0060 - 0x0000)
struct EpicMomentAction_1050_OnScopeBegin final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelGameplayAbility*                 SourceAbility;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Scope;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMarvelTargetActorGenerateInfo         GenerateInfo;                                      // 0x0018(0x0048)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicMomentAction_1050_OnScopeBegin) == 0x000008, "Wrong alignment on EpicMomentAction_1050_OnScopeBegin");
static_assert(sizeof(EpicMomentAction_1050_OnScopeBegin) == 0x000060, "Wrong size on EpicMomentAction_1050_OnScopeBegin");
static_assert(offsetof(EpicMomentAction_1050_OnScopeBegin, SourceActor) == 0x000000, "Member 'EpicMomentAction_1050_OnScopeBegin::SourceActor' has a wrong offset!");
static_assert(offsetof(EpicMomentAction_1050_OnScopeBegin, SourceAbility) == 0x000008, "Member 'EpicMomentAction_1050_OnScopeBegin::SourceAbility' has a wrong offset!");
static_assert(offsetof(EpicMomentAction_1050_OnScopeBegin, Scope) == 0x000010, "Member 'EpicMomentAction_1050_OnScopeBegin::Scope' has a wrong offset!");
static_assert(offsetof(EpicMomentAction_1050_OnScopeBegin, GenerateInfo) == 0x000018, "Member 'EpicMomentAction_1050_OnScopeBegin::GenerateInfo' has a wrong offset!");

// Function Hero_1050.EpicMomentAction_1050.OnScopeEnd
// 0x0008 (0x0008 - 0x0000)
struct EpicMomentAction_1050_OnScopeEnd final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicMomentAction_1050_OnScopeEnd) == 0x000008, "Wrong alignment on EpicMomentAction_1050_OnScopeEnd");
static_assert(sizeof(EpicMomentAction_1050_OnScopeEnd) == 0x000008, "Wrong size on EpicMomentAction_1050_OnScopeEnd");
static_assert(offsetof(EpicMomentAction_1050_OnScopeEnd, InActor) == 0x000000, "Member 'EpicMomentAction_1050_OnScopeEnd::InActor' has a wrong offset!");

// Function Hero_1050.Scope_105071_Manager.Get
// 0x0010 (0x0010 - 0x0000)
struct Scope_105071_Manager_Get final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScope_105071_Manager*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Scope_105071_Manager_Get) == 0x000008, "Wrong alignment on Scope_105071_Manager_Get");
static_assert(sizeof(Scope_105071_Manager_Get) == 0x000010, "Wrong size on Scope_105071_Manager_Get");
static_assert(offsetof(Scope_105071_Manager_Get, WorldContextObject) == 0x000000, "Member 'Scope_105071_Manager_Get::WorldContextObject' has a wrong offset!");
static_assert(offsetof(Scope_105071_Manager_Get, ReturnValue) == 0x000008, "Member 'Scope_105071_Manager_Get::ReturnValue' has a wrong offset!");

// Function Hero_1050.Scope_105071_Manager.CheckCanReleaseScope
// 0x0010 (0x0010 - 0x0000)
struct Scope_105071_Manager_CheckCanReleaseScope final
{
public:
	const class AActor*                           InActor;                                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(Scope_105071_Manager_CheckCanReleaseScope) == 0x000008, "Wrong alignment on Scope_105071_Manager_CheckCanReleaseScope");
static_assert(sizeof(Scope_105071_Manager_CheckCanReleaseScope) == 0x000010, "Wrong size on Scope_105071_Manager_CheckCanReleaseScope");
static_assert(offsetof(Scope_105071_Manager_CheckCanReleaseScope, InActor) == 0x000000, "Member 'Scope_105071_Manager_CheckCanReleaseScope::InActor' has a wrong offset!");
static_assert(offsetof(Scope_105071_Manager_CheckCanReleaseScope, ReturnValue) == 0x000008, "Member 'Scope_105071_Manager_CheckCanReleaseScope::ReturnValue' has a wrong offset!");

// Function Hero_1050.Stealth_105002.OnAbilityActivateFailed
// 0x0070 (0x0070 - 0x0000)
struct Stealth_105002_OnAbilityActivateFailed final
{
public:
	const class UGameplayAbility*                 Ability;                                           // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x0008(0x0068)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Stealth_105002_OnAbilityActivateFailed) == 0x000008, "Wrong alignment on Stealth_105002_OnAbilityActivateFailed");
static_assert(sizeof(Stealth_105002_OnAbilityActivateFailed) == 0x000070, "Wrong size on Stealth_105002_OnAbilityActivateFailed");
static_assert(offsetof(Stealth_105002_OnAbilityActivateFailed, Ability) == 0x000000, "Member 'Stealth_105002_OnAbilityActivateFailed::Ability' has a wrong offset!");
static_assert(offsetof(Stealth_105002_OnAbilityActivateFailed, GameplayTags) == 0x000008, "Member 'Stealth_105002_OnAbilityActivateFailed::GameplayTags' has a wrong offset!");

// Function Hero_1050.Stealth_105002.OnCharacterBattleStateChanged
// 0x0001 (0x0001 - 0x0000)
struct Stealth_105002_OnCharacterBattleStateChanged final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Stealth_105002_OnCharacterBattleStateChanged) == 0x000001, "Wrong alignment on Stealth_105002_OnCharacterBattleStateChanged");
static_assert(sizeof(Stealth_105002_OnCharacterBattleStateChanged) == 0x000001, "Wrong size on Stealth_105002_OnCharacterBattleStateChanged");
static_assert(offsetof(Stealth_105002_OnCharacterBattleStateChanged, bValue) == 0x000000, "Member 'Stealth_105002_OnCharacterBattleStateChanged::bValue' has a wrong offset!");

}

