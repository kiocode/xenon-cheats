#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySignalHandlerActor

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct PySignalHandlerActor_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_ReceiveEndPlay) == 0x000001, "Wrong alignment on PySignalHandlerActor_ReceiveEndPlay");
static_assert(sizeof(PySignalHandlerActor_ReceiveEndPlay) == 0x000001, "Wrong size on PySignalHandlerActor_ReceiveEndPlay");
static_assert(offsetof(PySignalHandlerActor_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PySignalHandlerActor_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.SetRequestResult
// 0x0190 (0x0190 - 0x0000)
struct PySignalHandlerActor_SetRequestResult final
{
public:
	struct FSignalResult                          Result;                                            // 0x0000(0x0190)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySignalHandlerActor_SetRequestResult) == 0x000008, "Wrong alignment on PySignalHandlerActor_SetRequestResult");
static_assert(sizeof(PySignalHandlerActor_SetRequestResult) == 0x000190, "Wrong size on PySignalHandlerActor_SetRequestResult");
static_assert(offsetof(PySignalHandlerActor_SetRequestResult, Result) == 0x000000, "Member 'PySignalHandlerActor_SetRequestResult::Result' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.SetAbilityID
// 0x0004 (0x0004 - 0x0000)
struct PySignalHandlerActor_SetAbilityID final
{
public:
	int32                                         InAbilityId;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_SetAbilityID) == 0x000004, "Wrong alignment on PySignalHandlerActor_SetAbilityID");
static_assert(sizeof(PySignalHandlerActor_SetAbilityID) == 0x000004, "Wrong size on PySignalHandlerActor_SetAbilityID");
static_assert(offsetof(PySignalHandlerActor_SetAbilityID, InAbilityId) == 0x000000, "Member 'PySignalHandlerActor_SetAbilityID::InAbilityId' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.CancelSignal
// 0x0001 (0x0001 - 0x0000)
struct PySignalHandlerActor_CancelSignal final
{
public:
	bool                                          Is_cancel;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_CancelSignal) == 0x000001, "Wrong alignment on PySignalHandlerActor_CancelSignal");
static_assert(sizeof(PySignalHandlerActor_CancelSignal) == 0x000001, "Wrong size on PySignalHandlerActor_CancelSignal");
static_assert(offsetof(PySignalHandlerActor_CancelSignal, Is_cancel) == 0x000000, "Member 'PySignalHandlerActor_CancelSignal::Is_cancel' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.SetBeCancelled
// 0x0001 (0x0001 - 0x0000)
struct PySignalHandlerActor_SetBeCancelled final
{
public:
	bool                                          IsBeCancelled;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_SetBeCancelled) == 0x000001, "Wrong alignment on PySignalHandlerActor_SetBeCancelled");
static_assert(sizeof(PySignalHandlerActor_SetBeCancelled) == 0x000001, "Wrong size on PySignalHandlerActor_SetBeCancelled");
static_assert(offsetof(PySignalHandlerActor_SetBeCancelled, IsBeCancelled) == 0x000000, "Member 'PySignalHandlerActor_SetBeCancelled::IsBeCancelled' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.StartHandlerSignal
// 0x0190 (0x0190 - 0x0000)
struct PySignalHandlerActor_StartHandlerSignal final
{
public:
	struct FSignalResult                          Result;                                            // 0x0000(0x0190)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySignalHandlerActor_StartHandlerSignal) == 0x000008, "Wrong alignment on PySignalHandlerActor_StartHandlerSignal");
static_assert(sizeof(PySignalHandlerActor_StartHandlerSignal) == 0x000190, "Wrong size on PySignalHandlerActor_StartHandlerSignal");
static_assert(offsetof(PySignalHandlerActor_StartHandlerSignal, Result) == 0x000000, "Member 'PySignalHandlerActor_StartHandlerSignal::Result' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.EndHandlerSignal
// 0x0190 (0x0190 - 0x0000)
struct PySignalHandlerActor_EndHandlerSignal final
{
public:
	struct FSignalResult                          Result;                                            // 0x0000(0x0190)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PySignalHandlerActor_EndHandlerSignal) == 0x000008, "Wrong alignment on PySignalHandlerActor_EndHandlerSignal");
static_assert(sizeof(PySignalHandlerActor_EndHandlerSignal) == 0x000190, "Wrong size on PySignalHandlerActor_EndHandlerSignal");
static_assert(offsetof(PySignalHandlerActor_EndHandlerSignal, Result) == 0x000000, "Member 'PySignalHandlerActor_EndHandlerSignal::Result' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.OnSummonedEndAgentTask
// 0x0008 (0x0008 - 0x0000)
struct PySignalHandlerActor_OnSummonedEndAgentTask final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_OnSummonedEndAgentTask) == 0x000008, "Wrong alignment on PySignalHandlerActor_OnSummonedEndAgentTask");
static_assert(sizeof(PySignalHandlerActor_OnSummonedEndAgentTask) == 0x000008, "Wrong size on PySignalHandlerActor_OnSummonedEndAgentTask");
static_assert(offsetof(PySignalHandlerActor_OnSummonedEndAgentTask, InActor) == 0x000000, "Member 'PySignalHandlerActor_OnSummonedEndAgentTask::InActor' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.OnComOwnerChanged
// 0x0008 (0x0008 - 0x0000)
struct PySignalHandlerActor_OnComOwnerChanged final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_OnComOwnerChanged) == 0x000008, "Wrong alignment on PySignalHandlerActor_OnComOwnerChanged");
static_assert(sizeof(PySignalHandlerActor_OnComOwnerChanged) == 0x000008, "Wrong size on PySignalHandlerActor_OnComOwnerChanged");
static_assert(offsetof(PySignalHandlerActor_OnComOwnerChanged, InActor) == 0x000000, "Member 'PySignalHandlerActor_OnComOwnerChanged::InActor' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.SetIsFallOff
// 0x0001 (0x0001 - 0x0000)
struct PySignalHandlerActor_SetIsFallOff final
{
public:
	bool                                          IsFallOff_0;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_SetIsFallOff) == 0x000001, "Wrong alignment on PySignalHandlerActor_SetIsFallOff");
static_assert(sizeof(PySignalHandlerActor_SetIsFallOff) == 0x000001, "Wrong size on PySignalHandlerActor_SetIsFallOff");
static_assert(offsetof(PySignalHandlerActor_SetIsFallOff, IsFallOff_0) == 0x000000, "Member 'PySignalHandlerActor_SetIsFallOff::IsFallOff_0' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.CanHandlerSignal
// 0x0001 (0x0001 - 0x0000)
struct PySignalHandlerActor_CanHandlerSignal final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_CanHandlerSignal) == 0x000001, "Wrong alignment on PySignalHandlerActor_CanHandlerSignal");
static_assert(sizeof(PySignalHandlerActor_CanHandlerSignal) == 0x000001, "Wrong size on PySignalHandlerActor_CanHandlerSignal");
static_assert(offsetof(PySignalHandlerActor_CanHandlerSignal, ReturnValue) == 0x000000, "Member 'PySignalHandlerActor_CanHandlerSignal::ReturnValue' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.SetResponsableState
// 0x0001 (0x0001 - 0x0000)
struct PySignalHandlerActor_SetResponsableState final
{
public:
	bool                                          IsResponsable;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_SetResponsableState) == 0x000001, "Wrong alignment on PySignalHandlerActor_SetResponsableState");
static_assert(sizeof(PySignalHandlerActor_SetResponsableState) == 0x000001, "Wrong size on PySignalHandlerActor_SetResponsableState");
static_assert(offsetof(PySignalHandlerActor_SetResponsableState, IsResponsable) == 0x000000, "Member 'PySignalHandlerActor_SetResponsableState::IsResponsable' has a wrong offset!");

// PythonFunction PySignalHandlerActor.PySignalHandlerActor.SetActive
// 0x0001 (0x0001 - 0x0000)
struct PySignalHandlerActor_SetActive final
{
public:
	bool                                          bInActive;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PySignalHandlerActor_SetActive) == 0x000001, "Wrong alignment on PySignalHandlerActor_SetActive");
static_assert(sizeof(PySignalHandlerActor_SetActive) == 0x000001, "Wrong size on PySignalHandlerActor_SetActive");
static_assert(offsetof(PySignalHandlerActor_SetActive, bInActive) == 0x000000, "Member 'PySignalHandlerActor_SetActive::bInActive' has a wrong offset!");

}

