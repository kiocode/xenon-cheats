#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1048

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Hero_1048_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Hero_1048.Ability_104831.GetFirstHomingLocations
// 0x0018 (0x0018 - 0x0000)
struct Ability_104831_GetFirstHomingLocations final
{
public:
	EShurikenRecallType                           RecallType;                                        // 0x0000(0x0001)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Ability_104831_GetFirstHomingLocations) == 0x000008, "Wrong alignment on Ability_104831_GetFirstHomingLocations");
static_assert(sizeof(Ability_104831_GetFirstHomingLocations) == 0x000018, "Wrong size on Ability_104831_GetFirstHomingLocations");
static_assert(offsetof(Ability_104831_GetFirstHomingLocations, RecallType) == 0x000000, "Member 'Ability_104831_GetFirstHomingLocations::RecallType' has a wrong offset!");
static_assert(offsetof(Ability_104831_GetFirstHomingLocations, ReturnValue) == 0x000008, "Member 'Ability_104831_GetFirstHomingLocations::ReturnValue' has a wrong offset!");

// Function Hero_1048.Ability_104831.OnProjectileSpawnSuccess
// 0x0170 (0x0170 - 0x0000)
struct Ability_104831_OnProjectileSpawnSuccess final
{
public:
	class AActor*                                 SpawnActor;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle       Data;                                              // 0x0008(0x0168)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(Ability_104831_OnProjectileSpawnSuccess) == 0x000008, "Wrong alignment on Ability_104831_OnProjectileSpawnSuccess");
static_assert(sizeof(Ability_104831_OnProjectileSpawnSuccess) == 0x000170, "Wrong size on Ability_104831_OnProjectileSpawnSuccess");
static_assert(offsetof(Ability_104831_OnProjectileSpawnSuccess, SpawnActor) == 0x000000, "Member 'Ability_104831_OnProjectileSpawnSuccess::SpawnActor' has a wrong offset!");
static_assert(offsetof(Ability_104831_OnProjectileSpawnSuccess, Data) == 0x000008, "Member 'Ability_104831_OnProjectileSpawnSuccess::Data' has a wrong offset!");

// Function Hero_1048.Ability_104831.RemoveAllShuriken
// 0x0002 (0x0002 - 0x0000)
struct Ability_104831_RemoveAllShuriken final
{
public:
	bool                                          bLaunch;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRecall;                                           // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Ability_104831_RemoveAllShuriken) == 0x000001, "Wrong alignment on Ability_104831_RemoveAllShuriken");
static_assert(sizeof(Ability_104831_RemoveAllShuriken) == 0x000002, "Wrong size on Ability_104831_RemoveAllShuriken");
static_assert(offsetof(Ability_104831_RemoveAllShuriken, bLaunch) == 0x000000, "Member 'Ability_104831_RemoveAllShuriken::bLaunch' has a wrong offset!");
static_assert(offsetof(Ability_104831_RemoveAllShuriken, bRecall) == 0x000001, "Member 'Ability_104831_RemoveAllShuriken::bRecall' has a wrong offset!");

// Function Hero_1048.Ability_104831.SetCurrentStageLocal
// 0x0001 (0x0001 - 0x0000)
struct Ability_104831_SetCurrentStageLocal final
{
public:
	EStage_104831                                 NewStage;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Ability_104831_SetCurrentStageLocal) == 0x000001, "Wrong alignment on Ability_104831_SetCurrentStageLocal");
static_assert(sizeof(Ability_104831_SetCurrentStageLocal) == 0x000001, "Wrong size on Ability_104831_SetCurrentStageLocal");
static_assert(offsetof(Ability_104831_SetCurrentStageLocal, NewStage) == 0x000000, "Member 'Ability_104831_SetCurrentStageLocal::NewStage' has a wrong offset!");

// Function Hero_1048.Ability_104831.SpawnRecallShuriken
// 0x0001 (0x0001 - 0x0000)
struct Ability_104831_SpawnRecallShuriken final
{
public:
	EShurikenRecallType                           RecallType;                                        // 0x0000(0x0001)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Ability_104831_SpawnRecallShuriken) == 0x000001, "Wrong alignment on Ability_104831_SpawnRecallShuriken");
static_assert(sizeof(Ability_104831_SpawnRecallShuriken) == 0x000001, "Wrong size on Ability_104831_SpawnRecallShuriken");
static_assert(offsetof(Ability_104831_SpawnRecallShuriken, RecallType) == 0x000000, "Member 'Ability_104831_SpawnRecallShuriken::RecallType' has a wrong offset!");

// Function Hero_1048.Projectile_10483101.AttachToTarget
// 0x0170 (0x0170 - 0x0000)
struct Projectile_10483101_AttachToTarget final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483101_AttachToTarget) == 0x000008, "Wrong alignment on Projectile_10483101_AttachToTarget");
static_assert(sizeof(Projectile_10483101_AttachToTarget) == 0x000170, "Wrong size on Projectile_10483101_AttachToTarget");
static_assert(offsetof(Projectile_10483101_AttachToTarget, Hit) == 0x000000, "Member 'Projectile_10483101_AttachToTarget::Hit' has a wrong offset!");

// Function Hero_1048.Projectile_10483101.DetachFromActorWithReason
// 0x0010 (0x0010 - 0x0000)
struct Projectile_10483101_DetachFromActorWithReason final
{
public:
	class FString                                 Reason;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483101_DetachFromActorWithReason) == 0x000008, "Wrong alignment on Projectile_10483101_DetachFromActorWithReason");
