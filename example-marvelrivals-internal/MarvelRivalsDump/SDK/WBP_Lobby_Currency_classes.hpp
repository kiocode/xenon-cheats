#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Lobby_Currency

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_LobbyCurrency_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Lobby_Currency.WBP_Lobby_Currency_C
// 0x00C8 (0x0760 - 0x0698)
class UWBP_Lobby_Currency_C final : public UPyWidget_LobbyCurrency
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0698(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_LATTICE_Sweep_01;                             // 0x06A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Flow_1;                                       // 0x06A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Flow;                                         // 0x06B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Coin;                                          // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Currency_Add;                                  // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Currency_More;                                 // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelButton*                          Btn_Lattice;                                       // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_Price01;                                      // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelHorizontalBox*                   HBox_Price02;                                      // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Price01;                                       // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Price02;                                       // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Price_Line;                                    // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_PriceAdd01;                                    // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_PriceAdd02;                                    // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_ExtraCurrency;                                // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Price01;                                      // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Price02;                                      // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Img_Flow01;                                     // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Img_Flow02;                                     // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Img_Sweep_01_1;                                 // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Img_Sweep_01_2;                                 // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Img_Sweep_02_1;                                 // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Vx_Img_Sweep_02_2;                                 // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Test;                                              // 0x0758(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Interval;                                          // 0x075C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Lobby_Currency(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Lobby_Currency_C">();
	}
	static class UWBP_Lobby_Currency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Lobby_Currency_C>();
	}
};
////static_assert(alignof(UWBP_Lobby_Currency_C) == 0x000008, "Wrong alignment on UWBP_Lobby_Currency_C");
////static_assert(sizeof(UWBP_Lobby_Currency_C) == 0x000760, "Wrong size on UWBP_Lobby_Currency_C");
////static_assert(offsetof(UWBP_Lobby_Currency_C, UberGraphFrame) == 0x000698, "Member 'UWBP_Lobby_Currency_C::UberGraphFrame' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Anim_LATTICE_Sweep_01) == 0x0006A0, "Member 'UWBP_Lobby_Currency_C::Anim_LATTICE_Sweep_01' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Anim_Flow_1) == 0x0006A8, "Member 'UWBP_Lobby_Currency_C::Anim_Flow_1' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Anim_Flow) == 0x0006B0, "Member 'UWBP_Lobby_Currency_C::Anim_Flow' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Btn_Coin) == 0x0006B8, "Member 'UWBP_Lobby_Currency_C::Btn_Coin' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Btn_Currency_Add) == 0x0006C0, "Member 'UWBP_Lobby_Currency_C::Btn_Currency_Add' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Btn_Currency_More) == 0x0006C8, "Member 'UWBP_Lobby_Currency_C::Btn_Currency_More' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Btn_Lattice) == 0x0006D0, "Member 'UWBP_Lobby_Currency_C::Btn_Lattice' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, HBox_Price01) == 0x0006D8, "Member 'UWBP_Lobby_Currency_C::HBox_Price01' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, HBox_Price02) == 0x0006E0, "Member 'UWBP_Lobby_Currency_C::HBox_Price02' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Img_Price01) == 0x0006E8, "Member 'UWBP_Lobby_Currency_C::Img_Price01' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Img_Price02) == 0x0006F0, "Member 'UWBP_Lobby_Currency_C::Img_Price02' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Img_Price_Line) == 0x0006F8, "Member 'UWBP_Lobby_Currency_C::Img_Price_Line' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Img_PriceAdd01) == 0x000700, "Member 'UWBP_Lobby_Currency_C::Img_PriceAdd01' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Img_PriceAdd02) == 0x000708, "Member 'UWBP_Lobby_Currency_C::Img_PriceAdd02' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Slot_ExtraCurrency) == 0x000710, "Member 'UWBP_Lobby_Currency_C::Slot_ExtraCurrency' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Text_Price01) == 0x000718, "Member 'UWBP_Lobby_Currency_C::Text_Price01' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Text_Price02) == 0x000720, "Member 'UWBP_Lobby_Currency_C::Text_Price02' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Vx_Img_Flow01) == 0x000728, "Member 'UWBP_Lobby_Currency_C::Vx_Img_Flow01' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Vx_Img_Flow02) == 0x000730, "Member 'UWBP_Lobby_Currency_C::Vx_Img_Flow02' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Vx_Img_Sweep_01_1) == 0x000738, "Member 'UWBP_Lobby_Currency_C::Vx_Img_Sweep_01_1' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Vx_Img_Sweep_01_2) == 0x000740, "Member 'UWBP_Lobby_Currency_C::Vx_Img_Sweep_01_2' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Vx_Img_Sweep_02_1) == 0x000748, "Member 'UWBP_Lobby_Currency_C::Vx_Img_Sweep_02_1' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Vx_Img_Sweep_02_2) == 0x000750, "Member 'UWBP_Lobby_Currency_C::Vx_Img_Sweep_02_2' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Test) == 0x000758, "Member 'UWBP_Lobby_Currency_C::Test' has a wrong offset!");
////static_assert(offsetof(UWBP_Lobby_Currency_C, Interval) == 0x00075C, "Member 'UWBP_Lobby_Currency_C::Interval' has a wrong offset!");

}

