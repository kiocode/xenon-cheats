#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_PopupPanel

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_PopupPanel.PyWidget_PopupPanel
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_PopupPanel final : public UPyMarvelUserWidget
{
public:
	bool                                          IsPopupPanelVisable;                               // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5EA[0x2];                                      // 0x05EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PopupPanelZOrder;                                  // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void SetPopupPanelVisable(bool Visible);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_PopupPanel">();
	}
	static class UPyWidget_PopupPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_PopupPanel>();
	}
};
static_assert(alignof(UPyWidget_PopupPanel) == 0x000008, "Wrong alignment on UPyWidget_PopupPanel");
static_assert(sizeof(UPyWidget_PopupPanel) == 0x0005F0, "Wrong size on UPyWidget_PopupPanel");
static_assert(offsetof(UPyWidget_PopupPanel, IsPopupPanelVisable) == 0x0005E9, "Member 'UPyWidget_PopupPanel::IsPopupPanelVisable' has a wrong offset!");
static_assert(offsetof(UPyWidget_PopupPanel, PopupPanelZOrder) == 0x0005EC, "Member 'UPyWidget_PopupPanel::PopupPanelZOrder' has a wrong offset!");

}

