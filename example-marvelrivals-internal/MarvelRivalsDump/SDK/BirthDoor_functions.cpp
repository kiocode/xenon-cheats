#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BirthDoor

#include "Basic.hpp"

#include "BirthDoor_classes.hpp"
#include "BirthDoor_parameters.hpp"


namespace SDK
{

// Function BirthDoor.BirthDoor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABirthDoor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BirthDoor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BirthDoor.BirthDoor_C.S Payload Reach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                                  EventArgs                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABirthDoor_C::S_Payload_Reach(const class FString& EventName, const double EventArgs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BirthDoor_C", "S Payload Reach");

	Params::BirthDoor_C_S_Payload_Reach Parms{};

	Parms.EventName = std::move(EventName);
	Parms.EventArgs = EventArgs;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BirthDoor.BirthDoor_C.OnPlayerExitBaseDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABirthDoor_C*                     BirthDoor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMarvelBaseCharacter*             InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABirthDoor_C::OnPlayerExitBaseDispatcher__DelegateSignature(class ABirthDoor_C* BirthDoor, class AMarvelBaseCharacter* InPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BirthDoor_C", "OnPlayerExitBaseDispatcher__DelegateSignature");

	Params::BirthDoor_C_OnPlayerExitBaseDispatcher__DelegateSignature Parms{};

	Parms.BirthDoor = BirthDoor;
	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BirthDoor.BirthDoor_C.OnPlayerEnterBaseDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABirthDoor_C*                     BirthDoor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMarvelBaseCharacter*             InPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABirthDoor_C::OnPlayerEnterBaseDispatcher__DelegateSignature(class ABirthDoor_C* BirthDoor, class AMarvelBaseCharacter* InPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BirthDoor_C", "OnPlayerEnterBaseDispatcher__DelegateSignature");

	Params::BirthDoor_C_OnPlayerEnterBaseDispatcher__DelegateSignature Parms{};

	Parms.BirthDoor = BirthDoor;
	Parms.InPlayer = InPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BirthDoor.BirthDoor_C.ExecuteUbergraph_BirthDoor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABirthDoor_C::ExecuteUbergraph_BirthDoor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BirthDoor_C", "ExecuteUbergraph_BirthDoor");

	Params::BirthDoor_C_ExecuteUbergraph_BirthDoor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

