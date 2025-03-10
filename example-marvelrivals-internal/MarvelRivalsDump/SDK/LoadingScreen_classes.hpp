#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreen

#include "Basic.hpp"

#include "DeveloperSettings_classes.hpp"
#include "LoadingScreen_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class LoadingScreen.LoadingScreenSettings
// 0x01D8 (0x0220 - 0x0048)
class ULoadingScreenSettings final : public UDeveloperSettings
{
public:
	struct FLoadingScreenDescription              StartupScreen;                                     // 0x0048(0x0078)(Edit, Config, NativeAccessSpecifierPublic)
	struct FLoadingScreenDescription              DefaultScreen;                                     // 0x00C0(0x0078)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         TipFont;                                           // 0x0138(0x0068)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         LoadingFont;                                       // 0x01A0(0x0068)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TipWrapAt;                                         // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           Tips;                                              // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenSettings">();
	}
	static class ULoadingScreenSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenSettings>();
	}
};
static_assert(alignof(ULoadingScreenSettings) == 0x000008, "Wrong alignment on ULoadingScreenSettings");
static_assert(sizeof(ULoadingScreenSettings) == 0x000220, "Wrong size on ULoadingScreenSettings");
static_assert(offsetof(ULoadingScreenSettings, StartupScreen) == 0x000048, "Member 'ULoadingScreenSettings::StartupScreen' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, DefaultScreen) == 0x0000C0, "Member 'ULoadingScreenSettings::DefaultScreen' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, TipFont) == 0x000138, "Member 'ULoadingScreenSettings::TipFont' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, LoadingFont) == 0x0001A0, "Member 'ULoadingScreenSettings::LoadingFont' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, TipWrapAt) == 0x000208, "Member 'ULoadingScreenSettings::TipWrapAt' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, Tips) == 0x000210, "Member 'ULoadingScreenSettings::Tips' has a wrong offset!");

// Class LoadingScreen.MarvelLoadingScreenWidget
// 0x0000 (0x03B8 - 0x03B8)
class UMarvelLoadingScreenWidget final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MarvelLoadingScreenWidget">();
	}
	static class UMarvelLoadingScreenWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarvelLoadingScreenWidget>();
	}
};
static_assert(alignof(UMarvelLoadingScreenWidget) == 0x000008, "Wrong alignment on UMarvelLoadingScreenWidget");
static_assert(sizeof(UMarvelLoadingScreenWidget) == 0x0003B8, "Wrong size on UMarvelLoadingScreenWidget");

}

