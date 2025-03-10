#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Guide_Panel

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// DelegateFunction PyWidget_Guide_Panel.PyWidget_GuideActionTips.OnTipClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_GuideActionTips_OnTipClicked__DelegateSignature final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionTips_OnTipClicked__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_GuideActionTips_OnTipClicked__DelegateSignature");
static_assert(sizeof(PyWidget_GuideActionTips_OnTipClicked__DelegateSignature) == 0x000010, "Wrong size on PyWidget_GuideActionTips_OnTipClicked__DelegateSignature");
static_assert(offsetof(PyWidget_GuideActionTips_OnTipClicked__DelegateSignature, EventName) == 0x000000, "Member 'PyWidget_GuideActionTips_OnTipClicked__DelegateSignature::EventName' has a wrong offset!");

// PythonFunction PyWidget_Guide_Panel.PyWidget_GuideActionTips.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_GuideActionTips_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionTips_PreConstruct) == 0x000001, "Wrong alignment on PyWidget_GuideActionTips_PreConstruct");
static_assert(sizeof(PyWidget_GuideActionTips_PreConstruct) == 0x000001, "Wrong size on PyWidget_GuideActionTips_PreConstruct");
static_assert(offsetof(PyWidget_GuideActionTips_PreConstruct, IsDesignTime) == 0x000000, "Member 'PyWidget_GuideActionTips_PreConstruct::IsDesignTime' has a wrong offset!");

// PythonFunction PyWidget_Guide_Panel.PyWidget_GuideActionTips.ShouldEnableInput
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_GuideActionTips_ShouldEnableInput final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionTips_ShouldEnableInput) == 0x000001, "Wrong alignment on PyWidget_GuideActionTips_ShouldEnableInput");
static_assert(sizeof(PyWidget_GuideActionTips_ShouldEnableInput) == 0x000001, "Wrong size on PyWidget_GuideActionTips_ShouldEnableInput");
static_assert(offsetof(PyWidget_GuideActionTips_ShouldEnableInput, ReturnValue) == 0x000000, "Member 'PyWidget_GuideActionTips_ShouldEnableInput::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_Guide_Panel.PyWidget_GuideActionTips.OnReceiveInputKey
// 0x0028 (0x0028 - 0x0000)
struct PyWidget_GuideActionTips_OnReceiveInputKey final
{
public:
	struct FKey                                   InKey;                                             // 0x0000(0x0020)(Parm, HasGetValueTypeHash)
	EInputEvent                                   EventType;                                         // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionTips_OnReceiveInputKey) == 0x000008, "Wrong alignment on PyWidget_GuideActionTips_OnReceiveInputKey");
static_assert(sizeof(PyWidget_GuideActionTips_OnReceiveInputKey) == 0x000028, "Wrong size on PyWidget_GuideActionTips_OnReceiveInputKey");
static_assert(offsetof(PyWidget_GuideActionTips_OnReceiveInputKey, InKey) == 0x000000, "Member 'PyWidget_GuideActionTips_OnReceiveInputKey::InKey' has a wrong offset!");
static_assert(offsetof(PyWidget_GuideActionTips_OnReceiveInputKey, EventType) == 0x000020, "Member 'PyWidget_GuideActionTips_OnReceiveInputKey::EventType' has a wrong offset!");

// PythonFunction PyWidget_Guide_Panel.PyWidget_GuideActionTips.OnReceiveGlobalInputKey
// 0x0028 (0x0028 - 0x0000)
struct PyWidget_GuideActionTips_OnReceiveGlobalInputKey final
{
public:
	struct FKey                                   InKey;                                             // 0x0000(0x0020)(Parm, HasGetValueTypeHash)
	EInputEvent                                   EventType;                                         // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionTips_OnReceiveGlobalInputKey) == 0x000008, "Wrong alignment on PyWidget_GuideActionTips_OnReceiveGlobalInputKey");
static_assert(sizeof(PyWidget_GuideActionTips_OnReceiveGlobalInputKey) == 0x000028, "Wrong size on PyWidget_GuideActionTips_OnReceiveGlobalInputKey");
static_assert(offsetof(PyWidget_GuideActionTips_OnReceiveGlobalInputKey, InKey) == 0x000000, "Member 'PyWidget_GuideActionTips_OnReceiveGlobalInputKey::InKey' has a wrong offset!");
static_assert(offsetof(PyWidget_GuideActionTips_OnReceiveGlobalInputKey, EventType) == 0x000020, "Member 'PyWidget_GuideActionTips_OnReceiveGlobalInputKey::EventType' has a wrong offset!");

// PythonFunction PyWidget_Guide_Panel.PyWidget_GuideActionTips_PlatformAdaptation.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_GuideActionTips_PlatformAdaptation_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionTips_PlatformAdaptation_PreConstruct) == 0x000001, "Wrong alignment on PyWidget_GuideActionTips_PlatformAdaptation_PreConstruct");
static_assert(sizeof(PyWidget_GuideActionTips_PlatformAdaptation_PreConstruct) == 0x000001, "Wrong size on PyWidget_GuideActionTips_PlatformAdaptation_PreConstruct");
static_assert(offsetof(PyWidget_GuideActionTips_PlatformAdaptation_PreConstruct, IsDesignTime) == 0x000000, "Member 'PyWidget_GuideActionTips_PlatformAdaptation_PreConstruct::IsDesignTime' has a wrong offset!");

// DelegateFunction PyWidget_Guide_Panel.PyWidget_GuideActionPanel.OnTipClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_GuideActionPanel_OnTipClicked__DelegateSignature final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionPanel_OnTipClicked__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_GuideActionPanel_OnTipClicked__DelegateSignature");
static_assert(sizeof(PyWidget_GuideActionPanel_OnTipClicked__DelegateSignature) == 0x000010, "Wrong size on PyWidget_GuideActionPanel_OnTipClicked__DelegateSignature");
static_assert(offsetof(PyWidget_GuideActionPanel_OnTipClicked__DelegateSignature, EventName) == 0x000000, "Member 'PyWidget_GuideActionPanel_OnTipClicked__DelegateSignature::EventName' has a wrong offset!");

// PythonFunction PyWidget_Guide_Panel.PyWidget_GuideActionPanel.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_GuideActionPanel_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionPanel_PreConstruct) == 0x000001, "Wrong alignment on PyWidget_GuideActionPanel_PreConstruct");
static_assert(sizeof(PyWidget_GuideActionPanel_PreConstruct) == 0x000001, "Wrong size on PyWidget_GuideActionPanel_PreConstruct");
static_assert(offsetof(PyWidget_GuideActionPanel_PreConstruct, IsDesignTime) == 0x000000, "Member 'PyWidget_GuideActionPanel_PreConstruct::IsDesignTime' has a wrong offset!");

// PythonFunction PyWidget_Guide_Panel.PyWidget_GuideActionPanel.OnTipWidgetClicked
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_GuideActionPanel_OnTipWidgetClicked final
{
public:
	class FString                                 Event;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_GuideActionPanel_OnTipWidgetClicked) == 0x000008, "Wrong alignment on PyWidget_GuideActionPanel_OnTipWidgetClicked");
static_assert(sizeof(PyWidget_GuideActionPanel_OnTipWidgetClicked) == 0x000010, "Wrong size on PyWidget_GuideActionPanel_OnTipWidgetClicked");
static_assert(offsetof(PyWidget_GuideActionPanel_OnTipWidgetClicked, Event) == 0x000000, "Member 'PyWidget_GuideActionPanel_OnTipWidgetClicked::Event' has a wrong offset!");

}

