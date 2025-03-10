#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_NavigationBar_Button

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_NavigationBar_Button.PyWidget_Common_NavigationBar_Button
// 0x0098 (0x07E8 - 0x0750)
class UPyWidget_Common_NavigationBar_Button : public UPyWidget_Button
{
public:
	struct FSlateColor                            BtnNameColor;                                      // 0x0750(0x0014)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	struct FSlateColor                            BtnNameSelectColor;                                // 0x0764(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BtnNameHoverColor;                                 // 0x0778(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BtnNamePressColor;                                 // 0x078C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          Disable_Bg_Select;                                 // 0x07A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsSelected;                                        // 0x07A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7A2[0x6];                                      // 0x07A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       Anim_Press;                                        // 0x07A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelOverlay*                         Overlay_Tab_Select;                                // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNamedSlot*                             Slot_Reddot;                                       // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                 Img_Tab_Press;                                     // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnIsSelectedChanged;                               // 0x07C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnResetToDefaultIndex;                             // 0x07D8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnIsSelectedChanged__DelegateSignature(bool IsSelected_0);
	void OnResetToDefaultIndex__DelegateSignature();
	void OnInitialized();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void SetIsHover(bool IsHover_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_NavigationBar_Button">();
	}
	static class UPyWidget_Common_NavigationBar_Button* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_NavigationBar_Button>();
	}
};
static_assert(alignof(UPyWidget_Common_NavigationBar_Button) == 0x000008, "Wrong alignment on UPyWidget_Common_NavigationBar_Button");
static_assert(sizeof(UPyWidget_Common_NavigationBar_Button) == 0x0007E8, "Wrong size on UPyWidget_Common_NavigationBar_Button");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, BtnNameColor) == 0x000750, "Member 'UPyWidget_Common_NavigationBar_Button::BtnNameColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, BtnNameSelectColor) == 0x000764, "Member 'UPyWidget_Common_NavigationBar_Button::BtnNameSelectColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, BtnNameHoverColor) == 0x000778, "Member 'UPyWidget_Common_NavigationBar_Button::BtnNameHoverColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, BtnNamePressColor) == 0x00078C, "Member 'UPyWidget_Common_NavigationBar_Button::BtnNamePressColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, Disable_Bg_Select) == 0x0007A0, "Member 'UPyWidget_Common_NavigationBar_Button::Disable_Bg_Select' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, IsSelected) == 0x0007A1, "Member 'UPyWidget_Common_NavigationBar_Button::IsSelected' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, Anim_Press) == 0x0007A8, "Member 'UPyWidget_Common_NavigationBar_Button::Anim_Press' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, Overlay_Tab_Select) == 0x0007B0, "Member 'UPyWidget_Common_NavigationBar_Button::Overlay_Tab_Select' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, Slot_Reddot) == 0x0007B8, "Member 'UPyWidget_Common_NavigationBar_Button::Slot_Reddot' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, Img_Tab_Press) == 0x0007C0, "Member 'UPyWidget_Common_NavigationBar_Button::Img_Tab_Press' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, OnIsSelectedChanged) == 0x0007C8, "Member 'UPyWidget_Common_NavigationBar_Button::OnIsSelectedChanged' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_NavigationBar_Button, OnResetToDefaultIndex) == 0x0007D8, "Member 'UPyWidget_Common_NavigationBar_Button::OnResetToDefaultIndex' has a wrong offset!");

}

