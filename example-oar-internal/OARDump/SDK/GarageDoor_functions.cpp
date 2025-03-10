#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GarageDoor

#include "Basic.hpp"

#include "GarageDoor_classes.hpp"
#include "GarageDoor_parameters.hpp"


namespace SDK
{

// Function GarageDoor.GarageDoor_C.ExecuteUbergraph_GarageDoor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGarageDoor_C::ExecuteUbergraph_GarageDoor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GarageDoor_C", "ExecuteUbergraph_GarageDoor");

	Params::GarageDoor_C_ExecuteUbergraph_GarageDoor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GarageDoor.GarageDoor_C.ForceOpen
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGarageDoor_C::ForceOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GarageDoor_C", "ForceOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GarageDoor.GarageDoor_C.MoveDoor
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGarageDoor_C::MoveDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GarageDoor_C", "MoveDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GarageDoor.GarageDoor_C.PlaySound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGarageDoor_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GarageDoor_C", "PlaySound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GarageDoor.GarageDoor_C.Activate
// (Public, BlueprintCallable, BlueprintEvent)

void AGarageDoor_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GarageDoor_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GarageDoor.GarageDoor_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void AGarageDoor_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GarageDoor_C", "Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GarageDoor.GarageDoor_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void AGarageDoor_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GarageDoor_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}

}

