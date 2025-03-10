#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rifle_L245

#include "Basic.hpp"

#include "GunBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Rifle_L245.Rifle_L245_C
// 0x0008 (0x0338 - 0x0330)
class ARifle_L245_C final : public AGunBase_C
{
public:
	class UStaticMeshComponent*                   Scope_front;                                       // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Rifle_L245_C">();
	}
	static class ARifle_L245_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARifle_L245_C>();
	}
};
static_assert(alignof(ARifle_L245_C) == 0x000008, "Wrong alignment on ARifle_L245_C");
static_assert(sizeof(ARifle_L245_C) == 0x000338, "Wrong size on ARifle_L245_C");
static_assert(offsetof(ARifle_L245_C, Scope_front) == 0x000330, "Member 'ARifle_L245_C::Scope_front' has a wrong offset!");

}

