#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Training_Scoreboard

#include "Basic.hpp"

#include "PyWidget_Traning_ScoreBoard_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Training_Scoreboard.WBP_Training_Scoreboard_C
// 0x00B8 (0x06B0 - 0x05F8)
class UWBP_Training_Scoreboard_C final : public UPyWidget_Training_Scoreboard
{
public:
	class UWidgetAnimation*                       Anim_EndDot;                                       // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_TriningendToEnd;                              // 0x0600(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_StartToTriningend;                            // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_StartDot;                                     // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelImage*                           Img_StartDecoration_Left;                          // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_StartDecoration_Right;                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_End;                                       // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_InProgress;                                // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Start;                                     // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Title;                                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_InProgress;                            // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_SmallTitle_1;                                 // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_SmallTitle_2;                                 // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_SmallTitle_3;                                 // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_StartTitle;                                   // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title_1;                                      // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title_2;                                      // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Title_3;                                      // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Training_ScoreItem_C*              WBP_CountDown;                                     // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Training_ScoreItem_C*              WBP_Kill;                                          // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Training_ScoreItem_C*              WBP_Kill_End;                                      // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Training_ScoreItem_C*              WBP_TotalScore;                                    // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Training_ScoreItem_C*              WBP_TotalScore_End;                                // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Training_Scoreboard_C">();
	}
	static class UWBP_Training_Scoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Training_Scoreboard_C>();
	}
};
////static_assert(alignof(UWBP_Training_Scoreboard_C) == 0x000008, "Wrong alignment on UWBP_Training_Scoreboard_C");
////static_assert(sizeof(UWBP_Training_Scoreboard_C) == 0x0006B0, "Wrong size on UWBP_Training_Scoreboard_C");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Anim_EndDot) == 0x0005F8, "Member 'UWBP_Training_Scoreboard_C::Anim_EndDot' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Anim_TriningendToEnd) == 0x000600, "Member 'UWBP_Training_Scoreboard_C::Anim_TriningendToEnd' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Anim_StartToTriningend) == 0x000608, "Member 'UWBP_Training_Scoreboard_C::Anim_StartToTriningend' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Anim_StartDot) == 0x000610, "Member 'UWBP_Training_Scoreboard_C::Anim_StartDot' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Img_StartDecoration_Left) == 0x000618, "Member 'UWBP_Training_Scoreboard_C::Img_StartDecoration_Left' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Img_StartDecoration_Right) == 0x000620, "Member 'UWBP_Training_Scoreboard_C::Img_StartDecoration_Right' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Overlay_End) == 0x000628, "Member 'UWBP_Training_Scoreboard_C::Overlay_End' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Overlay_InProgress) == 0x000630, "Member 'UWBP_Training_Scoreboard_C::Overlay_InProgress' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Overlay_Start) == 0x000638, "Member 'UWBP_Training_Scoreboard_C::Overlay_Start' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Overlay_Title) == 0x000640, "Member 'UWBP_Training_Scoreboard_C::Overlay_Title' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, RetainerBox_InProgress) == 0x000648, "Member 'UWBP_Training_Scoreboard_C::RetainerBox_InProgress' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Text_SmallTitle_1) == 0x000650, "Member 'UWBP_Training_Scoreboard_C::Text_SmallTitle_1' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Text_SmallTitle_2) == 0x000658, "Member 'UWBP_Training_Scoreboard_C::Text_SmallTitle_2' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Text_SmallTitle_3) == 0x000660, "Member 'UWBP_Training_Scoreboard_C::Text_SmallTitle_3' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Text_StartTitle) == 0x000668, "Member 'UWBP_Training_Scoreboard_C::Text_StartTitle' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Text_Title_1) == 0x000670, "Member 'UWBP_Training_Scoreboard_C::Text_Title_1' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Text_Title_2) == 0x000678, "Member 'UWBP_Training_Scoreboard_C::Text_Title_2' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, Text_Title_3) == 0x000680, "Member 'UWBP_Training_Scoreboard_C::Text_Title_3' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, WBP_CountDown) == 0x000688, "Member 'UWBP_Training_Scoreboard_C::WBP_CountDown' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, WBP_Kill) == 0x000690, "Member 'UWBP_Training_Scoreboard_C::WBP_Kill' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, WBP_Kill_End) == 0x000698, "Member 'UWBP_Training_Scoreboard_C::WBP_Kill_End' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, WBP_TotalScore) == 0x0006A0, "Member 'UWBP_Training_Scoreboard_C::WBP_TotalScore' has a wrong offset!");
////static_assert(offsetof(UWBP_Training_Scoreboard_C, WBP_TotalScore_End) == 0x0006A8, "Member 'UWBP_Training_Scoreboard_C::WBP_TotalScore_End' has a wrong offset!");

}

