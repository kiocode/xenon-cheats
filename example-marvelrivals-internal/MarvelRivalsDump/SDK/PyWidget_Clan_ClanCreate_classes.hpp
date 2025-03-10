#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Clan_ClanCreate

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "Marvel_structs.hpp"
#include "PyWidget_ModuleMainPanel_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Clan_ClanCreate.PyWidget_Clan_ClanCreateSlotItem
// 0x0078 (0x0668 - 0x05F0)
class UPyWidget_Clan_ClanCreateSlotItem final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlay*                               Overlay_GamePort_Unselective;                      // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Unselective_Normal;                            // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Unselective_Hover;                             // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Unselective_Icon_PC;                           // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Unselective_Icon_PS;                           // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Unselective_Icon_Xbox;                         // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Normal_GamePort;                              // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOverlay*                               Overlay_GamePort_Select;                           // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Select_Normal;                                 // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Select_Hover;                                  // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Select_Icon_PC;                                // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Select_Icon_PS;                                // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Select_Icon_Xbox;                              // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Select_GamePort;                              // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                                Btn_GamePort;                                      // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Clan_ClanCreateSlotItem">();
	}
	static class UPyWidget_Clan_ClanCreateSlotItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Clan_ClanCreateSlotItem>();
	}
};
//static_assert(alignof(UPyWidget_Clan_ClanCreateSlotItem) == 0x000008, "Wrong alignment on UPyWidget_Clan_ClanCreateSlotItem");
//static_assert(sizeof(UPyWidget_Clan_ClanCreateSlotItem) == 0x000668, "Wrong size on UPyWidget_Clan_ClanCreateSlotItem");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Overlay_GamePort_Unselective) == 0x0005F0, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Overlay_GamePort_Unselective' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Unselective_Normal) == 0x0005F8, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Unselective_Normal' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Unselective_Hover) == 0x000600, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Unselective_Hover' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Unselective_Icon_PC) == 0x000608, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Unselective_Icon_PC' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Unselective_Icon_PS) == 0x000610, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Unselective_Icon_PS' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Unselective_Icon_Xbox) == 0x000618, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Unselective_Icon_Xbox' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Text_Normal_GamePort) == 0x000620, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Text_Normal_GamePort' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Overlay_GamePort_Select) == 0x000628, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Overlay_GamePort_Select' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Select_Normal) == 0x000630, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Select_Normal' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Select_Hover) == 0x000638, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Select_Hover' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Select_Icon_PC) == 0x000640, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Select_Icon_PC' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Select_Icon_PS) == 0x000648, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Select_Icon_PS' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Img_Select_Icon_Xbox) == 0x000650, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Img_Select_Icon_Xbox' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Text_Select_GamePort) == 0x000658, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Text_Select_GamePort' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateSlotItem, Btn_GamePort) == 0x000660, "Member 'UPyWidget_Clan_ClanCreateSlotItem::Btn_GamePort' has a wrong offset!");

// PythonClass PyWidget_Clan_ClanCreate.PyWidget_Clan_ClanCreateSlotList
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Clan_ClanCreateSlotList final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Clan_ClanCreateSlotList">();
	}
	static class UPyWidget_Clan_ClanCreateSlotList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Clan_ClanCreateSlotList>();
	}
};
//static_assert(alignof(UPyWidget_Clan_ClanCreateSlotList) == 0x000008, "Wrong alignment on UPyWidget_Clan_ClanCreateSlotList");
//static_assert(sizeof(UPyWidget_Clan_ClanCreateSlotList) == 0x0005F0, "Wrong size on UPyWidget_Clan_ClanCreateSlotList");

// PythonClass PyWidget_Clan_ClanCreate.PyWidget_Clan_ClanCreateCoolingItem
// 0x0008 (0x05F8 - 0x05F0)
class UPyWidget_Clan_ClanCreateCoolingItem final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelTextBlock*                       Text_Tips;                                         // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Clan_ClanCreateCoolingItem">();
	}
	static class UPyWidget_Clan_ClanCreateCoolingItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Clan_ClanCreateCoolingItem>();
	}
};
//static_assert(alignof(UPyWidget_Clan_ClanCreateCoolingItem) == 0x000008, "Wrong alignment on UPyWidget_Clan_ClanCreateCoolingItem");
//static_assert(sizeof(UPyWidget_Clan_ClanCreateCoolingItem) == 0x0005F8, "Wrong size on UPyWidget_Clan_ClanCreateCoolingItem");
//static_assert(offsetof(UPyWidget_Clan_ClanCreateCoolingItem, Text_Tips) == 0x0005F0, "Member 'UPyWidget_Clan_ClanCreateCoolingItem::Text_Tips' has a wrong offset!");

// PythonClass PyWidget_Clan_ClanCreate.PyWidget_Clan_ClanCreate
// 0x0030 (0x0648 - 0x0618)
class UPyWidget_Clan_ClanCreate final : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_611[0x7];                                      // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlay*                               Overlay_Create;                                    // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                         HBox_Compile_Btn;                                  // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputTips                             WrongSensitiveWords;                               // 0x0628(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Clan_ClanCreate">();
	}
	static class UPyWidget_Clan_ClanCreate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Clan_ClanCreate>();
	}
};
//static_assert(alignof(UPyWidget_Clan_ClanCreate) == 0x000008, "Wrong alignment on UPyWidget_Clan_ClanCreate");
//static_assert(sizeof(UPyWidget_Clan_ClanCreate) == 0x000648, "Wrong size on UPyWidget_Clan_ClanCreate");
//static_assert(offsetof(UPyWidget_Clan_ClanCreate, Overlay_Create) == 0x000618, "Member 'UPyWidget_Clan_ClanCreate::Overlay_Create' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreate, HBox_Compile_Btn) == 0x000620, "Member 'UPyWidget_Clan_ClanCreate::HBox_Compile_Btn' has a wrong offset!");
//static_assert(offsetof(UPyWidget_Clan_ClanCreate, WrongSensitiveWords) == 0x000628, "Member 'UPyWidget_Clan_ClanCreate::WrongSensitiveWords' has a wrong offset!");

}

