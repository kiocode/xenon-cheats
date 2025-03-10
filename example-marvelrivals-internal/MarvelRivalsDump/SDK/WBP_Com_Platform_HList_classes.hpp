#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Com_Platform_HList

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "PyWidget_Common_Platform_HList_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Com_Platform_HList.WBP_Com_Platform_HList_C
// 0x0090 (0x06F0 - 0x0660)
class UWBP_Com_Platform_HList_C final : public UPyWidget_Common_Platform_HList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelImage*                           Img_Platform_Console;                              // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Platform_Pc;                                   // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Platform_Ps;                                   // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Platform_Xbox;                                 // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_PlatformBg_Console;                            // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_PlatformBg_PC;                                 // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_PlatformBg_Ps;                                 // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_PlatformBg_Xbox;                               // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Console;                                   // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Pc;                                        // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Ps;                                        // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Xbox;                                      // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Platform_Console;                          // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Platform_Pc;                               // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Platform_Ps;                               // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Platform_Xbox;                             // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_Platform;                                  // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Com_Platform_HList(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Com_Platform_HList_C">();
	}
	static class UWBP_Com_Platform_HList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Com_Platform_HList_C>();
	}
};
//static_assert(alignof(UWBP_Com_Platform_HList_C) == 0x000008, "Wrong alignment on UWBP_Com_Platform_HList_C");
//static_assert(sizeof(UWBP_Com_Platform_HList_C) == 0x0006F0, "Wrong size on UWBP_Com_Platform_HList_C");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, UberGraphFrame) == 0x000660, "Member 'UWBP_Com_Platform_HList_C::UberGraphFrame' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_Platform_Console) == 0x000668, "Member 'UWBP_Com_Platform_HList_C::Img_Platform_Console' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_Platform_Pc) == 0x000670, "Member 'UWBP_Com_Platform_HList_C::Img_Platform_Pc' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_Platform_Ps) == 0x000678, "Member 'UWBP_Com_Platform_HList_C::Img_Platform_Ps' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_Platform_Xbox) == 0x000680, "Member 'UWBP_Com_Platform_HList_C::Img_Platform_Xbox' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_PlatformBg_Console) == 0x000688, "Member 'UWBP_Com_Platform_HList_C::Img_PlatformBg_Console' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_PlatformBg_PC) == 0x000690, "Member 'UWBP_Com_Platform_HList_C::Img_PlatformBg_PC' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_PlatformBg_Ps) == 0x000698, "Member 'UWBP_Com_Platform_HList_C::Img_PlatformBg_Ps' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Img_PlatformBg_Xbox) == 0x0006A0, "Member 'UWBP_Com_Platform_HList_C::Img_PlatformBg_Xbox' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Overlay_Console) == 0x0006A8, "Member 'UWBP_Com_Platform_HList_C::Overlay_Console' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Overlay_Pc) == 0x0006B0, "Member 'UWBP_Com_Platform_HList_C::Overlay_Pc' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Overlay_Ps) == 0x0006B8, "Member 'UWBP_Com_Platform_HList_C::Overlay_Ps' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, Overlay_Xbox) == 0x0006C0, "Member 'UWBP_Com_Platform_HList_C::Overlay_Xbox' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, SizeBox_Platform_Console) == 0x0006C8, "Member 'UWBP_Com_Platform_HList_C::SizeBox_Platform_Console' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, SizeBox_Platform_Pc) == 0x0006D0, "Member 'UWBP_Com_Platform_HList_C::SizeBox_Platform_Pc' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, SizeBox_Platform_Ps) == 0x0006D8, "Member 'UWBP_Com_Platform_HList_C::SizeBox_Platform_Ps' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, SizeBox_Platform_Xbox) == 0x0006E0, "Member 'UWBP_Com_Platform_HList_C::SizeBox_Platform_Xbox' has a wrong offset!");
//static_assert(offsetof(UWBP_Com_Platform_HList_C, WrapBox_Platform) == 0x0006E8, "Member 'UWBP_Com_Platform_HList_C::WrapBox_Platform' has a wrong offset!");

}

