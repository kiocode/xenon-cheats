#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103613

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103613.PyUIController_103613.SetAbility
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103613_SetAbility final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayAbility*                       InAbility;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103613_SetAbility) == 0x000008, "Wrong alignment on PyUIController_103613_SetAbility");
static_assert(sizeof(PyUIController_103613_SetAbility) == 0x000010, "Wrong size on PyUIController_103613_SetAbility");
static_assert(offsetof(PyUIController_103613_SetAbility, InAbilityId) == 0x000000, "Member 'PyUIController_103613_SetAbility::InAbilityId' has a wrong offset!");
static_assert(offsetof(PyUIController_103613_SetAbility, InAbility) == 0x000008, "Member 'PyUIController_103613_SetAbility::InAbility' has a wrong offset!");

// PythonFunction PyAbility_103613.PyUIController_103613.OnTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103613_OnTagUpdate final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          Exist;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103613_OnTagUpdate) == 0x000004, "Wrong alignment on PyUIController_103613_OnTagUpdate");
static_assert(sizeof(PyUIController_103613_OnTagUpdate) == 0x000010, "Wrong size on PyUIController_103613_OnTagUpdate");
static_assert(offsetof(PyUIController_103613_OnTagUpdate, Tag) == 0x000000, "Member 'PyUIController_103613_OnTagUpdate::Tag' has a wrong offset!");
static_assert(offsetof(PyUIController_103613_OnTagUpdate, Exist) == 0x00000C, "Member 'PyUIController_103613_OnTagUpdate::Exist' has a wrong offset!");