static_assert(sizeof(Projectile_10483101_DetachFromActorWithReason) == 0x000010, "Wrong size on Projectile_10483101_DetachFromActorWithReason");
static_assert(offsetof(Projectile_10483101_DetachFromActorWithReason, Reason) == 0x000000, "Member 'Projectile_10483101_DetachFromActorWithReason::Reason' has a wrong offset!");

// Function Hero_1048.Projectile_10483101.OnAttachActorEndPlay
// 0x0010 (0x0010 - 0x0000)
struct Projectile_10483101_OnAttachActorEndPlay final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(Projectile_10483101_OnAttachActorEndPlay) == 0x000008, "Wrong alignment on Projectile_10483101_OnAttachActorEndPlay");
static_assert(sizeof(Projectile_10483101_OnAttachActorEndPlay) == 0x000010, "Wrong size on Projectile_10483101_OnAttachActorEndPlay");
static_assert(offsetof(Projectile_10483101_OnAttachActorEndPlay, Actor) == 0x000000, "Member 'Projectile_10483101_OnAttachActorEndPlay::Actor' has a wrong offset!");
static_assert(offsetof(Projectile_10483101_OnAttachActorEndPlay, EndPlayReason) == 0x000008, "Member 'Projectile_10483101_OnAttachActorEndPlay::EndPlayReason' has a wrong offset!");

// Function Hero_1048.Projectile_10483101.OnAttachAgentEndTask
// 0x0008 (0x0008 - 0x0000)
struct Projectile_10483101_OnAttachAgentEndTask final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483101_OnAttachAgentEndTask) == 0x000008, "Wrong alignment on Projectile_10483101_OnAttachAgentEndTask");
static_assert(sizeof(Projectile_10483101_OnAttachAgentEndTask) == 0x000008, "Wrong size on Projectile_10483101_OnAttachAgentEndTask");
static_assert(offsetof(Projectile_10483101_OnAttachAgentEndTask, Actor) == 0x000000, "Member 'Projectile_10483101_OnAttachAgentEndTask::Actor' has a wrong offset!");

// Function Hero_1048.Projectile_10483101.OnAttachCharacterDeath
// 0x0028 (0x0028 - 0x0000)
struct Projectile_10483101_OnAttachCharacterDeath final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483101_OnAttachCharacterDeath) == 0x000008, "Wrong alignment on Projectile_10483101_OnAttachCharacterDeath");
static_assert(sizeof(Projectile_10483101_OnAttachCharacterDeath) == 0x000028, "Wrong size on Projectile_10483101_OnAttachCharacterDeath");
static_assert(offsetof(Projectile_10483101_OnAttachCharacterDeath, InSourceAvatar) == 0x000000, "Member 'Projectile_10483101_OnAttachCharacterDeath::InSourceAvatar' has a wrong offset!");
static_assert(offsetof(Projectile_10483101_OnAttachCharacterDeath, InTargetAvatar) == 0x000008, "Member 'Projectile_10483101_OnAttachCharacterDeath::InTargetAvatar' has a wrong offset!");
static_assert(offsetof(Projectile_10483101_OnAttachCharacterDeath, ParamHandle) == 0x000010, "Member 'Projectile_10483101_OnAttachCharacterDeath::ParamHandle' has a wrong offset!");

// Function Hero_1048.Projectile_10483101.SetShurikenStateLocal
// 0x0001 (0x0001 - 0x0000)
struct Projectile_10483101_SetShurikenStateLocal final
{
public:
	EShurikenState                                NewState;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483101_SetShurikenStateLocal) == 0x000001, "Wrong alignment on Projectile_10483101_SetShurikenStateLocal");
static_assert(sizeof(Projectile_10483101_SetShurikenStateLocal) == 0x000001, "Wrong size on Projectile_10483101_SetShurikenStateLocal");
static_assert(offsetof(Projectile_10483101_SetShurikenStateLocal, NewState) == 0x000000, "Member 'Projectile_10483101_SetShurikenStateLocal::NewState' has a wrong offset!");

// Function Hero_1048.Projectile_10483102.OnModifyMoveDelta
// 0x0018 (0x0018 - 0x0000)
struct Projectile_10483102_OnModifyMoveDelta final
{
public:
	struct FVector                                MoveDelta;                                         // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483102_OnModifyMoveDelta) == 0x000008, "Wrong alignment on Projectile_10483102_OnModifyMoveDelta");
static_assert(sizeof(Projectile_10483102_OnModifyMoveDelta) == 0x000018, "Wrong size on Projectile_10483102_OnModifyMoveDelta");
static_assert(offsetof(Projectile_10483102_OnModifyMoveDelta, MoveDelta) == 0x000000, "Member 'Projectile_10483102_OnModifyMoveDelta::MoveDelta' has a wrong offset!");

// Function Hero_1048.Projectile_10483102.TryHomingInstigator
// 0x0001 (0x0001 - 0x0000)
struct Projectile_10483102_TryHomingInstigator final
{
public:
	bool                                          bNeedFixProjInfo;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483102_TryHomingInstigator) == 0x000001, "Wrong alignment on Projectile_10483102_TryHomingInstigator");
