#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GarageDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GarageDoor.GarageDoor_C
// 0x0030 (0x0250 - 0x0220)
class AGarageDoor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNavModifierComponent*                  NavModifier;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        OpenLocation;                                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Open_;                                             // 0x0248(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Opening_;                                          // 0x0249(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GarageDoor(int32 EntryPoint);
	void ForceOpen();
	void MoveDoor();
	void PlaySound();
	void Activate();
	void Deactivate();
	void Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GarageDoor_C">();
	}
	static class AGarageDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGarageDoor_C>();
	}
};
static_assert(alignof(AGarageDoor_C) == 0x000008, "Wrong alignment on AGarageDoor_C");
static_assert(sizeof(AGarageDoor_C) == 0x000250, "Wrong size on AGarageDoor_C");
static_assert(offsetof(AGarageDoor_C, UberGraphFrame) == 0x000220, "Member 'AGarageDoor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGarageDoor_C, NavModifier) == 0x000228, "Member 'AGarageDoor_C::NavModifier' has a wrong offset!");
static_assert(offsetof(AGarageDoor_C, OpenLocation) == 0x000230, "Member 'AGarageDoor_C::OpenLocation' has a wrong offset!");
static_assert(offsetof(AGarageDoor_C, StaticMesh) == 0x000238, "Member 'AGarageDoor_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AGarageDoor_C, DefaultSceneRoot) == 0x000240, "Member 'AGarageDoor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGarageDoor_C, Open_) == 0x000248, "Member 'AGarageDoor_C::Open_' has a wrong offset!");
static_assert(offsetof(AGarageDoor_C, Opening_) == 0x000249, "Member 'AGarageDoor_C::Opening_' has a wrong offset!");

}

