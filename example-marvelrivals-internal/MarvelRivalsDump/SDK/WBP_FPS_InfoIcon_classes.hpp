#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FPS_InfoIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FPS_InfoIcon.WBP_FPS_InfoIcon_C
// 0x0078 (0x0620 - 0x05A8)
class UWBP_FPS_InfoIcon_C final : public UMarvelUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_NetStatus;                                    // 0x05B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                       Img_GLow;                                          // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Icon;                                          // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Icon;                                              // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Icon_Yellow;                                       // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsRed;                                             // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Icon_Red;                                          // 0x05E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5F4[0x4];                                      // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconGlow;                                          // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           IconGlow_Yellow;                                   // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           IconGlow_Red;                                      // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_FPS_InfoIcon(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FPS_InfoIcon_C">();
	}
	static class UWBP_FPS_InfoIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FPS_InfoIcon_C>();
	}
};
////static_assert(alignof(UWBP_FPS_InfoIcon_C) == 0x000008, "Wrong alignment on UWBP_FPS_InfoIcon_C");
////static_assert(sizeof(UWBP_FPS_InfoIcon_C) == 0x000620, "Wrong size on UWBP_FPS_InfoIcon_C");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, UberGraphFrame) == 0x0005A8, "Member 'UWBP_FPS_InfoIcon_C::UberGraphFrame' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, Anim_NetStatus) == 0x0005B0, "Member 'UWBP_FPS_InfoIcon_C::Anim_NetStatus' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, Img_GLow) == 0x0005B8, "Member 'UWBP_FPS_InfoIcon_C::Img_GLow' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, Img_Icon) == 0x0005C0, "Member 'UWBP_FPS_InfoIcon_C::Img_Icon' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, Icon) == 0x0005C8, "Member 'UWBP_FPS_InfoIcon_C::Icon' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, Icon_Yellow) == 0x0005D0, "Member 'UWBP_FPS_InfoIcon_C::Icon_Yellow' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, IsRed) == 0x0005E0, "Member 'UWBP_FPS_InfoIcon_C::IsRed' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, Icon_Red) == 0x0005E4, "Member 'UWBP_FPS_InfoIcon_C::Icon_Red' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, IconGlow) == 0x0005F8, "Member 'UWBP_FPS_InfoIcon_C::IconGlow' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, IconGlow_Yellow) == 0x000600, "Member 'UWBP_FPS_InfoIcon_C::IconGlow_Yellow' has a wrong offset!");
////static_assert(offsetof(UWBP_FPS_InfoIcon_C, IconGlow_Red) == 0x000610, "Member 'UWBP_FPS_InfoIcon_C::IconGlow_Red' has a wrong offset!");

}

