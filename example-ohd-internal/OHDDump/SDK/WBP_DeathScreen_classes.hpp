#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeathScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DeathScreen.WBP_DeathScreen_C
// 0x0010 (0x0240 - 0x0230)
class UWBP_DeathScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             DeathKeyBindText;                                  // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_DeathScreen(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateDeathKeyText(struct FKey& Key);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DeathScreen_C">();
	}
	static class UWBP_DeathScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DeathScreen_C>();
	}
};
static_assert(alignof(UWBP_DeathScreen_C) == 0x000008, "Wrong alignment on UWBP_DeathScreen_C");
static_assert(sizeof(UWBP_DeathScreen_C) == 0x000240, "Wrong size on UWBP_DeathScreen_C");
static_assert(offsetof(UWBP_DeathScreen_C, UberGraphFrame) == 0x000230, "Member 'UWBP_DeathScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DeathScreen_C, DeathKeyBindText) == 0x000238, "Member 'UWBP_DeathScreen_C::DeathKeyBindText' has a wrong offset!");

}

