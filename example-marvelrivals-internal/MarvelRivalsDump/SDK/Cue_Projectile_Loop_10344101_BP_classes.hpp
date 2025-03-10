#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cue_Projectile_Loop_10344101_BP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Cue_Projectile_Loop_10344101_BP.Cue_Projectile_Loop_10344101_BP_C
// 0x0008 (0x0DB8 - 0x0DB0)
class ACue_Projectile_Loop_10344101_BP_C final : public AMarvelCueNotify_Projectile
{
public:
	class UNiagaraComponent*                      LoopNS;                                            // 0x0DB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cue_Projectile_Loop_10344101_BP_C">();
	}
	static class ACue_Projectile_Loop_10344101_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACue_Projectile_Loop_10344101_BP_C>();
	}
};
//static_assert(alignof(ACue_Projectile_Loop_10344101_BP_C) == 0x000008, "Wrong alignment on ACue_Projectile_Loop_10344101_BP_C");
//static_assert(sizeof(ACue_Projectile_Loop_10344101_BP_C) == 0x000DB8, "Wrong size on ACue_Projectile_Loop_10344101_BP_C");
//static_assert(offsetof(ACue_Projectile_Loop_10344101_BP_C, LoopNS) == 0x000DB0, "Member 'ACue_Projectile_Loop_10344101_BP_C::LoopNS' has a wrong offset!");

}

