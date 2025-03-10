#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_LobbyCurrency

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_LobbyCurrency.PyWidget_LobbyCurrency
// 0x00A8 (0x0698 - 0x05F0)
class UPyWidget_LobbyCurrency : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuideTipsStyle>                LatticeHoverGuideTips;                             // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                CoinHoverGuideTips;                                // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UPyWidget_BattlePass_CurrencyText> NumWidget;                                         // 0x0610(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsNeedCurrencyListTips;                            // 0x0618(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_619[0x7];                                      // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class UMaterialInstance*> CurrencySweepMaterialList;                         // 0x0620(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            Hovered_Text_Color;                                // 0x0670(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            UnHovered_Text_Color;                              // 0x0684(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnCascadingVisibleChanged(bool Visible);
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_LobbyCurrency">();
	}
	static class UPyWidget_LobbyCurrency* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_LobbyCurrency>();
	}
};
static_assert(alignof(UPyWidget_LobbyCurrency) == 0x000008, "Wrong alignment on UPyWidget_LobbyCurrency");
static_assert(sizeof(UPyWidget_LobbyCurrency) == 0x000698, "Wrong size on UPyWidget_LobbyCurrency");
static_assert(offsetof(UPyWidget_LobbyCurrency, LatticeHoverGuideTips) == 0x0005F0, "Member 'UPyWidget_LobbyCurrency::LatticeHoverGuideTips' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyCurrency, CoinHoverGuideTips) == 0x000600, "Member 'UPyWidget_LobbyCurrency::CoinHoverGuideTips' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyCurrency, NumWidget) == 0x000610, "Member 'UPyWidget_LobbyCurrency::NumWidget' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyCurrency, IsNeedCurrencyListTips) == 0x000618, "Member 'UPyWidget_LobbyCurrency::IsNeedCurrencyListTips' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyCurrency, CurrencySweepMaterialList) == 0x000620, "Member 'UPyWidget_LobbyCurrency::CurrencySweepMaterialList' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyCurrency, Hovered_Text_Color) == 0x000670, "Member 'UPyWidget_LobbyCurrency::Hovered_Text_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_LobbyCurrency, UnHovered_Text_Color) == 0x000684, "Member 'UPyWidget_LobbyCurrency::UnHovered_Text_Color' has a wrong offset!");

// PythonClass PyWidget_LobbyCurrency.PyWidget_Currency_Tips_Item
// 0x0028 (0x0618 - 0x05F0)
class UPyWidget_Currency_Tips_Item final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            Hovered_Text_Color;                                // 0x05EC(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            UnHovered_Text_Color;                              // 0x0600(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Currency_Tips_Item">();
	}
	static class UPyWidget_Currency_Tips_Item* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Currency_Tips_Item>();
	}
};
static_assert(alignof(UPyWidget_Currency_Tips_Item) == 0x000008, "Wrong alignment on UPyWidget_Currency_Tips_Item");
static_assert(sizeof(UPyWidget_Currency_Tips_Item) == 0x000618, "Wrong size on UPyWidget_Currency_Tips_Item");
static_assert(offsetof(UPyWidget_Currency_Tips_Item, Hovered_Text_Color) == 0x0005EC, "Member 'UPyWidget_Currency_Tips_Item::Hovered_Text_Color' has a wrong offset!");
static_assert(offsetof(UPyWidget_Currency_Tips_Item, UnHovered_Text_Color) == 0x000600, "Member 'UPyWidget_Currency_Tips_Item::UnHovered_Text_Color' has a wrong offset!");

// PythonClass PyWidget_LobbyCurrency.PyWidget_Currency_Tips
// 0x0008 (0x05F8 - 0x05F0)
class UPyWidget_Currency_Tips final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                Currency_Item;                                     // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Currency_Tips">();
	}
	static class UPyWidget_Currency_Tips* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Currency_Tips>();
	}
};
static_assert(alignof(UPyWidget_Currency_Tips) == 0x000008, "Wrong alignment on UPyWidget_Currency_Tips");
static_assert(sizeof(UPyWidget_Currency_Tips) == 0x0005F8, "Wrong size on UPyWidget_Currency_Tips");
static_assert(offsetof(UPyWidget_Currency_Tips, Currency_Item) == 0x0005F0, "Member 'UPyWidget_Currency_Tips::Currency_Item' has a wrong offset!");

}

