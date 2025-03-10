#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealthPackSpawner

#include "Basic.hpp"

#include "HealthPackSpawner_classes.hpp"
#include "HealthPackSpawner_parameters.hpp"


namespace SDK
{

// Function HealthPackSpawner.HealthPackSpawner_C.ReverseDes_Dis
// (BlueprintCallable, BlueprintEvent)

void AHealthPackSpawner_C::ReverseDes_Dis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HealthPackSpawner_C", "ReverseDes_Dis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HealthPackSpawner.HealthPackSpawner_C.ReverseDes_Appear
// (BlueprintCallable, BlueprintEvent)

void AHealthPackSpawner_C::ReverseDes_Appear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HealthPackSpawner_C", "ReverseDes_Appear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HealthPackSpawner.HealthPackSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void AHealthPackSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HealthPackSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HealthPackSpawner.HealthPackSpawner_C.ExecuteUbergraph_HealthPackSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHealthPackSpawner_C::ExecuteUbergraph_HealthPackSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HealthPackSpawner_C", "ExecuteUbergraph_HealthPackSpawner");

	Params::HealthPackSpawner_C_ExecuteUbergraph_HealthPackSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

