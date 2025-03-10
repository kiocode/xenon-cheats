#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102461

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_102461.PyProjectile_102461.K2_OnFlyOverMaxDistance
// 0x0170 (0x0170 - 0x0000)
struct PyProjectile_102461_K2_OnFlyOverMaxDistance final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyProjectile_102461_K2_OnFlyOverMaxDistance) == 0x000008, "Wrong alignment on PyProjectile_102461_K2_OnFlyOverMaxDistance");
static_assert(sizeof(PyProjectile_102461_K2_OnFlyOverMaxDistance) == 0x000170, "Wrong size on PyProjectile_102461_K2_OnFlyOverMaxDistance");
static_assert(offsetof(PyProjectile_102461_K2_OnFlyOverMaxDistance, HitResult) == 0x000000, "Member 'PyProjectile_102461_K2_OnFlyOverMaxDistance::HitResult' has a wrong offset!");

// PythonFunction PyAbility_102461.PyProjectile_102461.K2_OnProcessHit
// 0x0170 (0x0170 - 0x0000)
struct PyProjectile_102461_K2_OnProcessHit final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x0170)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyProjectile_102461_K2_OnProcessHit) == 0x000008, "Wrong alignment on PyProjectile_102461_K2_OnProcessHit");
static_assert(sizeof(PyProjectile_102461_K2_OnProcessHit) == 0x000170, "Wrong size on PyProjectile_102461_K2_OnProcessHit");
static_assert(offsetof(PyProjectile_102461_K2_OnProcessHit, ImpactResult) == 0x000000, "Member 'PyProjectile_102461_K2_OnProcessHit::ImpactResult' has a wrong offset!");

// PythonFunction PyAbility_102461.PyProjectile_102461.K2_OnProjectileInfoForceChanged_ThreadSafe
// 0x0260 (0x0260 - 0x0000)
struct PyProjectile_102461_K2_OnProjectileInfoForceChanged_ThreadSafe final
{
public:
	struct FProjectileForceChangedInfo            InProjectileForceChangedInfo;                      // 0x0000(0x0260)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyProjectile_102461_K2_OnProjectileInfoForceChanged_ThreadSafe) == 0x000008, "Wrong alignment on PyProjectile_102461_K2_OnProjectileInfoForceChanged_ThreadSafe");
static_assert(sizeof(PyProjectile_102461_K2_OnProjectileInfoForceChanged_ThreadSafe) == 0x000260, "Wrong size on PyProjectile_102461_K2_OnProjectileInfoForceChanged_ThreadSafe");
static_assert(offsetof(PyProjectile_102461_K2_OnProjectileInfoForceChanged_ThreadSafe, InProjectileForceChangedInfo) == 0x000000, "Member 'PyProjectile_102461_K2_OnProjectileInfoForceChanged_ThreadSafe::InProjectileForceChangedInfo' has a wrong offset!");

// PythonFunction PyAbility_102461.PyScope_10246101.OnTraceResults
// 0x0010 (0x0010 - 0x0000)
struct PyScope_10246101_OnTraceResults final
{
public:
	TArray<struct FHitResult>                     HitResults;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyScope_10246101_OnTraceResults) == 0x000008, "Wrong alignment on PyScope_10246101_OnTraceResults");
static_assert(sizeof(PyScope_10246101_OnTraceResults) == 0x000010, "Wrong size on PyScope_10246101_OnTraceResults");
static_assert(offsetof(PyScope_10246101_OnTraceResults, HitResults) == 0x000000, "Member 'PyScope_10246101_OnTraceResults::HitResults' has a wrong offset!");

// DelegateFunction PyAbility_102461.PyAbility_102461.OnSoulLinkEnemy__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102461_OnSoulLinkEnemy__DelegateSignature final
{
public:
	TArray<class AActor*>                         TargetList;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_102461_OnSoulLinkEnemy__DelegateSignature) == 0x000008, "Wrong alignment on PyAbility_102461_OnSoulLinkEnemy__DelegateSignature");
static_assert(sizeof(PyAbility_102461_OnSoulLinkEnemy__DelegateSignature) == 0x000010, "Wrong size on PyAbility_102461_OnSoulLinkEnemy__DelegateSignature");
static_assert(offsetof(PyAbility_102461_OnSoulLinkEnemy__DelegateSignature, TargetList) == 0x000000, "Member 'PyAbility_102461_OnSoulLinkEnemy__DelegateSignature::TargetList' has a wrong offset!");

