#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Beginner_TaskUnit

#include "Basic.hpp"

#include "PyWidget_Novice_Mission_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Beginner_TaskUnit.WBP_Beginner_TaskUnit_C
// 0x0098 (0x0650 - 0x05B8)
class UWBP_Beginner_TaskUnit_C final : public UPyWidget_Novice_MissionDetail
{
public:
	class UWidgetAnimation*                       Anim_Normal;                                       // 0x05B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Complete;                                     // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx1;                                        // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx2;                                        // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx3;                                        // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx4;                                        // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx5;                                        // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx6;                                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx7;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Bg_Vx8;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Frame_Selected;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Frame_UnSelected;                              // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon_UnSelected;                               // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon_UnSelected_1;                             // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_CheckBox;                                  // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_CheckBox_Selected;                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_CheckBox_UnSelected;                       // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Lighting;                                  // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   Text_TaskContent;                                  // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Beginner_TaskUnit_C">();
	}
	static class UWBP_Beginner_TaskUnit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Beginner_TaskUnit_C>();
	}
};
//static_assert(alignof(UWBP_Beginner_TaskUnit_C) == 0x000008, "Wrong alignment on UWBP_Beginner_TaskUnit_C");
//static_assert(sizeof(UWBP_Beginner_TaskUnit_C) == 0x000650, "Wrong size on UWBP_Beginner_TaskUnit_C");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Anim_Normal) == 0x0005B8, "Member 'UWBP_Beginner_TaskUnit_C::Anim_Normal' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Anim_Complete) == 0x0005C0, "Member 'UWBP_Beginner_TaskUnit_C::Anim_Complete' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx1) == 0x0005C8, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx1' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx2) == 0x0005D0, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx2' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx3) == 0x0005D8, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx3' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx4) == 0x0005E0, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx4' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx5) == 0x0005E8, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx5' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx6) == 0x0005F0, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx6' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx7) == 0x0005F8, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx7' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Bg_Vx8) == 0x000600, "Member 'UWBP_Beginner_TaskUnit_C::Img_Bg_Vx8' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Frame_Selected) == 0x000608, "Member 'UWBP_Beginner_TaskUnit_C::Img_Frame_Selected' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Frame_UnSelected) == 0x000610, "Member 'UWBP_Beginner_TaskUnit_C::Img_Frame_UnSelected' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Icon_UnSelected) == 0x000618, "Member 'UWBP_Beginner_TaskUnit_C::Img_Icon_UnSelected' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Img_Icon_UnSelected_1) == 0x000620, "Member 'UWBP_Beginner_TaskUnit_C::Img_Icon_UnSelected_1' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Overlay_CheckBox) == 0x000628, "Member 'UWBP_Beginner_TaskUnit_C::Overlay_CheckBox' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Overlay_CheckBox_Selected) == 0x000630, "Member 'UWBP_Beginner_TaskUnit_C::Overlay_CheckBox_Selected' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Overlay_CheckBox_UnSelected) == 0x000638, "Member 'UWBP_Beginner_TaskUnit_C::Overlay_CheckBox_UnSelected' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Overlay_Lighting) == 0x000640, "Member 'UWBP_Beginner_TaskUnit_C::Overlay_Lighting' has a wrong offset!");
//static_assert(offsetof(UWBP_Beginner_TaskUnit_C, Text_TaskContent) == 0x000648, "Member 'UWBP_Beginner_TaskUnit_C::Text_TaskContent' has a wrong offset!");

}

