#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryCategoryTitle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ShopItemCategory_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InventoryCategoryTitle.InventoryCategoryTitle_C
// 0x0020 (0x0280 - 0x0260)
class UInventoryCategoryTitle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Highligh;                                          // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_59;                                      // 0x0270(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EShopItemCategory                             Category;                                          // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          NoItems_;                                          // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_InventoryCategoryTitle(int32 EntryPoint);
	void HighlightCategory();
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryCategoryTitle_C">();
	}
	static class UInventoryCategoryTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryCategoryTitle_C>();
	}
};
static_assert(alignof(UInventoryCategoryTitle_C) == 0x000008, "Wrong alignment on UInventoryCategoryTitle_C");
static_assert(sizeof(UInventoryCategoryTitle_C) == 0x000280, "Wrong size on UInventoryCategoryTitle_C");
static_assert(offsetof(UInventoryCategoryTitle_C, UberGraphFrame) == 0x000260, "Member 'UInventoryCategoryTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInventoryCategoryTitle_C, Highligh) == 0x000268, "Member 'UInventoryCategoryTitle_C::Highligh' has a wrong offset!");
static_assert(offsetof(UInventoryCategoryTitle_C, TextBlock_59) == 0x000270, "Member 'UInventoryCategoryTitle_C::TextBlock_59' has a wrong offset!");
static_assert(offsetof(UInventoryCategoryTitle_C, Category) == 0x000278, "Member 'UInventoryCategoryTitle_C::Category' has a wrong offset!");
static_assert(offsetof(UInventoryCategoryTitle_C, NoItems_) == 0x000279, "Member 'UInventoryCategoryTitle_C::NoItems_' has a wrong offset!");

}

