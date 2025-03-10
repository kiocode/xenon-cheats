#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pistol_ZM48

#include "Basic.hpp"

#include "GunBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Pistol_ZM48.Pistol_ZM48_C
// 0x0008 (0x0338 - 0x0330)
class APistol_ZM48_C final : public AGunBase_C
{
public:
	class UBoxComponent*                          CollisionBox1;                                     // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pistol_ZM48_C">();
	}
	static class APistol_ZM48_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APistol_ZM48_C>();
	}
};
static_assert(alignof(APistol_ZM48_C) == 0x000008, "Wrong alignment on APistol_ZM48_C");
static_assert(sizeof(APistol_ZM48_C) == 0x000338, "Wrong size on APistol_ZM48_C");
static_assert(offsetof(APistol_ZM48_C, CollisionBox1) == 0x000330, "Member 'APistol_ZM48_C::CollisionBox1' has a wrong offset!");

}

