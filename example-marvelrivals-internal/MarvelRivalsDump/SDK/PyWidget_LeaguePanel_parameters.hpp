#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LeaguePanel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_LeaguePanel.PyWidget_LeaguePanel.Tick
// 0x003C (0x003C - 0x0000)
struct PyWidget_LeaguePanel_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_LeaguePanel_Tick) == 0x000004, "Wrong alignment on PyWidget_LeaguePanel_Tick");
static_assert(sizeof(PyWidget_LeaguePanel_Tick) == 0x00003C, "Wrong size on PyWidget_LeaguePanel_Tick");
static_assert(offsetof(PyWidget_LeaguePanel_Tick, MyGeometry) == 0x000000, "Member 'PyWidget_LeaguePanel_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PyWidget_LeaguePanel_Tick, InDeltaTime) == 0x000038, "Member 'PyWidget_LeaguePanel_Tick::InDeltaTime' has a wrong offset!");

}

