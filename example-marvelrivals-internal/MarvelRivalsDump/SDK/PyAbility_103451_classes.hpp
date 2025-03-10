#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103451

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// PythonClass PyAbility_103451.PyCue_Buff_10345104
// 0x0048 (0x1080 - 0x1038)
class APyCue_Buff_10345104 final : public AMarvelCueNotify_Buff
{
public:
	class UMarvelWidgetComponent*                 EnermySign;                                        // 0x1038(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           BlockTag;                                          // 0x1040(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           AllyColor;                                         // 0x104C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           EnermyColor;                                       // 0x105C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_106C[0x4];                                     // 0x106C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   AbilityTags;                                       // 0x1070(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyCue_Buff_10345104">();
	}
	static class APyCue_Buff_10345104* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyCue_Buff_10345104>();
	}
};
static_assert(alignof(APyCue_Buff_10345104) == 0x000008, "Wrong alignment on APyCue_Buff_10345104");
static_assert(sizeof(APyCue_Buff_10345104) == 0x001080, "Wrong size on APyCue_Buff_10345104");
static_assert(offsetof(APyCue_Buff_10345104, EnermySign) == 0x001038, "Member 'APyCue_Buff_10345104::EnermySign' has a wrong offset!");
static_assert(offsetof(APyCue_Buff_10345104, BlockTag) == 0x001040, "Member 'APyCue_Buff_10345104::BlockTag' has a wrong offset!");
static_assert(offsetof(APyCue_Buff_10345104, AllyColor) == 0x00104C, "Member 'APyCue_Buff_10345104::AllyColor' has a wrong offset!");
static_assert(offsetof(APyCue_Buff_10345104, EnermyColor) == 0x00105C, "Member 'APyCue_Buff_10345104::EnermyColor' has a wrong offset!");
static_assert(offsetof(APyCue_Buff_10345104, AbilityTags) == 0x001070, "Member 'APyCue_Buff_10345104::AbilityTags' has a wrong offset!");

// PythonClass PyAbility_103451.PyUIController_103451
// 0x0000 (0x0C60 - 0x0C60)
class UPyUIController_103451 : public UUIC_Ability
{
public:
	void OnDestruct();
	void SetAbility(int32 InAbilityId, class UGameplayAbility* InAbility);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIController_103451">();
	}
	static class UPyUIController_103451* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIController_103451>();
	}
};
static_assert(alignof(UPyUIController_103451) == 0x000008, "Wrong alignment on UPyUIController_103451");
static_assert(sizeof(UPyUIController_103451) == 0x000C60, "Wrong size on UPyUIController_103451");

}

