#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GunModChild

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ShopItemCategory_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GunModChild.GunModChild_C
// 0x0058 (0x02B8 - 0x0260)
class UGunModChild_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_146;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_63;                                      // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 ShopInfo;                                          // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UModifyWeaponUI_C*                      ParentWidget;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         GunIndex;                                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGunBase_C*                             GunRef;                                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EShopItemCategory                             Category;                                          // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARobberController_C*                    As_Robber_Controller;                              // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Equipped_;                                         // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GunModChild(int32 EntryPoint);
	void StopCompare();
	void BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void IsEquippedAttachment_();
	void BndEvt__GunModChild_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	class FText GetText_0();
	struct FSlateBrush GetBrush_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GunModChild_C">();
	}
	static class UGunModChild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGunModChild_C>();
	}
};
static_assert(alignof(UGunModChild_C) == 0x000008, "Wrong alignment on UGunModChild_C");
static_assert(sizeof(UGunModChild_C) == 0x0002B8, "Wrong size on UGunModChild_C");
static_assert(offsetof(UGunModChild_C, UberGraphFrame) == 0x000260, "Member 'UGunModChild_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, Button) == 0x000268, "Member 'UGunModChild_C::Button' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, Image_146) == 0x000270, "Member 'UGunModChild_C::Image_146' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, TextBlock_63) == 0x000278, "Member 'UGunModChild_C::TextBlock_63' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, ShopInfo) == 0x000280, "Member 'UGunModChild_C::ShopInfo' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, ParentWidget) == 0x000288, "Member 'UGunModChild_C::ParentWidget' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, GunIndex) == 0x000290, "Member 'UGunModChild_C::GunIndex' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, GunRef) == 0x000298, "Member 'UGunModChild_C::GunRef' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, Category) == 0x0002A0, "Member 'UGunModChild_C::Category' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, As_Robber_Controller) == 0x0002A8, "Member 'UGunModChild_C::As_Robber_Controller' has a wrong offset!");
static_assert(offsetof(UGunModChild_C, Equipped_) == 0x0002B0, "Member 'UGunModChild_C::Equipped_' has a wrong offset!");

}

