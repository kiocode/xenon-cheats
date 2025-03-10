#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HomeEntrance_Main

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Marvel_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_HomeEntrance_Main.PyWidget_HomeEntrance_Main
// 0x0130 (0x0720 - 0x05F0)
class UPyWidget_HomeEntrance_Main final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           GamePadFoldAction;                                 // 0x05F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          GamePadFoldActionSoundEffect;                      // 0x05F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                WidgetMargin;                                      // 0x0600(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuideTipsStyle                        ScrollTabGuideTipsStyle;                           // 0x0610(0x0110)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HomeEntrance_Main">();
	}
	static class UPyWidget_HomeEntrance_Main* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HomeEntrance_Main>();
	}
};
static_assert(alignof(UPyWidget_HomeEntrance_Main) == 0x000008, "Wrong alignment on UPyWidget_HomeEntrance_Main");
static_assert(sizeof(UPyWidget_HomeEntrance_Main) == 0x000720, "Wrong size on UPyWidget_HomeEntrance_Main");
static_assert(offsetof(UPyWidget_HomeEntrance_Main, GamePadFoldAction) == 0x0005F0, "Member 'UPyWidget_HomeEntrance_Main::GamePadFoldAction' has a wrong offset!");
static_assert(offsetof(UPyWidget_HomeEntrance_Main, GamePadFoldActionSoundEffect) == 0x0005F8, "Member 'UPyWidget_HomeEntrance_Main::GamePadFoldActionSoundEffect' has a wrong offset!");
static_assert(offsetof(UPyWidget_HomeEntrance_Main, WidgetMargin) == 0x000600, "Member 'UPyWidget_HomeEntrance_Main::WidgetMargin' has a wrong offset!");
static_assert(offsetof(UPyWidget_HomeEntrance_Main, ScrollTabGuideTipsStyle) == 0x000610, "Member 'UPyWidget_HomeEntrance_Main::ScrollTabGuideTipsStyle' has a wrong offset!");

}

