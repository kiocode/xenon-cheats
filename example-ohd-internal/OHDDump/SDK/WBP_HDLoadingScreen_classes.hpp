#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDLoadingScreen

#include "Basic.hpp"

#include "WBP_HDLoadingScreenBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HDLoadingScreen.WBP_HDLoadingScreen_C
// 0x0000 (0x0348 - 0x0348)
class UWBP_HDLoadingScreen_C final : public UWBP_HDLoadingScreenBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HDLoadingScreen_C">();
	}
	static class UWBP_HDLoadingScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HDLoadingScreen_C>();
	}
};
static_assert(alignof(UWBP_HDLoadingScreen_C) == 0x000008, "Wrong alignment on UWBP_HDLoadingScreen_C");
static_assert(sizeof(UWBP_HDLoadingScreen_C) == 0x000348, "Wrong size on UWBP_HDLoadingScreen_C");

}

