#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WindowModeAndResolutionLogic

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryWindowModeOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryWindowModeOptionsGenerator_BP_Gen) == 0x000008, "Wrong alignment on UISettingEntryWindowModeOptionsGenerator_BP_Gen");
////static_assert(sizeof(UISettingEntryWindowModeOptionsGenerator_BP_Gen) == 0x0000B8, "Wrong size on UISettingEntryWindowModeOptionsGenerator_BP_Gen");
////static_assert(offsetof(UISettingEntryWindowModeOptionsGenerator_BP_Gen, Obj) == 0x000000, "Member 'UISettingEntryWindowModeOptionsGenerator_BP_Gen::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeOptionsGenerator_BP_Gen, Setting_key) == 0x000008, "Member 'UISettingEntryWindowModeOptionsGenerator_BP_Gen::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeOptionsGenerator_BP_Gen, OPTIONS) == 0x000018, "Member 'UISettingEntryWindowModeOptionsGenerator_BP_Gen::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeOptionsGenerator_BP_Gen, ReturnValue) == 0x000068, "Member 'UISettingEntryWindowModeOptionsGenerator_BP_Gen::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.HardcodeSyncTargetMoniter
// 0x0050 (0x0050 - 0x0000)
struct UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter final
{
public:
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter) == 0x000008, "Wrong alignment on UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter");
////static_assert(sizeof(UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter) == 0x000050, "Wrong size on UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter");
////static_assert(offsetof(UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter, ReturnValue) == 0x000000, "Member 'UISettingEntryWindowModeHandler_HardcodeSyncTargetMoniter::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.BP_OnApply
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryWindowModeHandler_BP_OnApply final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
////static_assert(alignof(UISettingEntryWindowModeHandler_BP_OnApply) == 0x000008, "Wrong alignment on UISettingEntryWindowModeHandler_BP_OnApply");
////static_assert(sizeof(UISettingEntryWindowModeHandler_BP_OnApply) == 0x0000C0, "Wrong size on UISettingEntryWindowModeHandler_BP_OnApply");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnApply, Obj) == 0x000000, "Member 'UISettingEntryWindowModeHandler_BP_OnApply::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnApply, Setting_key) == 0x000008, "Member 'UISettingEntryWindowModeHandler_BP_OnApply::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnApply, P) == 0x000018, "Member 'UISettingEntryWindowModeHandler_BP_OnApply::P' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnApply, OPTIONS) == 0x000068, "Member 'UISettingEntryWindowModeHandler_BP_OnApply::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnApply, Value) == 0x0000B8, "Member 'UISettingEntryWindowModeHandler_BP_OnApply::Value' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryWindowModeHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      O;                                                 // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
////static_assert(alignof(UISettingEntryWindowModeHandler_BP_GetCurrentValue) == 0x000008, "Wrong alignment on UISettingEntryWindowModeHandler_BP_GetCurrentValue");
////static_assert(sizeof(UISettingEntryWindowModeHandler_BP_GetCurrentValue) == 0x0000C0, "Wrong size on UISettingEntryWindowModeHandler_BP_GetCurrentValue");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_GetCurrentValue, Obj) == 0x000000, "Member 'UISettingEntryWindowModeHandler_BP_GetCurrentValue::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_GetCurrentValue, Setting_key) == 0x000008, "Member 'UISettingEntryWindowModeHandler_BP_GetCurrentValue::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_GetCurrentValue, P) == 0x000018, "Member 'UISettingEntryWindowModeHandler_BP_GetCurrentValue::P' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_GetCurrentValue, O) == 0x000068, "Member 'UISettingEntryWindowModeHandler_BP_GetCurrentValue::O' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_GetCurrentValue, ReturnValue) == 0x0000B8, "Member 'UISettingEntryWindowModeHandler_BP_GetCurrentValue::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryWindowModeHandler.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryWindowModeHandler_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryWindowModeHandler_BP_OnChanged) == 0x000008, "Wrong alignment on UISettingEntryWindowModeHandler_BP_OnChanged");
////static_assert(sizeof(UISettingEntryWindowModeHandler_BP_OnChanged) == 0x000160, "Wrong size on UISettingEntryWindowModeHandler_BP_OnChanged");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnChanged, Obj) == 0x000000, "Member 'UISettingEntryWindowModeHandler_BP_OnChanged::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnChanged, Setting_key) == 0x000008, "Member 'UISettingEntryWindowModeHandler_BP_OnChanged::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnChanged, Params_0) == 0x000018, "Member 'UISettingEntryWindowModeHandler_BP_OnChanged::Params_0' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnChanged, OPTIONS) == 0x000068, "Member 'UISettingEntryWindowModeHandler_BP_OnChanged::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnChanged, Value) == 0x0000B8, "Member 'UISettingEntryWindowModeHandler_BP_OnChanged::Value' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnChanged, Tags) == 0x0000C0, "Member 'UISettingEntryWindowModeHandler_BP_OnChanged::Tags' has a wrong offset!");
////static_assert(offsetof(UISettingEntryWindowModeHandler_BP_OnChanged, ReturnValue) == 0x000110, "Member 'UISettingEntryWindowModeHandler_BP_OnChanged::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionAspectOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryResolutionAspectOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryResolutionAspectOptionsGenerator_BP_Gen) == 0x000008, "Wrong alignment on UISettingEntryResolutionAspectOptionsGenerator_BP_Gen");
////static_assert(sizeof(UISettingEntryResolutionAspectOptionsGenerator_BP_Gen) == 0x0000B8, "Wrong size on UISettingEntryResolutionAspectOptionsGenerator_BP_Gen");
////static_assert(offsetof(UISettingEntryResolutionAspectOptionsGenerator_BP_Gen, Obj) == 0x000000, "Member 'UISettingEntryResolutionAspectOptionsGenerator_BP_Gen::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectOptionsGenerator_BP_Gen, Setting_key) == 0x000008, "Member 'UISettingEntryResolutionAspectOptionsGenerator_BP_Gen::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectOptionsGenerator_BP_Gen, OPTIONS) == 0x000018, "Member 'UISettingEntryResolutionAspectOptionsGenerator_BP_Gen::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectOptionsGenerator_BP_Gen, ReturnValue) == 0x000068, "Member 'UISettingEntryResolutionAspectOptionsGenerator_BP_Gen::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionAspectHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryResolutionAspectHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
////static_assert(alignof(UISettingEntryResolutionAspectHandler_BP_GetCurrentValue) == 0x000008, "Wrong alignment on UISettingEntryResolutionAspectHandler_BP_GetCurrentValue");
////static_assert(sizeof(UISettingEntryResolutionAspectHandler_BP_GetCurrentValue) == 0x0000C0, "Wrong size on UISettingEntryResolutionAspectHandler_BP_GetCurrentValue");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_GetCurrentValue, Obj) == 0x000000, "Member 'UISettingEntryResolutionAspectHandler_BP_GetCurrentValue::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_GetCurrentValue, Setting_key) == 0x000008, "Member 'UISettingEntryResolutionAspectHandler_BP_GetCurrentValue::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_GetCurrentValue, Params_0) == 0x000018, "Member 'UISettingEntryResolutionAspectHandler_BP_GetCurrentValue::Params_0' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_GetCurrentValue, OPTIONS) == 0x000068, "Member 'UISettingEntryResolutionAspectHandler_BP_GetCurrentValue::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_GetCurrentValue, ReturnValue) == 0x0000B8, "Member 'UISettingEntryResolutionAspectHandler_BP_GetCurrentValue::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionAspectHandler.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryResolutionAspectHandler_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryResolutionAspectHandler_BP_OnChanged) == 0x000008, "Wrong alignment on UISettingEntryResolutionAspectHandler_BP_OnChanged");
////static_assert(sizeof(UISettingEntryResolutionAspectHandler_BP_OnChanged) == 0x000160, "Wrong size on UISettingEntryResolutionAspectHandler_BP_OnChanged");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_OnChanged, Obj) == 0x000000, "Member 'UISettingEntryResolutionAspectHandler_BP_OnChanged::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_OnChanged, Setting_key) == 0x000008, "Member 'UISettingEntryResolutionAspectHandler_BP_OnChanged::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_OnChanged, Params_0) == 0x000018, "Member 'UISettingEntryResolutionAspectHandler_BP_OnChanged::Params_0' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_OnChanged, OPTIONS) == 0x000068, "Member 'UISettingEntryResolutionAspectHandler_BP_OnChanged::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_OnChanged, Value) == 0x0000B8, "Member 'UISettingEntryResolutionAspectHandler_BP_OnChanged::Value' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_OnChanged, Tags) == 0x0000C0, "Member 'UISettingEntryResolutionAspectHandler_BP_OnChanged::Tags' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionAspectHandler_BP_OnChanged, ReturnValue) == 0x000110, "Member 'UISettingEntryResolutionAspectHandler_BP_OnChanged::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelection.BP_OnApply
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryMonitorSelection_BP_OnApply final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
////static_assert(alignof(UISettingEntryMonitorSelection_BP_OnApply) == 0x000008, "Wrong alignment on UISettingEntryMonitorSelection_BP_OnApply");
////static_assert(sizeof(UISettingEntryMonitorSelection_BP_OnApply) == 0x0000C0, "Wrong size on UISettingEntryMonitorSelection_BP_OnApply");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnApply, Obj) == 0x000000, "Member 'UISettingEntryMonitorSelection_BP_OnApply::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnApply, Setting_key) == 0x000008, "Member 'UISettingEntryMonitorSelection_BP_OnApply::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnApply, P) == 0x000018, "Member 'UISettingEntryMonitorSelection_BP_OnApply::P' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnApply, OPTIONS) == 0x000068, "Member 'UISettingEntryMonitorSelection_BP_OnApply::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnApply, Value) == 0x0000B8, "Member 'UISettingEntryMonitorSelection_BP_OnApply::Value' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelection.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryMonitorSelection_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      O;                                                 // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
////static_assert(alignof(UISettingEntryMonitorSelection_BP_GetCurrentValue) == 0x000008, "Wrong alignment on UISettingEntryMonitorSelection_BP_GetCurrentValue");
////static_assert(sizeof(UISettingEntryMonitorSelection_BP_GetCurrentValue) == 0x0000C0, "Wrong size on UISettingEntryMonitorSelection_BP_GetCurrentValue");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_GetCurrentValue, Obj) == 0x000000, "Member 'UISettingEntryMonitorSelection_BP_GetCurrentValue::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_GetCurrentValue, Setting_key) == 0x000008, "Member 'UISettingEntryMonitorSelection_BP_GetCurrentValue::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_GetCurrentValue, P) == 0x000018, "Member 'UISettingEntryMonitorSelection_BP_GetCurrentValue::P' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_GetCurrentValue, O) == 0x000068, "Member 'UISettingEntryMonitorSelection_BP_GetCurrentValue::O' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_GetCurrentValue, ReturnValue) == 0x0000B8, "Member 'UISettingEntryMonitorSelection_BP_GetCurrentValue::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelection.BP_OnChanged
// 0x0160 (0x0160 - 0x0000)
struct UISettingEntryMonitorSelection_BP_OnChanged final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    Tags;                                              // 0x00C0(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<class FString, int32>                    ReturnValue;                                       // 0x0110(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryMonitorSelection_BP_OnChanged) == 0x000008, "Wrong alignment on UISettingEntryMonitorSelection_BP_OnChanged");
////static_assert(sizeof(UISettingEntryMonitorSelection_BP_OnChanged) == 0x000160, "Wrong size on UISettingEntryMonitorSelection_BP_OnChanged");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnChanged, Obj) == 0x000000, "Member 'UISettingEntryMonitorSelection_BP_OnChanged::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnChanged, Setting_key) == 0x000008, "Member 'UISettingEntryMonitorSelection_BP_OnChanged::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnChanged, Params_0) == 0x000018, "Member 'UISettingEntryMonitorSelection_BP_OnChanged::Params_0' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnChanged, OPTIONS) == 0x000068, "Member 'UISettingEntryMonitorSelection_BP_OnChanged::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnChanged, Value) == 0x0000B8, "Member 'UISettingEntryMonitorSelection_BP_OnChanged::Value' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnChanged, Tags) == 0x0000C0, "Member 'UISettingEntryMonitorSelection_BP_OnChanged::Tags' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelection_BP_OnChanged, ReturnValue) == 0x000110, "Member 'UISettingEntryMonitorSelection_BP_OnChanged::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionHandler.BP_OnApply
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryResolutionHandler_BP_OnApply final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            P;                                                 // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         Value;                                             // 0x00B8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
////static_assert(alignof(UISettingEntryResolutionHandler_BP_OnApply) == 0x000008, "Wrong alignment on UISettingEntryResolutionHandler_BP_OnApply");
////static_assert(sizeof(UISettingEntryResolutionHandler_BP_OnApply) == 0x0000C0, "Wrong size on UISettingEntryResolutionHandler_BP_OnApply");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_OnApply, Obj) == 0x000000, "Member 'UISettingEntryResolutionHandler_BP_OnApply::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_OnApply, Setting_key) == 0x000008, "Member 'UISettingEntryResolutionHandler_BP_OnApply::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_OnApply, P) == 0x000018, "Member 'UISettingEntryResolutionHandler_BP_OnApply::P' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_OnApply, OPTIONS) == 0x000068, "Member 'UISettingEntryResolutionHandler_BP_OnApply::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_OnApply, Value) == 0x0000B8, "Member 'UISettingEntryResolutionHandler_BP_OnApply::Value' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionHandler.BP_GetCurrentValue
// 0x00C0 (0x00C0 - 0x0000)
struct UISettingEntryResolutionHandler_BP_GetCurrentValue final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>            Params_0;                                          // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0068(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x00B8(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
////static_assert(alignof(UISettingEntryResolutionHandler_BP_GetCurrentValue) == 0x000008, "Wrong alignment on UISettingEntryResolutionHandler_BP_GetCurrentValue");
////static_assert(sizeof(UISettingEntryResolutionHandler_BP_GetCurrentValue) == 0x0000C0, "Wrong size on UISettingEntryResolutionHandler_BP_GetCurrentValue");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_GetCurrentValue, Obj) == 0x000000, "Member 'UISettingEntryResolutionHandler_BP_GetCurrentValue::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_GetCurrentValue, Setting_key) == 0x000008, "Member 'UISettingEntryResolutionHandler_BP_GetCurrentValue::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_GetCurrentValue, Params_0) == 0x000018, "Member 'UISettingEntryResolutionHandler_BP_GetCurrentValue::Params_0' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_GetCurrentValue, OPTIONS) == 0x000068, "Member 'UISettingEntryResolutionHandler_BP_GetCurrentValue::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionHandler_BP_GetCurrentValue, ReturnValue) == 0x0000B8, "Member 'UISettingEntryResolutionHandler_BP_GetCurrentValue::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryResolutionOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryResolutionOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryResolutionOptionsGenerator_BP_Gen) == 0x000008, "Wrong alignment on UISettingEntryResolutionOptionsGenerator_BP_Gen");
////static_assert(sizeof(UISettingEntryResolutionOptionsGenerator_BP_Gen) == 0x0000B8, "Wrong size on UISettingEntryResolutionOptionsGenerator_BP_Gen");
////static_assert(offsetof(UISettingEntryResolutionOptionsGenerator_BP_Gen, Obj) == 0x000000, "Member 'UISettingEntryResolutionOptionsGenerator_BP_Gen::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionOptionsGenerator_BP_Gen, Setting_key) == 0x000008, "Member 'UISettingEntryResolutionOptionsGenerator_BP_Gen::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionOptionsGenerator_BP_Gen, OPTIONS) == 0x000018, "Member 'UISettingEntryResolutionOptionsGenerator_BP_Gen::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryResolutionOptionsGenerator_BP_Gen, ReturnValue) == 0x000068, "Member 'UISettingEntryResolutionOptionsGenerator_BP_Gen::ReturnValue' has a wrong offset!");

// PythonFunction WindowModeAndResolutionLogic.UISettingEntryMonitorSelectionOptionsGenerator.BP_Gen
// 0x00B8 (0x00B8 - 0x0000)
struct UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen final
{
public:
	class UObject*                                Obj;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Setting_key;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	TMap<int32, class FText>                      OPTIONS;                                           // 0x0018(0x0050)(ConstParm, Parm, OutParm, ReferenceParm)
	TMap<int32, class FText>                      ReturnValue;                                       // 0x0068(0x0050)(Parm, OutParm, ReturnParm)
};
////static_assert(alignof(UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen) == 0x000008, "Wrong alignment on UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen");
////static_assert(sizeof(UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen) == 0x0000B8, "Wrong size on UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen");
////static_assert(offsetof(UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen, Obj) == 0x000000, "Member 'UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen::Obj' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen, Setting_key) == 0x000008, "Member 'UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen::Setting_key' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen, OPTIONS) == 0x000018, "Member 'UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen::OPTIONS' has a wrong offset!");
////static_assert(offsetof(UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen, ReturnValue) == 0x000068, "Member 'UISettingEntryMonitorSelectionOptionsGenerator_BP_Gen::ReturnValue' has a wrong offset!");

}