static_assert(sizeof(Projectile_10483102_TryHomingInstigator) == 0x000001, "Wrong size on Projectile_10483102_TryHomingInstigator");
static_assert(offsetof(Projectile_10483102_TryHomingInstigator, bNeedFixProjInfo) == 0x000000, "Member 'Projectile_10483102_TryHomingInstigator::bNeedFixProjInfo' has a wrong offset!");

// Function Hero_1048.Projectile_10483102.K2_GetFirstSpeed
// 0x0004 (0x0004 - 0x0000)
struct Projectile_10483102_K2_GetFirstSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483102_K2_GetFirstSpeed) == 0x000004, "Wrong alignment on Projectile_10483102_K2_GetFirstSpeed");
static_assert(sizeof(Projectile_10483102_K2_GetFirstSpeed) == 0x000004, "Wrong size on Projectile_10483102_K2_GetFirstSpeed");
static_assert(offsetof(Projectile_10483102_K2_GetFirstSpeed, ReturnValue) == 0x000000, "Member 'Projectile_10483102_K2_GetFirstSpeed::ReturnValue' has a wrong offset!");

// Function Hero_1048.Projectile_10483102.K2_GetSecondSpeed
// 0x0004 (0x0004 - 0x0000)
struct Projectile_10483102_K2_GetSecondSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Projectile_10483102_K2_GetSecondSpeed) == 0x000004, "Wrong alignment on Projectile_10483102_K2_GetSecondSpeed");
static_assert(sizeof(Projectile_10483102_K2_GetSecondSpeed) == 0x000004, "Wrong size on Projectile_10483102_K2_GetSecondSpeed");
static_assert(offsetof(Projectile_10483102_K2_GetSecondSpeed, ReturnValue) == 0x000000, "Member 'Projectile_10483102_K2_GetSecondSpeed::ReturnValue' has a wrong offset!");

// Function Hero_1048.PsylockeCharacter.SetCharacterState
// 0x0001 (0x0001 - 0x0000)
struct PsylockeCharacter_SetCharacterState final
{
public:
	EPsylockeState                                NewState;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PsylockeCharacter_SetCharacterState) == 0x000001, "Wrong alignment on PsylockeCharacter_SetCharacterState");
static_assert(sizeof(PsylockeCharacter_SetCharacterState) == 0x000001, "Wrong size on PsylockeCharacter_SetCharacterState");
static_assert(offsetof(PsylockeCharacter_SetCharacterState, NewState) == 0x000000, "Member 'PsylockeCharacter_SetCharacterState::NewState' has a wrong offset!");

// Function Hero_1048.Summoned_104892.OnAbilitySystemDeath
// 0x0028 (0x0028 - 0x0000)
struct Summoned_104892_OnAbilitySystemDeath final
{
public:
	class AActor*                                 InSourceAvatar;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InTargetAvatar;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeModifierHandle               ModifierParameterHandle;                           // 0x0010(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Summoned_104892_OnAbilitySystemDeath) == 0x000008, "Wrong alignment on Summoned_104892_OnAbilitySystemDeath");
static_assert(sizeof(Summoned_104892_OnAbilitySystemDeath) == 0x000028, "Wrong size on Summoned_104892_OnAbilitySystemDeath");
static_assert(offsetof(Summoned_104892_OnAbilitySystemDeath, InSourceAvatar) == 0x000000, "Member 'Summoned_104892_OnAbilitySystemDeath::InSourceAvatar' has a wrong offset!");
static_assert(offsetof(Summoned_104892_OnAbilitySystemDeath, InTargetAvatar) == 0x000008, "Member 'Summoned_104892_OnAbilitySystemDeath::InTargetAvatar' has a wrong offset!");
static_assert(offsetof(Summoned_104892_OnAbilitySystemDeath, ModifierParameterHandle) == 0x000010, "Member 'Summoned_104892_OnAbilitySystemDeath::ModifierParameterHandle' has a wrong offset!");

// Function Hero_1048.Summoned_104892.GetSummonedComponent
// 0x0008 (0x0008 - 0x0000)
struct Summoned_104892_GetSummonedComponent final
{
public:
	class UMarvelSummonedComponent*               ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Summoned_104892_GetSummonedComponent) == 0x000008, "Wrong alignment on Summoned_104892_GetSummonedComponent");
static_assert(sizeof(Summoned_104892_GetSummonedComponent) == 0x000008, "Wrong size on Summoned_104892_GetSummonedComponent");
static_assert(offsetof(Summoned_104892_GetSummonedComponent, ReturnValue) == 0x000000, "Member 'Summoned_104892_GetSummonedComponent::ReturnValue' has a wrong offset!");

}

