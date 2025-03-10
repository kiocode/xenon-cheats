#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SelectHero_Corona

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_SelectHero_Corona.PyWidget_SelectHero_Corona.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_SelectHero_Corona_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_SelectHero_Corona_OnAnimationFinished) == 0x000008, "Wrong alignment on PyWidget_SelectHero_Corona_OnAnimationFinished");
static_assert(sizeof(PyWidget_SelectHero_Corona_OnAnimationFinished) == 0x000008, "Wrong size on PyWidget_SelectHero_Corona_OnAnimationFinished");
static_assert(offsetof(PyWidget_SelectHero_Corona_OnAnimationFinished, Animation) == 0x000000, "Member 'PyWidget_SelectHero_Corona_OnAnimationFinished::Animation' has a wrong offset!");

// PythonFunction PyWidget_SelectHero_Corona.PyWidget_SelectHero_Corona.Tick
// 0x003C (0x003C - 0x0000)
struct PyWidget_SelectHero_Corona_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_SelectHero_Corona_Tick) == 0x000004, "Wrong alignment on PyWidget_SelectHero_Corona_Tick");
static_assert(sizeof(PyWidget_SelectHero_Corona_Tick) == 0x00003C, "Wrong size on PyWidget_SelectHero_Corona_Tick");
static_assert(offsetof(PyWidget_SelectHero_Corona_Tick, MyGeometry) == 0x000000, "Member 'PyWidget_SelectHero_Corona_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_SelectHero_Corona_Tick, InDeltaTime) == 0x000038, "Member 'PyWidget_SelectHero_Corona_Tick::InDeltaTime' has a wrong offset!");

}

