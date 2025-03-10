#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Career_AchievementPopup

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Career_AchievementPopup.PyWidget_Career_AchievementPopup
// 0x0020 (0x0610 - 0x05F0)
class UPyWidget_Career_AchievementPopup final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x3];                                      // 0x05E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ShowAchievementNum;                                // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MultiCarouselTime;                                 // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5F4[0x4];                                      // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent_ShowAward;                                 // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelImage*                           Img_Achievement_Icon;                              // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Achievement_Name;                             // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Career_AchievementPopup">();
	}
	static class UPyWidget_Career_AchievementPopup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Career_AchievementPopup>();
	}
};
static_assert(alignof(UPyWidget_Career_AchievementPopup) == 0x000008, "Wrong alignment on UPyWidget_Career_AchievementPopup");
static_assert(sizeof(UPyWidget_Career_AchievementPopup) == 0x000610, "Wrong size on UPyWidget_Career_AchievementPopup");
static_assert(offsetof(UPyWidget_Career_AchievementPopup, ShowAchievementNum) == 0x0005EC, "Member 'UPyWidget_Career_AchievementPopup::ShowAchievementNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_Career_AchievementPopup, MultiCarouselTime) == 0x0005F0, "Member 'UPyWidget_Career_AchievementPopup::MultiCarouselTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_Career_AchievementPopup, AkEvent_ShowAward) == 0x0005F8, "Member 'UPyWidget_Career_AchievementPopup::AkEvent_ShowAward' has a wrong offset!");
static_assert(offsetof(UPyWidget_Career_AchievementPopup, Img_Achievement_Icon) == 0x000600, "Member 'UPyWidget_Career_AchievementPopup::Img_Achievement_Icon' has a wrong offset!");
static_assert(offsetof(UPyWidget_Career_AchievementPopup, Text_Achievement_Name) == 0x000608, "Member 'UPyWidget_Career_AchievementPopup::Text_Achievement_Name' has a wrong offset!");

}

