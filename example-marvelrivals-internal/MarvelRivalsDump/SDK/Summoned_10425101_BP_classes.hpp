#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_10425101_BP

#include "Basic.hpp"

#include "Hero_1042_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Summoned_10425101_BP.Summoned_10425101_BP_C
// 0x0010 (0x1880 - 0x1870)
class ASummoned_10425101_BP_C final : public ASummoned_10425101
{
public:
	class USummonedMovementComponent*             SummonedMovement;                                  // 0x1870(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Summoned_10425101_BP_C">();
	}
	static class ASummoned_10425101_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASummoned_10425101_BP_C>();
	}
};
//static_assert(alignof(ASummoned_10425101_BP_C) == 0x000010, "Wrong alignment on ASummoned_10425101_BP_C");
//static_assert(sizeof(ASummoned_10425101_BP_C) == 0x001880, "Wrong size on ASummoned_10425101_BP_C");
//static_assert(offsetof(ASummoned_10425101_BP_C, SummonedMovement) == 0x001870, "Member 'ASummoned_10425101_BP_C::SummonedMovement' has a wrong offset!");

}

