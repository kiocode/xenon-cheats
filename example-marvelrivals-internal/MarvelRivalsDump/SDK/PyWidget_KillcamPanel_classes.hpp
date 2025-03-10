#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_KillcamPanel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Marvel_classes.hpp"
#include "Engine_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_KillcamPanel.PyWidget_KillcamPanel
// 0x0068 (0x0610 - 0x05A8)
class UPyWidget_KillcamPanel : public UWidget_Killcam
{
public:
	class UAkAudioEvent*                          AkEvent_HelaSpeedUpReborn;                         // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HelaCountdownDelay;                                // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HelaAudioDelay;                                    // 0x05B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AutoCloseTime;                                     // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsGhostMode;                                       // 0x05BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5BD[0x3];                                      // 0x05BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ExitReplayText;                                    // 0x05C0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   TeamWatchText;                                     // 0x05D8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         SkipDelayTime;                                     // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5F4[0x4];                                      // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   HidePanelTags;                                     // 0x05F8(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UInputAction*                           OpenChatAction;                                    // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetGhostMode();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void ApplyHelaCountDown();
	void OnLocalPlayerRespawnBreak();
	void OnRespawnRepTimerUpdate();
	void OnLocalPlayerRespawnReset(float Time);
	void UpdateRespawnTime();
	void OnLocalPlayerRespawnStart(float Time);
	void OnReceiveInputAction(class FName ActionName, const EInputEvent EventType);
	void Destruct();
	void Construct();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_KillcamPanel">();
	}
	static class UPyWidget_KillcamPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_KillcamPanel>();
	}
};
static_assert(alignof(UPyWidget_KillcamPanel) == 0x000008, "Wrong alignment on UPyWidget_KillcamPanel");
static_assert(sizeof(UPyWidget_KillcamPanel) == 0x000610, "Wrong size on UPyWidget_KillcamPanel");
static_assert(offsetof(UPyWidget_KillcamPanel, AkEvent_HelaSpeedUpReborn) == 0x0005A8, "Member 'UPyWidget_KillcamPanel::AkEvent_HelaSpeedUpReborn' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, HelaCountdownDelay) == 0x0005B0, "Member 'UPyWidget_KillcamPanel::HelaCountdownDelay' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, HelaAudioDelay) == 0x0005B4, "Member 'UPyWidget_KillcamPanel::HelaAudioDelay' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, AutoCloseTime) == 0x0005B8, "Member 'UPyWidget_KillcamPanel::AutoCloseTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, IsGhostMode) == 0x0005BC, "Member 'UPyWidget_KillcamPanel::IsGhostMode' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, ExitReplayText) == 0x0005C0, "Member 'UPyWidget_KillcamPanel::ExitReplayText' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, TeamWatchText) == 0x0005D8, "Member 'UPyWidget_KillcamPanel::TeamWatchText' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, SkipDelayTime) == 0x0005F0, "Member 'UPyWidget_KillcamPanel::SkipDelayTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, HidePanelTags) == 0x0005F8, "Member 'UPyWidget_KillcamPanel::HidePanelTags' has a wrong offset!");
static_assert(offsetof(UPyWidget_KillcamPanel, OpenChatAction) == 0x000608, "Member 'UPyWidget_KillcamPanel::OpenChatAction' has a wrong offset!");

// PythonClass PyWidget_KillcamPanel.PyWidget_Killcam_Table
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Killcam_Table : public UPyMarvelUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Killcam_Table">();
	}
	static class UPyWidget_Killcam_Table* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Killcam_Table>();
	}
};
static_assert(alignof(UPyWidget_Killcam_Table) == 0x000008, "Wrong alignment on UPyWidget_Killcam_Table");
static_assert(sizeof(UPyWidget_Killcam_Table) == 0x0005F0, "Wrong size on UPyWidget_Killcam_Table");

// PythonClass PyWidget_KillcamPanel.PyWidget_Killcam_TableItem
// 0x0028 (0x0618 - 0x05F0)
class UPyWidget_Killcam_TableItem : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            KillerColor;                                       // 0x05EC(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            CommonColor;                                       // 0x0600(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Killcam_TableItem">();
	}
	static class UPyWidget_Killcam_TableItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Killcam_TableItem>();
	}
};
static_assert(alignof(UPyWidget_Killcam_TableItem) == 0x000008, "Wrong alignment on UPyWidget_Killcam_TableItem");
static_assert(sizeof(UPyWidget_Killcam_TableItem) == 0x000618, "Wrong size on UPyWidget_Killcam_TableItem");
static_assert(offsetof(UPyWidget_Killcam_TableItem, KillerColor) == 0x0005EC, "Member 'UPyWidget_Killcam_TableItem::KillerColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_Killcam_TableItem, CommonColor) == 0x000600, "Member 'UPyWidget_Killcam_TableItem::CommonColor' has a wrong offset!");

// PythonClass PyWidget_KillcamPanel.PyWidget_Killcam_KillerItem
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_Killcam_KillerItem final : public UPyMarvelUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Killcam_KillerItem">();
	}
	static class UPyWidget_Killcam_KillerItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Killcam_KillerItem>();
	}
};
static_assert(alignof(UPyWidget_Killcam_KillerItem) == 0x000008, "Wrong alignment on UPyWidget_Killcam_KillerItem");
static_assert(sizeof(UPyWidget_Killcam_KillerItem) == 0x0005F0, "Wrong size on UPyWidget_Killcam_KillerItem");

}