// PythonFunction PyAbility_102461.PyAbility_102461.NativeOnMontageInterrupted
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102461_NativeOnMontageInterrupted final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102461_NativeOnMontageInterrupted) == 0x000008, "Wrong alignment on PyAbility_102461_NativeOnMontageInterrupted");
static_assert(sizeof(PyAbility_102461_NativeOnMontageInterrupted) == 0x000010, "Wrong size on PyAbility_102461_NativeOnMontageInterrupted");
static_assert(offsetof(PyAbility_102461_NativeOnMontageInterrupted, Tag) == 0x000000, "Member 'PyAbility_102461_NativeOnMontageInterrupted::Tag' has a wrong offset!");

// PythonFunction PyAbility_102461.PyAbility_102461.NativeOnMontageCancelled
// 0x0010 (0x0010 - 0x0000)
struct PyAbility_102461_NativeOnMontageCancelled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_102461_NativeOnMontageCancelled) == 0x000008, "Wrong alignment on PyAbility_102461_NativeOnMontageCancelled");
static_assert(sizeof(PyAbility_102461_NativeOnMontageCancelled) == 0x000010, "Wrong size on PyAbility_102461_NativeOnMontageCancelled");
static_assert(offsetof(PyAbility_102461_NativeOnMontageCancelled, Tag) == 0x000000, "Member 'PyAbility_102461_NativeOnMontageCancelled::Tag' has a wrong offset!");

// PythonFunction PyAbility_102461.PyAbility_102461.HandleAnimSocketInfo
// 0x00B0 (0x00B0 - 0x0000)
struct PyAbility_102461_HandleAnimSocketInfo final
{
public:
	int32                                         SocketId;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarvelAbilitySocketInfo               SocketInfo;                                        // 0x0010(0x00A0)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PyAbility_102461_HandleAnimSocketInfo) == 0x000010, "Wrong alignment on PyAbility_102461_HandleAnimSocketInfo");
static_assert(sizeof(PyAbility_102461_HandleAnimSocketInfo) == 0x0000B0, "Wrong size on PyAbility_102461_HandleAnimSocketInfo");
static_assert(offsetof(PyAbility_102461_HandleAnimSocketInfo, SocketId) == 0x000000, "Member 'PyAbility_102461_HandleAnimSocketInfo::SocketId' has a wrong offset!");
static_assert(offsetof(PyAbility_102461_HandleAnimSocketInfo, SocketInfo) == 0x000010, "Member 'PyAbility_102461_HandleAnimSocketInfo::SocketInfo' has a wrong offset!");

// PythonFunction PyAbility_102461.PyCue_Buff_10246103.WhileActiveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_10246103_WhileActiveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Buff_10246103_WhileActiveFX) == 0x000008, "Wrong alignment on PyCue_Buff_10246103_WhileActiveFX");
static_assert(sizeof(PyCue_Buff_10246103_WhileActiveFX) == 0x0001C0, "Wrong size on PyCue_Buff_10246103_WhileActiveFX");
static_assert(offsetof(PyCue_Buff_10246103_WhileActiveFX, MyTarget) == 0x000000, "Member 'PyCue_Buff_10246103_WhileActiveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_10246103_WhileActiveFX, Parameters) == 0x000008, "Member 'PyCue_Buff_10246103_WhileActiveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_102461.PyCue_Buff_10246103.OnRemoveFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Buff_10246103_OnRemoveFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Buff_10246103_OnRemoveFX) == 0x000008, "Wrong alignment on PyCue_Buff_10246103_OnRemoveFX");
static_assert(sizeof(PyCue_Buff_10246103_OnRemoveFX) == 0x0001C0, "Wrong size on PyCue_Buff_10246103_OnRemoveFX");
static_assert(offsetof(PyCue_Buff_10246103_OnRemoveFX, MyTarget) == 0x000000, "Member 'PyCue_Buff_10246103_OnRemoveFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Buff_10246103_OnRemoveFX, Parameters) == 0x000008, "Member 'PyCue_Buff_10246103_OnRemoveFX::Parameters' has a wrong offset!");

// PythonFunction PyAbility_102461.PyCue_Projectile_Loop_10246101.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Projectile_Loop_10246101_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Projectile_Loop_10246101_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Projectile_Loop_10246101_OnExecuteFX");
static_assert(sizeof(PyCue_Projectile_Loop_10246101_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Projectile_Loop_10246101_OnExecuteFX");
static_assert(offsetof(PyCue_Projectile_Loop_10246101_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Projectile_Loop_10246101_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Projectile_Loop_10246101_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Projectile_Loop_10246101_OnExecuteFX::Parameters' has a wrong offset!");

}

