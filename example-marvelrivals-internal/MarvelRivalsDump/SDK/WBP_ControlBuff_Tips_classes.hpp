#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ControlBuff_Tips

#include "Basic.hpp"

#include "PyUIController_ControlBuffText_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ControlBuff_Tips.WBP_ControlBuff_Tips_C
// 0x0020 (0x0610 - 0x05F0)
class UWBP_ControlBuff_Tips_C final : public UPyWidget_ControlBuffTips
{
public:
	class UImage*                                 Image_Lighting_Vx;                                 // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Buff_Tips;                                    // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Buff_Tips_vx1;                                // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Buff_Tips_vx2;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ControlBuff_Tips_C">();
	}
	static class UWBP_ControlBuff_Tips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ControlBuff_Tips_C>();
	}
};
//static_assert(alignof(UWBP_ControlBuff_Tips_C) == 0x000008, "Wrong alignment on UWBP_ControlBuff_Tips_C");
//static_assert(sizeof(UWBP_ControlBuff_Tips_C) == 0x000610, "Wrong size on UWBP_ControlBuff_Tips_C");
//static_assert(offsetof(UWBP_ControlBuff_Tips_C, Image_Lighting_Vx) == 0x0005F0, "Member 'UWBP_ControlBuff_Tips_C::Image_Lighting_Vx' has a wrong offset!");
//static_assert(offsetof(UWBP_ControlBuff_Tips_C, Text_Buff_Tips) == 0x0005F8, "Member 'UWBP_ControlBuff_Tips_C::Text_Buff_Tips' has a wrong offset!");
//static_assert(offsetof(UWBP_ControlBuff_Tips_C, Text_Buff_Tips_vx1) == 0x000600, "Member 'UWBP_ControlBuff_Tips_C::Text_Buff_Tips_vx1' has a wrong offset!");
//static_assert(offsetof(UWBP_ControlBuff_Tips_C, Text_Buff_Tips_vx2) == 0x000608, "Member 'UWBP_ControlBuff_Tips_C::Text_Buff_Tips_vx2' has a wrong offset!");

}