// PythonFunction PyAbility_103613.PyUIController_103613.OnMovementModeChanged
// 0x0010 (0x0010 - 0x0000)
struct PyUIController_103613_OnMovementModeChanged final
{
public:
	class ACharacter*                             Char;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Pre;                                               // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Precustom;                                         // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyUIController_103613_OnMovementModeChanged) == 0x000008, "Wrong alignment on PyUIController_103613_OnMovementModeChanged");
static_assert(sizeof(PyUIController_103613_OnMovementModeChanged) == 0x000010, "Wrong size on PyUIController_103613_OnMovementModeChanged");
static_assert(offsetof(PyUIController_103613_OnMovementModeChanged, Char) == 0x000000, "Member 'PyUIController_103613_OnMovementModeChanged::Char' has a wrong offset!");
static_assert(offsetof(PyUIController_103613_OnMovementModeChanged, Pre) == 0x000008, "Member 'PyUIController_103613_OnMovementModeChanged::Pre' has a wrong offset!");
static_assert(offsetof(PyUIController_103613_OnMovementModeChanged, Precustom) == 0x000009, "Member 'PyUIController_103613_OnMovementModeChanged::Precustom' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.CanActivate
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103613_CanActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103613_CanActivate) == 0x000001, "Wrong alignment on PyAbility_103613_CanActivate");
static_assert(sizeof(PyAbility_103613_CanActivate) == 0x000001, "Wrong size on PyAbility_103613_CanActivate");
static_assert(offsetof(PyAbility_103613_CanActivate, ReturnValue) == 0x000000, "Member 'PyAbility_103613_CanActivate::ReturnValue' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct PyAbility_103613_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103613_K2_OnEndAbility) == 0x000001, "Wrong alignment on PyAbility_103613_K2_OnEndAbility");
static_assert(sizeof(PyAbility_103613_K2_OnEndAbility) == 0x000001, "Wrong size on PyAbility_103613_K2_OnEndAbility");
static_assert(offsetof(PyAbility_103613_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'PyAbility_103613_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.OnSkillActivate
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103613_OnSkillActivate final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103613_OnSkillActivate) == 0x000008, "Wrong alignment on PyAbility_103613_OnSkillActivate");
static_assert(sizeof(PyAbility_103613_OnSkillActivate) == 0x000008, "Wrong size on PyAbility_103613_OnSkillActivate");
static_assert(offsetof(PyAbility_103613_OnSkillActivate, Ability) == 0x000000, "Member 'PyAbility_103613_OnSkillActivate::Ability' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.OnSkillMissile
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103613_OnSkillMissile final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103613_OnSkillMissile) == 0x000008, "Wrong alignment on PyAbility_103613_OnSkillMissile");
static_assert(sizeof(PyAbility_103613_OnSkillMissile) == 0x000008, "Wrong size on PyAbility_103613_OnSkillMissile");
static_assert(offsetof(PyAbility_103613_OnSkillMissile, Ability) == 0x000000, "Member 'PyAbility_103613_OnSkillMissile::Ability' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.OnSkillBreaked
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103613_OnSkillBreaked final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103613_OnSkillBreaked) == 0x000008, "Wrong alignment on PyAbility_103613_OnSkillBreaked");
static_assert(sizeof(PyAbility_103613_OnSkillBreaked) == 0x000008, "Wrong size on PyAbility_103613_OnSkillBreaked");
static_assert(offsetof(PyAbility_103613_OnSkillBreaked, Ability) == 0x000000, "Member 'PyAbility_103613_OnSkillBreaked::Ability' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.OnSkillEnded
// 0x0008 (0x0008 - 0x0000)
struct PyAbility_103613_OnSkillEnded final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103613_OnSkillEnded) == 0x000008, "Wrong alignment on PyAbility_103613_OnSkillEnded");
static_assert(sizeof(PyAbility_103613_OnSkillEnded) == 0x000008, "Wrong size on PyAbility_103613_OnSkillEnded");
static_assert(offsetof(PyAbility_103613_OnSkillEnded, Ability) == 0x000000, "Member 'PyAbility_103613_OnSkillEnded::Ability' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.OnSkillDamage
// 0x0020 (0x0020 - 0x0000)
struct PyAbility_103613_OnSkillDamage final
{
public:
	class UGameplayAbility*                       Ability;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               ParamHandle;                                       // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(PyAbility_103613_OnSkillDamage) == 0x000008, "Wrong alignment on PyAbility_103613_OnSkillDamage");
static_assert(sizeof(PyAbility_103613_OnSkillDamage) == 0x000020, "Wrong size on PyAbility_103613_OnSkillDamage");
static_assert(offsetof(PyAbility_103613_OnSkillDamage, Ability) == 0x000000, "Member 'PyAbility_103613_OnSkillDamage::Ability' has a wrong offset!");
static_assert(offsetof(PyAbility_103613_OnSkillDamage, ParamHandle) == 0x000008, "Member 'PyAbility_103613_OnSkillDamage::ParamHandle' has a wrong offset!");

// PythonFunction PyAbility_103613.PyAbility_103613.ModifyDeathImpulseInfo
// 0x06D8 (0x06D8 - 0x0000)
struct PyAbility_103613_ModifyDeathImpulseInfo final
{
public:
	int32                                         ImpulseLevel;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DeathDir;                                          // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierParameter            ModifierParameter;                                 // 0x0020(0x06B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyAbility_103613_ModifyDeathImpulseInfo) == 0x000008, "Wrong alignment on PyAbility_103613_ModifyDeathImpulseInfo");
static_assert(sizeof(PyAbility_103613_ModifyDeathImpulseInfo) == 0x0006D8, "Wrong size on PyAbility_103613_ModifyDeathImpulseInfo");
static_assert(offsetof(PyAbility_103613_ModifyDeathImpulseInfo, ImpulseLevel) == 0x000000, "Member 'PyAbility_103613_ModifyDeathImpulseInfo::ImpulseLevel' has a wrong offset!");
static_assert(offsetof(PyAbility_103613_ModifyDeathImpulseInfo, DeathDir) == 0x000008, "Member 'PyAbility_103613_ModifyDeathImpulseInfo::DeathDir' has a wrong offset!");
static_assert(offsetof(PyAbility_103613_ModifyDeathImpulseInfo, ModifierParameter) == 0x000020, "Member 'PyAbility_103613_ModifyDeathImpulseInfo::ModifierParameter' has a wrong offset!");

}

