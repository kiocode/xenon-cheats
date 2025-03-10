#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_FriendsList

#include "Basic.hpp"

#include "Python_enums_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "SlateCore_structs.hpp"
#include "PyWidget_Common_Button_classes.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_FriendsList.PyWidget_Friends_List
// 0x0088 (0x0678 - 0x05F0)
class UPyWidget_Friends_List final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DelayTime;                                         // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   TitleText;                                         // 0x05F0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   FriendTitleText;                                   // 0x0608(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   FactionTitleText;                                  // 0x0620(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SearchTitleText;                                   // 0x0638(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SearchNullText;                                    // 0x0650(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         FactionLoopTime;                                   // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FactionUpdateCdTime;                               // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFriendPanelListType                          FriendsListType;                                   // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	void SetFocusingWidget(class UWidget* Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Friends_List">();
	}
	static class UPyWidget_Friends_List* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Friends_List>();
	}
};
static_assert(alignof(UPyWidget_Friends_List) == 0x000008, "Wrong alignment on UPyWidget_Friends_List");
static_assert(sizeof(UPyWidget_Friends_List) == 0x000678, "Wrong size on UPyWidget_Friends_List");
static_assert(offsetof(UPyWidget_Friends_List, DelayTime) == 0x0005EC, "Member 'UPyWidget_Friends_List::DelayTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, TitleText) == 0x0005F0, "Member 'UPyWidget_Friends_List::TitleText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FriendTitleText) == 0x000608, "Member 'UPyWidget_Friends_List::FriendTitleText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FactionTitleText) == 0x000620, "Member 'UPyWidget_Friends_List::FactionTitleText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, SearchTitleText) == 0x000638, "Member 'UPyWidget_Friends_List::SearchTitleText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, SearchNullText) == 0x000650, "Member 'UPyWidget_Friends_List::SearchNullText' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FactionLoopTime) == 0x000668, "Member 'UPyWidget_Friends_List::FactionLoopTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FactionUpdateCdTime) == 0x00066C, "Member 'UPyWidget_Friends_List::FactionUpdateCdTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_List, FriendsListType) == 0x000670, "Member 'UPyWidget_Friends_List::FriendsListType' has a wrong offset!");

// PythonClass PyWidget_FriendsList.PyWidget_Friends_ListTitle
// 0x0028 (0x0778 - 0x0750)
class UPyWidget_Friends_ListTitle final : public UPyWidget_Button
{
public:
	struct FSlateColor                            NormalColor;                                       // 0x0750(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            HoveredColor;                                      // 0x0764(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void SetIsHover(bool IsHover_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Friends_ListTitle">();
	}
	static class UPyWidget_Friends_ListTitle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Friends_ListTitle>();
	}
};
static_assert(alignof(UPyWidget_Friends_ListTitle) == 0x000008, "Wrong alignment on UPyWidget_Friends_ListTitle");
static_assert(sizeof(UPyWidget_Friends_ListTitle) == 0x000778, "Wrong size on UPyWidget_Friends_ListTitle");
static_assert(offsetof(UPyWidget_Friends_ListTitle, NormalColor) == 0x000750, "Member 'UPyWidget_Friends_ListTitle::NormalColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Friends_ListTitle, HoveredColor) == 0x000764, "Member 'UPyWidget_Friends_ListTitle::HoveredColor' has a wrong offset!");

// PythonClass PyWidget_FriendsList.PyWidget_FriendsItemBtn
// 0x0360 (0x0C50 - 0x08F0)
class UPyWidget_FriendsItemBtn final : public UPyWidget_BaseCommonButton
{
public:
	uint8                                         Pad_8E8[0x8];                                      // 0x08E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            NormalIcon;                                        // 0x08F0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            HoverIcon;                                         // 0x09C0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            PresslIcon;                                        // 0x0A90(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            DisablelIcon;                                      // 0x0B60(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   HoverTipsText;                                     // 0x0C30(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_FriendsItemBtn">();
	}
	static class UPyWidget_FriendsItemBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_FriendsItemBtn>();
	}
};
static_assert(alignof(UPyWidget_FriendsItemBtn) == 0x000010, "Wrong alignment on UPyWidget_FriendsItemBtn");
static_assert(sizeof(UPyWidget_FriendsItemBtn) == 0x000C50, "Wrong size on UPyWidget_FriendsItemBtn");
static_assert(offsetof(UPyWidget_FriendsItemBtn, NormalIcon) == 0x0008F0, "Member 'UPyWidget_FriendsItemBtn::NormalIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsItemBtn, HoverIcon) == 0x0009C0, "Member 'UPyWidget_FriendsItemBtn::HoverIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsItemBtn, PresslIcon) == 0x000A90, "Member 'UPyWidget_FriendsItemBtn::PresslIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsItemBtn, DisablelIcon) == 0x000B60, "Member 'UPyWidget_FriendsItemBtn::DisablelIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_FriendsItemBtn, HoverTipsText) == 0x000C30, "Member 'UPyWidget_FriendsItemBtn::HoverTipsText' has a wrong offset!");

}

