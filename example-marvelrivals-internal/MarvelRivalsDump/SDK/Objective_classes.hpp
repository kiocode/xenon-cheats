#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Objective

#include "Basic.hpp"

#include "PyObjective_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Objective.Objective_C
// 0x0010 (0x0840 - 0x0830)
class AObjective_C final : public APyObjective
{
public:
	class ULevelScopeCheckComponentBP_C*          LevelScopeCheckComponentBP;                        // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMarvelSplineComponent*                 MarvelSpline;                                      // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Objective_C">();
	}
	static class AObjective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AObjective_C>();
	}
};
static_assert(alignof(AObjective_C) == 0x000008, "Wrong alignment on AObjective_C");
static_assert(sizeof(AObjective_C) == 0x000840, "Wrong size on AObjective_C");
static_assert(offsetof(AObjective_C, LevelScopeCheckComponentBP) == 0x000830, "Member 'AObjective_C::LevelScopeCheckComponentBP' has a wrong offset!");
static_assert(offsetof(AObjective_C, MarvelSpline) == 0x000838, "Member 'AObjective_C::MarvelSpline' has a wrong offset!");

}

