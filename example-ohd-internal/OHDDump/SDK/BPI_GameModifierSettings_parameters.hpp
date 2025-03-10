#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameModifierSettings

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.SetupModifier
// 0x0008 (0x0008 - 0x0000)
struct BPI_GameModifierSettings_C_SetupModifier final
{
public:
	class UWBP_OptionMenu_CreateGame_C*           ParentMenu;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameModifierSettings_C_SetupModifier) == 0x000008, "Wrong alignment on BPI_GameModifierSettings_C_SetupModifier");
static_assert(sizeof(BPI_GameModifierSettings_C_SetupModifier) == 0x000008, "Wrong size on BPI_GameModifierSettings_C_SetupModifier");
static_assert(offsetof(BPI_GameModifierSettings_C_SetupModifier, ParentMenu) == 0x000000, "Member 'BPI_GameModifierSettings_C_SetupModifier::ParentMenu' has a wrong offset!");

// Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.IsEnabled
// 0x0001 (0x0001 - 0x0000)
struct BPI_GameModifierSettings_C_IsEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_GameModifierSettings_C_IsEnabled) == 0x000001, "Wrong alignment on BPI_GameModifierSettings_C_IsEnabled");
static_assert(sizeof(BPI_GameModifierSettings_C_IsEnabled) == 0x000001, "Wrong size on BPI_GameModifierSettings_C_IsEnabled");
static_assert(offsetof(BPI_GameModifierSettings_C_IsEnabled, bEnabled) == 0x000000, "Member 'BPI_GameModifierSettings_C_IsEnabled::bEnabled' has a wrong offset!");

// Function BPI_GameModifierSettings.BPI_GameModifierSettings_C.GetTravelURLOptions
// 0x0010 (0x0010 - 0x0000)
struct BPI_GameModifierSettings_C_GetTravelURLOptions final
{
public:
	class FString                                 Options;                                           // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameModifierSettings_C_GetTravelURLOptions) == 0x000008, "Wrong alignment on BPI_GameModifierSettings_C_GetTravelURLOptions");
static_assert(sizeof(BPI_GameModifierSettings_C_GetTravelURLOptions) == 0x000010, "Wrong size on BPI_GameModifierSettings_C_GetTravelURLOptions");
static_assert(offsetof(BPI_GameModifierSettings_C_GetTravelURLOptions, Options) == 0x000000, "Member 'BPI_GameModifierSettings_C_GetTravelURLOptions::Options' has a wrong offset!");

}

