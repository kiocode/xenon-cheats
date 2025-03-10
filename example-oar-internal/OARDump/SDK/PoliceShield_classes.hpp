#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PoliceShield

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PoliceShield.PoliceShield_C
// 0x0010 (0x0230 - 0x0220)
class APoliceShield_C final : public AActor
{
public:
	class UChildActorComponent*                   Glass;                                             // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ShieldMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PoliceShield_C">();
	}
	static class APoliceShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APoliceShield_C>();
	}
};
static_assert(alignof(APoliceShield_C) == 0x000008, "Wrong alignment on APoliceShield_C");
static_assert(sizeof(APoliceShield_C) == 0x000230, "Wrong size on APoliceShield_C");
static_assert(offsetof(APoliceShield_C, Glass) == 0x000220, "Member 'APoliceShield_C::Glass' has a wrong offset!");
static_assert(offsetof(APoliceShield_C, ShieldMesh) == 0x000228, "Member 'APoliceShield_C::ShieldMesh' has a wrong offset!");

}

