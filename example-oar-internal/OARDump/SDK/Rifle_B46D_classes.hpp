#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rifle_B46D

#include "Basic.hpp"

#include "GunBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Rifle_B46D.Rifle_B46D_C
// 0x0010 (0x0340 - 0x0330)
class ARifle_B46D_C final : public AGunBase_C
{
public:
	class UBoxComponent*                          CollisionBox1;                                     // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Scope_front;                                       // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Rifle_B46D_C">();
	}
	static class ARifle_B46D_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARifle_B46D_C>();
	}
};
static_assert(alignof(ARifle_B46D_C) == 0x000008, "Wrong alignment on ARifle_B46D_C");
static_assert(sizeof(ARifle_B46D_C) == 0x000340, "Wrong size on ARifle_B46D_C");
static_assert(offsetof(ARifle_B46D_C, CollisionBox1) == 0x000330, "Member 'ARifle_B46D_C::CollisionBox1' has a wrong offset!");
static_assert(offsetof(ARifle_B46D_C, Scope_front) == 0x000338, "Member 'ARifle_B46D_C::Scope_front' has a wrong offset!");

}

