#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattleTip

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_BattleTip.PyWidget_BattleTipsPanel.AddTransientTip
// 0x0048 (0x0048 - 0x0000)
struct PyWidget_BattleTipsPanel_AddTransientTip final
{
public:
	struct FWidgetStyle_BattleTransientTip        TipStyle;                                          // 0x0000(0x0048)(Parm)
};
static_assert(alignof(PyWidget_BattleTipsPanel_AddTransientTip) == 0x000008, "Wrong alignment on PyWidget_BattleTipsPanel_AddTransientTip");
static_assert(sizeof(PyWidget_BattleTipsPanel_AddTransientTip) == 0x000048, "Wrong size on PyWidget_BattleTipsPanel_AddTransientTip");
static_assert(offsetof(PyWidget_BattleTipsPanel_AddTransientTip, TipStyle) == 0x000000, "Member 'PyWidget_BattleTipsPanel_AddTransientTip::TipStyle' has a wrong offset!");

// PythonFunction PyWidget_BattleTip.PyWidget_BattleTipsPanel.RemovePersistentTip
// 0x0004 (0x0004 - 0x0000)
struct PyWidget_BattleTipsPanel_RemovePersistentTip final
{
public:
	int32                                         TipHandle;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_BattleTipsPanel_RemovePersistentTip) == 0x000004, "Wrong alignment on PyWidget_BattleTipsPanel_RemovePersistentTip");
static_assert(sizeof(PyWidget_BattleTipsPanel_RemovePersistentTip) == 0x000004, "Wrong size on PyWidget_BattleTipsPanel_RemovePersistentTip");
static_assert(offsetof(PyWidget_BattleTipsPanel_RemovePersistentTip, TipHandle) == 0x000000, "Member 'PyWidget_BattleTipsPanel_RemovePersistentTip::TipHandle' has a wrong offset!");

// PythonFunction PyWidget_BattleTip.PyWidget_BattleTipsPanel.AddPersistentTip
// 0x0050 (0x0050 - 0x0000)
struct PyWidget_BattleTipsPanel_AddPersistentTip final
{
public:
	struct FWidgetStyle_BattlePersistentTip       TipStyle;                                          // 0x0000(0x0048)(Parm)
	int32                                         ReturnValue;                                       // 0x0048(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_BattleTipsPanel_AddPersistentTip) == 0x000008, "Wrong alignment on PyWidget_BattleTipsPanel_AddPersistentTip");
static_assert(sizeof(PyWidget_BattleTipsPanel_AddPersistentTip) == 0x000050, "Wrong size on PyWidget_BattleTipsPanel_AddPersistentTip");
static_assert(offsetof(PyWidget_BattleTipsPanel_AddPersistentTip, TipStyle) == 0x000000, "Member 'PyWidget_BattleTipsPanel_AddPersistentTip::TipStyle' has a wrong offset!");
static_assert(offsetof(PyWidget_BattleTipsPanel_AddPersistentTip, ReturnValue) == 0x000048, "Member 'PyWidget_BattleTipsPanel_AddPersistentTip::ReturnValue' has a wrong offset!");

}

