#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SelectHero_HeroCorona

#include "Basic.hpp"

#include "PyWidget_SelectHero_Corona_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SelectHero_HeroCorona.WBP_SelectHero_HeroCorona_C
// 0x0088 (0x06F0 - 0x0668)
class UWBP_SelectHero_HeroCorona_C final : public UPyWidget_SelectHero_Corona
{
public:
	class UWidgetAnimation*                       Anim_Expand;                                       // 0x0668(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_SelectHero_BanBtn_C*               Btn_Ban;                                           // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_W_C*                Btn_Cancel;                                        // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_W_C*                Btn_Pick;                                          // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_Y_C*                Btn_Select;                                        // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectHero_HeroList_C*             HeroList;                                          // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Locate_Inner;                                  // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Locate_Outer;                                  // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Btn;                                       // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_HeroList;                                  // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectHero_TabList_C*              TabList;                                           // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectHero_Tips_C*                 Tips_Damage;                                       // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectHero_Tips_C*                 Tips_PreSelect;                                    // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectHero_Tips_C*                 Tips_Support;                                      // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectHero_Tips_C*                 Tips_Tank;                                         // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_Tips;                                      // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SelectHero_HeroCorona_C">();
	}
	static class UWBP_SelectHero_HeroCorona_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SelectHero_HeroCorona_C>();
	}
};
////static_assert(alignof(UWBP_SelectHero_HeroCorona_C) == 0x000008, "Wrong alignment on UWBP_SelectHero_HeroCorona_C");
////static_assert(sizeof(UWBP_SelectHero_HeroCorona_C) == 0x0006F0, "Wrong size on UWBP_SelectHero_HeroCorona_C");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Anim_Expand) == 0x000668, "Member 'UWBP_SelectHero_HeroCorona_C::Anim_Expand' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Btn_Ban) == 0x000670, "Member 'UWBP_SelectHero_HeroCorona_C::Btn_Ban' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Btn_Cancel) == 0x000678, "Member 'UWBP_SelectHero_HeroCorona_C::Btn_Cancel' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Btn_Pick) == 0x000680, "Member 'UWBP_SelectHero_HeroCorona_C::Btn_Pick' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Btn_Select) == 0x000688, "Member 'UWBP_SelectHero_HeroCorona_C::Btn_Select' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, HeroList) == 0x000690, "Member 'UWBP_SelectHero_HeroCorona_C::HeroList' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Img_Locate_Inner) == 0x000698, "Member 'UWBP_SelectHero_HeroCorona_C::Img_Locate_Inner' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Img_Locate_Outer) == 0x0006A0, "Member 'UWBP_SelectHero_HeroCorona_C::Img_Locate_Outer' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Overlay_Btn) == 0x0006A8, "Member 'UWBP_SelectHero_HeroCorona_C::Overlay_Btn' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Overlay_HeroList) == 0x0006B0, "Member 'UWBP_SelectHero_HeroCorona_C::Overlay_HeroList' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, RetainerBox) == 0x0006B8, "Member 'UWBP_SelectHero_HeroCorona_C::RetainerBox' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, TabList) == 0x0006C0, "Member 'UWBP_SelectHero_HeroCorona_C::TabList' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Tips_Damage) == 0x0006C8, "Member 'UWBP_SelectHero_HeroCorona_C::Tips_Damage' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Tips_PreSelect) == 0x0006D0, "Member 'UWBP_SelectHero_HeroCorona_C::Tips_PreSelect' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Tips_Support) == 0x0006D8, "Member 'UWBP_SelectHero_HeroCorona_C::Tips_Support' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, Tips_Tank) == 0x0006E0, "Member 'UWBP_SelectHero_HeroCorona_C::Tips_Tank' has a wrong offset!");
////static_assert(offsetof(UWBP_SelectHero_HeroCorona_C, WrapBox_Tips) == 0x0006E8, "Member 'UWBP_SelectHero_HeroCorona_C::WrapBox_Tips' has a wrong offset!");

}

