#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_SkillDetails

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_HeroSystem_SkillDetails.PyWidget_HeroSystem_SkillDetails
// 0x00C8 (0x06B8 - 0x05F0)
class UPyWidget_HeroSystem_SkillDetails final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarvelKeyUIAsset*                      KeyAsset;                                          // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   WeaponText;                                        // 0x05F8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   BondText;                                          // 0x0610(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   SkillText;                                         // 0x0628(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   PassiveText;                                       // 0x0640(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   ComboText;                                         // 0x0658(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         NetSpeedThreshold;                                 // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_674[0x4];                                      // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultDownloadTestUrl;                            // 0x0678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                VideoPauseStyle;                                   // 0x0688(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                VideoPlayStyle;                                    // 0x0698(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGuideTipsStyle>                VideoRefreshStyle;                                 // 0x06A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HeroSystem_SkillDetails">();
	}
	static class UPyWidget_HeroSystem_SkillDetails* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HeroSystem_SkillDetails>();
	}
};
static_assert(alignof(UPyWidget_HeroSystem_SkillDetails) == 0x000008, "Wrong alignment on UPyWidget_HeroSystem_SkillDetails");
static_assert(sizeof(UPyWidget_HeroSystem_SkillDetails) == 0x0006B8, "Wrong size on UPyWidget_HeroSystem_SkillDetails");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, KeyAsset) == 0x0005F0, "Member 'UPyWidget_HeroSystem_SkillDetails::KeyAsset' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, WeaponText) == 0x0005F8, "Member 'UPyWidget_HeroSystem_SkillDetails::WeaponText' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, BondText) == 0x000610, "Member 'UPyWidget_HeroSystem_SkillDetails::BondText' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, SkillText) == 0x000628, "Member 'UPyWidget_HeroSystem_SkillDetails::SkillText' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, PassiveText) == 0x000640, "Member 'UPyWidget_HeroSystem_SkillDetails::PassiveText' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, ComboText) == 0x000658, "Member 'UPyWidget_HeroSystem_SkillDetails::ComboText' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, NetSpeedThreshold) == 0x000670, "Member 'UPyWidget_HeroSystem_SkillDetails::NetSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, DefaultDownloadTestUrl) == 0x000678, "Member 'UPyWidget_HeroSystem_SkillDetails::DefaultDownloadTestUrl' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, VideoPauseStyle) == 0x000688, "Member 'UPyWidget_HeroSystem_SkillDetails::VideoPauseStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, VideoPlayStyle) == 0x000698, "Member 'UPyWidget_HeroSystem_SkillDetails::VideoPlayStyle' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_SkillDetails, VideoRefreshStyle) == 0x0006A8, "Member 'UPyWidget_HeroSystem_SkillDetails::VideoRefreshStyle' has a wrong offset!");

}

