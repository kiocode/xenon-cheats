#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DropDownList_Network_ListView_Item

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_DropDownList_ListView_Item_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_DropDownList_Network_ListView_Item.PyWidget_DropDownList_Network_ItemData
// 0x0030 (0x0060 - 0x0030)
class UPyWidget_DropDownList_Network_ItemData final : public UObject
{
public:
	class UUserWidget*                            MainPanel;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemId;                                            // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ItemText;                                          // 0x0040(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                         Network_state;                                     // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_DropDownList_Network_ItemData">();
	}
	static class UPyWidget_DropDownList_Network_ItemData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_DropDownList_Network_ItemData>();
	}
};
static_assert(alignof(UPyWidget_DropDownList_Network_ItemData) == 0x000008, "Wrong alignment on UPyWidget_DropDownList_Network_ItemData");
static_assert(sizeof(UPyWidget_DropDownList_Network_ItemData) == 0x000060, "Wrong size on UPyWidget_DropDownList_Network_ItemData");
static_assert(offsetof(UPyWidget_DropDownList_Network_ItemData, MainPanel) == 0x000030, "Member 'UPyWidget_DropDownList_Network_ItemData::MainPanel' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList_Network_ItemData, ItemId) == 0x000038, "Member 'UPyWidget_DropDownList_Network_ItemData::ItemId' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList_Network_ItemData, ItemText) == 0x000040, "Member 'UPyWidget_DropDownList_Network_ItemData::ItemText' has a wrong offset!");
static_assert(offsetof(UPyWidget_DropDownList_Network_ItemData, Network_state) == 0x000058, "Member 'UPyWidget_DropDownList_Network_ItemData::Network_state' has a wrong offset!");

// PythonClass PyWidget_DropDownList_Network_ListView_Item.Pywidget_DropDownList_Network_Item
// 0x0058 (0x07E8 - 0x0790)
class UPywidget_DropDownList_Network_Item final : public UPyWidget_DropDownList_ListView_Item
{
public:
	struct FSlateColor                            WeakSignalTextColor;                               // 0x0790(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            MediumSignalTextColor;                             // 0x07A4(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            StrongSignalTextColor;                             // 0x07B8(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            AllPortTextColor;                                  // 0x07CC(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_Recommend;                                     // 0x07E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Destruct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Pywidget_DropDownList_Network_Item">();
	}
	static class UPywidget_DropDownList_Network_Item* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPywidget_DropDownList_Network_Item>();
	}
};
static_assert(alignof(UPywidget_DropDownList_Network_Item) == 0x000008, "Wrong alignment on UPywidget_DropDownList_Network_Item");
static_assert(sizeof(UPywidget_DropDownList_Network_Item) == 0x0007E8, "Wrong size on UPywidget_DropDownList_Network_Item");
static_assert(offsetof(UPywidget_DropDownList_Network_Item, WeakSignalTextColor) == 0x000790, "Member 'UPywidget_DropDownList_Network_Item::WeakSignalTextColor' has a wrong offset!");
static_assert(offsetof(UPywidget_DropDownList_Network_Item, MediumSignalTextColor) == 0x0007A4, "Member 'UPywidget_DropDownList_Network_Item::MediumSignalTextColor' has a wrong offset!");
static_assert(offsetof(UPywidget_DropDownList_Network_Item, StrongSignalTextColor) == 0x0007B8, "Member 'UPywidget_DropDownList_Network_Item::StrongSignalTextColor' has a wrong offset!");
static_assert(offsetof(UPywidget_DropDownList_Network_Item, AllPortTextColor) == 0x0007CC, "Member 'UPywidget_DropDownList_Network_Item::AllPortTextColor' has a wrong offset!");
static_assert(offsetof(UPywidget_DropDownList_Network_Item, Img_Recommend) == 0x0007E0, "Member 'UPywidget_DropDownList_Network_Item::Img_Recommend' has a wrong offset!");

}

