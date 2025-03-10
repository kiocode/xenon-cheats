#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_WakandaC02Building003A_Part_BP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_WakandaC02Building003A_Part_BP.GC_WakandaC02Building003A_Part_BP_C
// 0x0010 (0x0E60 - 0x0E50)
class AGC_WakandaC02Building003A_Part_BP_C final : public AChaosDestructionActor
{
public:
	class UChildActorComponent*                   MainMSField;                                       // 0x0E50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_WakandaC02Building003A_Part_BP_C">();
	}
	static class AGC_WakandaC02Building003A_Part_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_WakandaC02Building003A_Part_BP_C>();
	}
};
static_assert(alignof(AGC_WakandaC02Building003A_Part_BP_C) == 0x000010, "Wrong alignment on AGC_WakandaC02Building003A_Part_BP_C");
static_assert(sizeof(AGC_WakandaC02Building003A_Part_BP_C) == 0x000E60, "Wrong size on AGC_WakandaC02Building003A_Part_BP_C");
static_assert(offsetof(AGC_WakandaC02Building003A_Part_BP_C, MainMSField) == 0x000E50, "Member 'AGC_WakandaC02Building003A_Part_BP_C::MainMSField' has a wrong offset!");

}

