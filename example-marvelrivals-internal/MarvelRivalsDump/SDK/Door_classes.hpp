#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Door

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Marvel_structs.hpp"
#include "PyDoor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Door.Door_C
// 0x0038 (0x0558 - 0x0520)
class ADoor_C final : public APyDoor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         DoorAnim_DoorProgress_408CB49447CDE91854DDCE91B960BED9; // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DoorAnim__Direction_408CB49447CDE91854DDCE91B960BED9; // 0x052C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52D[0x3];                                      // 0x052D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DoorAnim;                                          // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDoorAnimCurve>                 DoorAnimData;                                      // 0x0538(0x0010)(Edit, BlueprintVisible, Net)
	double                                        AnimSpeed;                                         // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Delay;                                             // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void __0_S_Mn();
	void OpenDoor();
	void ExecuteUbergraph_Door(int32 EntryPoint);
	void EUpdatePos();
	void DoorAnim__UpdateFunc();
	void DoorAnim__FinishedFunc();
	void CloseDoor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Door_C">();
	}
	static class ADoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADoor_C>();
	}
};
static_assert(alignof(ADoor_C) == 0x000008, "Wrong alignment on ADoor_C");
static_assert(sizeof(ADoor_C) == 0x000558, "Wrong size on ADoor_C");
static_assert(offsetof(ADoor_C, UberGraphFrame) == 0x000520, "Member 'ADoor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADoor_C, DoorAnim_DoorProgress_408CB49447CDE91854DDCE91B960BED9) == 0x000528, "Member 'ADoor_C::DoorAnim_DoorProgress_408CB49447CDE91854DDCE91B960BED9' has a wrong offset!");
static_assert(offsetof(ADoor_C, DoorAnim__Direction_408CB49447CDE91854DDCE91B960BED9) == 0x00052C, "Member 'ADoor_C::DoorAnim__Direction_408CB49447CDE91854DDCE91B960BED9' has a wrong offset!");
static_assert(offsetof(ADoor_C, DoorAnim) == 0x000530, "Member 'ADoor_C::DoorAnim' has a wrong offset!");
static_assert(offsetof(ADoor_C, DoorAnimData) == 0x000538, "Member 'ADoor_C::DoorAnimData' has a wrong offset!");
static_assert(offsetof(ADoor_C, AnimSpeed) == 0x000548, "Member 'ADoor_C::AnimSpeed' has a wrong offset!");
static_assert(offsetof(ADoor_C, Delay) == 0x000550, "Member 'ADoor_C::Delay' has a wrong offset!");

}

