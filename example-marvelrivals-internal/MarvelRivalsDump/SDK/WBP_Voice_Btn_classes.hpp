#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Voice_Btn

#include "Basic.hpp"

#include "PyWidget_VoiceChatPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Voice_Btn.WBP_Voice_Btn_C
// 0x0018 (0x0788 - 0x0770)
class UWBP_Voice_Btn_C final : public UPyWidget_VoiceStateButton
{
public:
	class UWBP_Voice_Icon_C*                      IconVoice;                                         // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Icon;                                     // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Btn;                                       // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Voice_Btn_C">();
	}
	static class UWBP_Voice_Btn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Voice_Btn_C>();
	}
};
////static_assert(alignof(UWBP_Voice_Btn_C) == 0x000008, "Wrong alignment on UWBP_Voice_Btn_C");
////static_assert(sizeof(UWBP_Voice_Btn_C) == 0x000788, "Wrong size on UWBP_Voice_Btn_C");
////static_assert(offsetof(UWBP_Voice_Btn_C, IconVoice) == 0x000770, "Member 'UWBP_Voice_Btn_C::IconVoice' has a wrong offset!");
////static_assert(offsetof(UWBP_Voice_Btn_C, ScaleBox_Icon) == 0x000778, "Member 'UWBP_Voice_Btn_C::ScaleBox_Icon' has a wrong offset!");
////static_assert(offsetof(UWBP_Voice_Btn_C, SizeBox_Btn) == 0x000780, "Member 'UWBP_Voice_Btn_C::SizeBox_Btn' has a wrong offset!");

}

