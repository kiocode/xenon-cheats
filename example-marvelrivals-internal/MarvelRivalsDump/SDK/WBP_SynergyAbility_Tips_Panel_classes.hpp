#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SynergyAbility_Tips_Panel

#include "Basic.hpp"

#include "PyWidget_SynergyAbilityTips_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SynergyAbility_Tips_Panel.WBP_SynergyAbility_Tips_Panel_C
// 0x0008 (0x05C8 - 0x05C0)
class UWBP_SynergyAbility_Tips_Panel_C final : public UPyWidget_SynergyAbilityTipsPanel
{
public:
	class UCanvasPanel*                           Canvas_Panel;                                      // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SynergyAbility_Tips_Panel_C">();
	}
	static class UWBP_SynergyAbility_Tips_Panel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SynergyAbility_Tips_Panel_C>();
	}
};
////static_assert(alignof(UWBP_SynergyAbility_Tips_Panel_C) == 0x000008, "Wrong alignment on UWBP_SynergyAbility_Tips_Panel_C");
////static_assert(sizeof(UWBP_SynergyAbility_Tips_Panel_C) == 0x0005C8, "Wrong size on UWBP_SynergyAbility_Tips_Panel_C");
////static_assert(offsetof(UWBP_SynergyAbility_Tips_Panel_C, Canvas_Panel) == 0x0005C0, "Member 'UWBP_SynergyAbility_Tips_Panel_C::Canvas_Panel' has a wrong offset!");

}

