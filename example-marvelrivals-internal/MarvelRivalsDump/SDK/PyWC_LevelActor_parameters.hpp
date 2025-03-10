#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWC_LevelActor

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction PyWC_LevelActor.PyWC_LevelActor.SetAttachment
// 0x0008 (0x0008 - 0x0000)
struct PyWC_LevelActor_SetAttachment final
{
public:
	class AActor*                                 AttachedActor;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWC_LevelActor_SetAttachment) == 0x000008, "Wrong alignment on PyWC_LevelActor_SetAttachment");
static_assert(sizeof(PyWC_LevelActor_SetAttachment) == 0x000008, "Wrong size on PyWC_LevelActor_SetAttachment");
static_assert(offsetof(PyWC_LevelActor_SetAttachment, AttachedActor) == 0x000000, "Member 'PyWC_LevelActor_SetAttachment::AttachedActor' has a wrong offset!");

// PythonFunction PyWC_LevelActor.PyWC_LevelActor.SetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWC_LevelActor_SetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWC_LevelActor_SetVisible) == 0x000001, "Wrong alignment on PyWC_LevelActor_SetVisible");
static_assert(sizeof(PyWC_LevelActor_SetVisible) == 0x000001, "Wrong size on PyWC_LevelActor_SetVisible");
static_assert(offsetof(PyWC_LevelActor_SetVisible, Visible) == 0x000000, "Member 'PyWC_LevelActor_SetVisible::Visible' has a wrong offset!");

}

