#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_DeadlyAim_Tier1

#include "Basic.hpp"

#include "Skill_DeadlyAim_Tier1_classes.hpp"
#include "Skill_DeadlyAim_Tier1_parameters.hpp"


namespace SDK
{

// Function Skill_DeadlyAim_Tier1.Skill_DeadlyAim_Tier1_C.ExecuteUbergraph_Skill_DeadlyAim_Tier1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkill_DeadlyAim_Tier1_C::ExecuteUbergraph_Skill_DeadlyAim_Tier1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_DeadlyAim_Tier1_C", "ExecuteUbergraph_Skill_DeadlyAim_Tier1");

	Params::Skill_DeadlyAim_Tier1_C_ExecuteUbergraph_Skill_DeadlyAim_Tier1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Skill_DeadlyAim_Tier1.Skill_DeadlyAim_Tier1_C.SetupSkill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void USkill_DeadlyAim_Tier1_C::SetupSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Skill_DeadlyAim_Tier1_C", "SetupSkill");

	UObject::ProcessEvent(Func, nullptr);
}

}

