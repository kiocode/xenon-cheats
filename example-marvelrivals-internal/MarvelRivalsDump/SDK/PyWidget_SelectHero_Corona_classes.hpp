#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SelectHero_Corona

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_SelectHero_Corona.PyWidget_SelectHero_Corona
// 0x0078 (0x0668 - 0x05F0)
class UPyWidget_SelectHero_Corona : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectBanPickHero;                               // 0x05F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	float                                         WheelTopExtraAngle;                                // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WheelBottomExtraAngle;                             // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinVisibleAngle;                                   // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxVisibleAngle;                                   // 0x060C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinInteractAngle;                                  // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxInteractAngle;                                  // 0x0614(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         QuadrantXOffset;                                   // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CoronaLocateOffsetAngle;                           // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimReboundRotateUpdateTime;                       // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimRerollRotateAngleStep;                         // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimRerollRotateUpdateTime;                        // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReRollTriggerStep;                                 // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimFadeInAngleOffset;                             // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimFadeUpdateTime;                                // 0x0634(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimFirstFadeInSpeed;                              // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimFadeInFirstDelayTime;                          // 0x063C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimFadeInDelayTime;                               // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimExpandSpeed;                                   // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            MouseDragCurve;                                    // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            ReboundCurve;                                      // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            ReRollCurve;                                       // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                            FadeInRotateCurve;                                 // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Destruct();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void OnSelectBanPickHero__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SelectHero_Corona">();
	}
	static class UPyWidget_SelectHero_Corona* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SelectHero_Corona>();
	}
};
static_assert(alignof(UPyWidget_SelectHero_Corona) == 0x000008, "Wrong alignment on UPyWidget_SelectHero_Corona");
static_assert(sizeof(UPyWidget_SelectHero_Corona) == 0x000668, "Wrong size on UPyWidget_SelectHero_Corona");
static_assert(offsetof(UPyWidget_SelectHero_Corona, OnSelectBanPickHero) == 0x0005F0, "Member 'UPyWidget_SelectHero_Corona::OnSelectBanPickHero' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, WheelTopExtraAngle) == 0x000600, "Member 'UPyWidget_SelectHero_Corona::WheelTopExtraAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, WheelBottomExtraAngle) == 0x000604, "Member 'UPyWidget_SelectHero_Corona::WheelBottomExtraAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, MinVisibleAngle) == 0x000608, "Member 'UPyWidget_SelectHero_Corona::MinVisibleAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, MaxVisibleAngle) == 0x00060C, "Member 'UPyWidget_SelectHero_Corona::MaxVisibleAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, MinInteractAngle) == 0x000610, "Member 'UPyWidget_SelectHero_Corona::MinInteractAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, MaxInteractAngle) == 0x000614, "Member 'UPyWidget_SelectHero_Corona::MaxInteractAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, QuadrantXOffset) == 0x000618, "Member 'UPyWidget_SelectHero_Corona::QuadrantXOffset' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, CoronaLocateOffsetAngle) == 0x00061C, "Member 'UPyWidget_SelectHero_Corona::CoronaLocateOffsetAngle' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimReboundRotateUpdateTime) == 0x000620, "Member 'UPyWidget_SelectHero_Corona::AnimReboundRotateUpdateTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimRerollRotateAngleStep) == 0x000624, "Member 'UPyWidget_SelectHero_Corona::AnimRerollRotateAngleStep' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimRerollRotateUpdateTime) == 0x000628, "Member 'UPyWidget_SelectHero_Corona::AnimRerollRotateUpdateTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, ReRollTriggerStep) == 0x00062C, "Member 'UPyWidget_SelectHero_Corona::ReRollTriggerStep' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimFadeInAngleOffset) == 0x000630, "Member 'UPyWidget_SelectHero_Corona::AnimFadeInAngleOffset' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimFadeUpdateTime) == 0x000634, "Member 'UPyWidget_SelectHero_Corona::AnimFadeUpdateTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimFirstFadeInSpeed) == 0x000638, "Member 'UPyWidget_SelectHero_Corona::AnimFirstFadeInSpeed' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimFadeInFirstDelayTime) == 0x00063C, "Member 'UPyWidget_SelectHero_Corona::AnimFadeInFirstDelayTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimFadeInDelayTime) == 0x000640, "Member 'UPyWidget_SelectHero_Corona::AnimFadeInDelayTime' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, AnimExpandSpeed) == 0x000644, "Member 'UPyWidget_SelectHero_Corona::AnimExpandSpeed' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, MouseDragCurve) == 0x000648, "Member 'UPyWidget_SelectHero_Corona::MouseDragCurve' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, ReboundCurve) == 0x000650, "Member 'UPyWidget_SelectHero_Corona::ReboundCurve' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, ReRollCurve) == 0x000658, "Member 'UPyWidget_SelectHero_Corona::ReRollCurve' has a wrong offset!");
static_assert(offsetof(UPyWidget_SelectHero_Corona, FadeInRotateCurve) == 0x000660, "Member 'UPyWidget_SelectHero_Corona::FadeInRotateCurve' has a wrong offset!");

}

