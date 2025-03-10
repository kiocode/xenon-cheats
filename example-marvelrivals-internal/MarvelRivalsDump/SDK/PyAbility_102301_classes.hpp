#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_102301

#include "Basic.hpp"

#include "Hero_1023_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_102301.PyConfig_102301
// 0x0008 (0x0128 - 0x0120)
class UPyConfig_102301 final : public UConfig_102301
{
public:
	bool                                          bTurnInput;                                        // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSpeedOnWall;                                    // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyConfig_102301">();
	}
	static class UPyConfig_102301* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyConfig_102301>();
	}
};
static_assert(alignof(UPyConfig_102301) == 0x000008, "Wrong alignment on UPyConfig_102301");
static_assert(sizeof(UPyConfig_102301) == 0x000128, "Wrong size on UPyConfig_102301");
static_assert(offsetof(UPyConfig_102301, bTurnInput) == 0x000120, "Member 'UPyConfig_102301::bTurnInput' has a wrong offset!");
static_assert(offsetof(UPyConfig_102301, MaxSpeedOnWall) == 0x000124, "Member 'UPyConfig_102301::MaxSpeedOnWall' has a wrong offset!");

// PythonClass PyAbility_102301.PyAbility_102301
// 0x0000 (0x2608 - 0x2608)
class UPyAbility_102301 : public UAbility_102301
{
public:
	void BeginPlay();
	void OnControlModeChanged();
	void ExtractInfoFromEventData(float EventMagnitude);
	void ModifyEventData(struct FGameplayEventData& Data);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool Cancel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_102301">();
	}
	static class UPyAbility_102301* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_102301>();
	}
};
static_assert(alignof(UPyAbility_102301) == 0x000008, "Wrong alignment on UPyAbility_102301");
static_assert(sizeof(UPyAbility_102301) == 0x002608, "Wrong size on UPyAbility_102301");

}

