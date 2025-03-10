#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Confirmation

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Confirmation.WBP_Confirmation_C.ExecuteUbergraph_WBP_Confirmation
// 0x0068 (0x0068 - 0x0000)
struct WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_TitleText;                            // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_DescriptionText;                      // 0x0020(0x0018)(ConstParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0038(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0050(0x0018)()
};
static_assert(alignof(WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation) == 0x000008, "Wrong alignment on WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation");
static_assert(sizeof(WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation) == 0x000068, "Wrong size on WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation");
static_assert(offsetof(WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation, EntryPoint) == 0x000000, "Member 'WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation, K2Node_Event_TitleText) == 0x000008, "Member 'WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation::K2Node_Event_TitleText' has a wrong offset!");
static_assert(offsetof(WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation, K2Node_Event_DescriptionText) == 0x000020, "Member 'WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation::K2Node_Event_DescriptionText' has a wrong offset!");
static_assert(offsetof(WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation, CallFunc_TextToUpper_ReturnValue) == 0x000038, "Member 'WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation, CallFunc_TextToUpper_ReturnValue_1) == 0x000050, "Member 'WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");

// Function WBP_Confirmation.WBP_Confirmation_C.UpdateDialogText
// 0x0030 (0x0030 - 0x0000)
struct WBP_Confirmation_C_UpdateDialogText final
{
public:
	class FText                                   TitleText_0;                                       // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   DescriptionText;                                   // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Confirmation_C_UpdateDialogText) == 0x000008, "Wrong alignment on WBP_Confirmation_C_UpdateDialogText");
static_assert(sizeof(WBP_Confirmation_C_UpdateDialogText) == 0x000030, "Wrong size on WBP_Confirmation_C_UpdateDialogText");
static_assert(offsetof(WBP_Confirmation_C_UpdateDialogText, TitleText_0) == 0x000000, "Member 'WBP_Confirmation_C_UpdateDialogText::TitleText_0' has a wrong offset!");
static_assert(offsetof(WBP_Confirmation_C_UpdateDialogText, DescriptionText) == 0x000018, "Member 'WBP_Confirmation_C_UpdateDialogText::DescriptionText' has a wrong offset!");

}

