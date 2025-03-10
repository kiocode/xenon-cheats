#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XNMinus1070

#include "Basic.hpp"

#include "XNMinus1070_classes.hpp"
#include "XNMinus1070_parameters.hpp"


namespace SDK
{

// Function XN-1070.XN-1070_C.ExecuteUbergraph_XN-1070
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AXNMinus1070_C::ExecuteUbergraph_XNMinus1070(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XN-1070_C", "ExecuteUbergraph_XN-1070");

	Params::XNMinus1070_C_ExecuteUbergraph_XNMinus1070 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XN-1070.XN-1070_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AXNMinus1070_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XN-1070_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

