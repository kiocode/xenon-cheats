#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SelectHero_TabBtn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Marvel_structs.hpp"
#include "PyWidget_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SelectHero_TabBtn.PyWidget_SelectHero_TabBtn
// 0x0060 (0x07B0 - 0x0750)
class UPyWidget_SelectHero_TabBtn : public UPyWidget_Button
{
public:
	class UTexture2D*                             AllDutyIcon;                                       // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             TankIcon;                                          // 0x0758(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             DamageIcon;                                        // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             SupportIcon;                                       // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHeroRole                                     RoleId;                                            // 0x0770(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_771[0x3];                                      // 0x0771(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IconAngle;                                         // 0x0774(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsSelectd;                                         // 0x0778(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsPressed;                                         // 0x0779(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_77A[0x2];                                      // 0x077A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           NormalColor;                                       // 0x077C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           HoverColor;                                        // 0x078C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SelectingColor;                                    // 0x079C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnBtnPressed();
	void OnBtnUnhovered();
	void OnBtnHovered();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void OnBtnOnReleased();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SelectHero_TabBtn">();
	}
	static class UPyWidget_SelectHero_TabBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SelectHero_TabBtn>();
	}
};
static_assert(alignof(UPyWidget_SelectHero_TabBtn) == 0x000008, "Wrong alignment on UPyWidget_SelectHero_TabBtn");
static_assert(sizeof(UPyWidget_SelectHero_TabBtn) == 0x0007B0, "Wrong size on UPyWidget_SelectHero_TabBtn");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, AllDutyIcon) == 0x000750, "Member 'UPyWidget_SelectHero_TabBtn::AllDutyIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, TankIcon) == 0x000758, "Member 'UPyWidget_SelectHero_TabBtn::TankIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, DamageIcon) == 0x000760, "Member 'UPyWidget_SelectHero_TabBtn::DamageIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, SupportIcon) == 0x000768, "Member 'UPyWidget_SelectHero_TabBtn::SupportIcon' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, RoleId) == 0x000770, "Member 'UPyWidget_SelectHero_TabBtn::RoleId' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, IconAngle) == 0x000774, "Member 'UPyWidget_SelectHero_TabBtn::IconAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, IsSelectd) == 0x000778, "Member 'UPyWidget_SelectHero_TabBtn::IsSelectd' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, IsPressed) == 0x000779, "Member 'UPyWidget_SelectHero_TabBtn::IsPressed' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, NormalColor) == 0x00077C, "Member 'UPyWidget_SelectHero_TabBtn::NormalColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, HoverColor) == 0x00078C, "Member 'UPyWidget_SelectHero_TabBtn::HoverColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_TabBtn, SelectingColor) == 0x00079C, "Member 'UPyWidget_SelectHero_TabBtn::SelectingColor' has a wrong offset!");

}

