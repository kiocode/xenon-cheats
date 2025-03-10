#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Beginner_ActionTips

#include "Basic.hpp"

#include "PyWidget_Training_ActionTips_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Beginner_ActionTips.WBP_Beginner_ActionTips_C
// 0x0018 (0x0678 - 0x0660)
class UWBP_Beginner_ActionTips_C final : public UPyWidget_AbilityHUDCom_ActionTip
{
public:
	class USpacer*                                Spacer;                                            // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Tip;                                          // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_KeyWidget_C*                WBP_AbilityKey;                                    // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Beginner_ActionTips_C">();
	}
	static class UWBP_Beginner_ActionTips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Beginner_ActionTips_C>();
	}
};
////static_assert(alignof(UWBP_Beginner_ActionTips_C) == 0x000008, "Wrong alignment on UWBP_Beginner_ActionTips_C");
////static_assert(sizeof(UWBP_Beginner_ActionTips_C) == 0x000678, "Wrong size on UWBP_Beginner_ActionTips_C");
////static_assert(offsetof(UWBP_Beginner_ActionTips_C, Spacer) == 0x000660, "Member 'UWBP_Beginner_ActionTips_C::Spacer' has a wrong offset!");
////static_assert(offsetof(UWBP_Beginner_ActionTips_C, Text_Tip) == 0x000668, "Member 'UWBP_Beginner_ActionTips_C::Text_Tip' has a wrong offset!");
////static_assert(offsetof(UWBP_Beginner_ActionTips_C, WBP_AbilityKey) == 0x000670, "Member 'UWBP_Beginner_ActionTips_C::WBP_AbilityKey' has a wrong offset!");

}

