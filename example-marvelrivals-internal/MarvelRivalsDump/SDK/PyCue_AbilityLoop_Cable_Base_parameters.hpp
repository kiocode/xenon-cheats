#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyCue_AbilityLoop_Cable_Base

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.WhileActive
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_AbilityLoop_Cable_Base_WhileActive) == 0x000008, "Wrong alignment on PyCue_AbilityLoop_Cable_Base_WhileActive");
static_assert(sizeof(PyCue_AbilityLoop_Cable_Base_WhileActive) == 0x0001C8, "Wrong size on PyCue_AbilityLoop_Cable_Base_WhileActive");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_WhileActive, MyTarget) == 0x000000, "Member 'PyCue_AbilityLoop_Cable_Base_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_WhileActive, Parameters) == 0x000008, "Member 'PyCue_AbilityLoop_Cable_Base_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_WhileActive, ReturnValue) == 0x0001C0, "Member 'PyCue_AbilityLoop_Cable_Base_WhileActive::ReturnValue' has a wrong offset!");

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.OnRemove
// 0x01C8 (0x01C8 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x01C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_AbilityLoop_Cable_Base_OnRemove) == 0x000008, "Wrong alignment on PyCue_AbilityLoop_Cable_Base_OnRemove");
static_assert(sizeof(PyCue_AbilityLoop_Cable_Base_OnRemove) == 0x0001C8, "Wrong size on PyCue_AbilityLoop_Cable_Base_OnRemove");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_OnRemove, MyTarget) == 0x000000, "Member 'PyCue_AbilityLoop_Cable_Base_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_OnRemove, Parameters) == 0x000008, "Member 'PyCue_AbilityLoop_Cable_Base_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_OnRemove, ReturnValue) == 0x0001C0, "Member 'PyCue_AbilityLoop_Cable_Base_OnRemove::ReturnValue' has a wrong offset!");

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.BeforeCableUpdate_PY
// 0x0004 (0x0004 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY) == 0x000004, "Wrong alignment on PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY");
static_assert(sizeof(PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY) == 0x000004, "Wrong size on PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY, DeltaTime) == 0x000000, "Member 'PyCue_AbilityLoop_Cable_Base_BeforeCableUpdate_PY::DeltaTime' has a wrong offset!");

// PythonFunction PyCue_AbilityLoop_Cable_Base.PyCue_AbilityLoop_Cable_Base.AfterCableUpdate_PY
// 0x0004 (0x0004 - 0x0000)
struct PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY) == 0x000004, "Wrong alignment on PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY");
static_assert(sizeof(PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY) == 0x000004, "Wrong size on PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY");
static_assert(offsetof(PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY, DeltaTime) == 0x000000, "Member 'PyCue_AbilityLoop_Cable_Base_AfterCableUpdate_PY::DeltaTime' has a wrong offset!");

}

