#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HurtCenterUnit_V4

#include "Basic.hpp"

#include "PyWidget_HurtHintPanel_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HurtCenterUnit_V4.WBP_HurtCenterUnit_V4_C
// 0x0040 (0x0620 - 0x05E0)
class UWBP_HurtCenterUnit_V4_C final : public UPyWidget_HurtCenterUnit
{
public:
	class UWidgetAnimation*                       Anim_Normal;                                       // 0x05E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Snipe;                                        // 0x05E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Arrow;                                         // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_HurtCenter_Normal;                             // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Point;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Hurt;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Arrow;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_Arrow;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HurtCenterUnit_V4_C">();
	}
	static class UWBP_HurtCenterUnit_V4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HurtCenterUnit_V4_C>();
	}
};
////static_assert(alignof(UWBP_HurtCenterUnit_V4_C) == 0x000008, "Wrong alignment on UWBP_HurtCenterUnit_V4_C");
////static_assert(sizeof(UWBP_HurtCenterUnit_V4_C) == 0x000620, "Wrong size on UWBP_HurtCenterUnit_V4_C");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, Anim_Normal) == 0x0005E0, "Member 'UWBP_HurtCenterUnit_V4_C::Anim_Normal' has a wrong offset!");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, Anim_Snipe) == 0x0005E8, "Member 'UWBP_HurtCenterUnit_V4_C::Anim_Snipe' has a wrong offset!");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, Img_Arrow) == 0x0005F0, "Member 'UWBP_HurtCenterUnit_V4_C::Img_Arrow' has a wrong offset!");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, Img_HurtCenter_Normal) == 0x0005F8, "Member 'UWBP_HurtCenterUnit_V4_C::Img_HurtCenter_Normal' has a wrong offset!");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, Img_Point) == 0x000600, "Member 'UWBP_HurtCenterUnit_V4_C::Img_Point' has a wrong offset!");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, Overlay_Hurt) == 0x000608, "Member 'UWBP_HurtCenterUnit_V4_C::Overlay_Hurt' has a wrong offset!");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, SizeBox_Arrow) == 0x000610, "Member 'UWBP_HurtCenterUnit_V4_C::SizeBox_Arrow' has a wrong offset!");
////static_assert(offsetof(UWBP_HurtCenterUnit_V4_C, VBox_Arrow) == 0x000618, "Member 'UWBP_HurtCenterUnit_V4_C::VBox_Arrow' has a wrong offset!");

}

