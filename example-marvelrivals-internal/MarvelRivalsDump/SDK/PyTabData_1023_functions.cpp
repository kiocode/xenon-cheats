#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyTabData_1023

#include "Basic.hpp"

#include "PyTabData_1023_classes.hpp"


namespace SDK
{

// PythonFunction PyTabData_1023.PyTabData_1023.K2_Initialize
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyTabData_1023::K2_Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1023", "K2_Initialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyTabData_1023.PyTabData_1023.OnResurrectSuccess
// (Native, Public, BlueprintCallable)

void UPyTabData_1023::OnResurrectSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1023", "OnResurrectSuccess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyTabData_1023.PyTabData_1023.K2_Shutdown
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyTabData_1023::K2_Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyTabData_1023", "K2_Shutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

