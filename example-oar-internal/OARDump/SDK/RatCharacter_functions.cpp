#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RatCharacter

#include "Basic.hpp"

#include "RatCharacter_classes.hpp"
#include "RatCharacter_parameters.hpp"


namespace SDK
{

// Function RatCharacter.RatCharacter_C.OnFail_0484E22F4AB33247A63833A3CC3FE8A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARatCharacter_C::OnFail_0484E22F4AB33247A63833A3CC3FE8A3(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RatCharacter_C", "OnFail_0484E22F4AB33247A63833A3CC3FE8A3");

	Params::RatCharacter_C_OnFail_0484E22F4AB33247A63833A3CC3FE8A3 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RatCharacter.RatCharacter_C.OnSuccess_0484E22F4AB33247A63833A3CC3FE8A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARatCharacter_C::OnSuccess_0484E22F4AB33247A63833A3CC3FE8A3(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RatCharacter_C", "OnSuccess_0484E22F4AB33247A63833A3CC3FE8A3");

	Params::RatCharacter_C_OnSuccess_0484E22F4AB33247A63833A3CC3FE8A3 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RatCharacter.RatCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARatCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RatCharacter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RatCharacter.RatCharacter_C.RatMove
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ARatCharacter_C::RatMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RatCharacter_C", "RatMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RatCharacter.RatCharacter_C.RatDie
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ARatCharacter_C::RatDie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RatCharacter_C", "RatDie");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RatCharacter.RatCharacter_C.BndEvt__RatCharacter_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Bone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARatCharacter_C::BndEvt__RatCharacter_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature(int32 Amount, class FName Bone, const struct FVector& HitLocation, const struct FVector& StartLocation, class AActor* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RatCharacter_C", "BndEvt__RatCharacter_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature");

	Params::RatCharacter_C_BndEvt__RatCharacter_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature Parms{};

	Parms.Amount = Amount;
	Parms.Bone = Bone;
	Parms.HitLocation = std::move(HitLocation);
	Parms.StartLocation = std::move(StartLocation);
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RatCharacter.RatCharacter_C.ExecuteUbergraph_RatCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARatCharacter_C::ExecuteUbergraph_RatCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RatCharacter_C", "ExecuteUbergraph_RatCharacter");

	Params::RatCharacter_C_ExecuteUbergraph_RatCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

