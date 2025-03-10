#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget3D_BuffMarker

#include "Basic.hpp"

#include "PyWidget3D_BuffMarker_classes.hpp"
#include "PyWidget3D_BuffMarker_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget3D_BuffMarker.PyWidget3D_BuffMarker.MarvelVisibilityChanged
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget3D_BuffMarker::MarvelVisibilityChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget3D_BuffMarker", "MarvelVisibilityChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget3D_BuffMarker.PyWidget3D_BuffMarker.ShouldBeVisible
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyWidget3D_BuffMarker::ShouldBeVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget3D_BuffMarker", "ShouldBeVisible");

	Params::PyWidget3D_BuffMarker_ShouldBeVisible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget3D_BuffMarker.PyWidget3D_BuffMarker.OwnerCueWhileActive
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget3D_BuffMarker::OwnerCueWhileActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget3D_BuffMarker", "OwnerCueWhileActive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget3D_BuffMarker.PyWidget3D_BuffMarker.OwnerCueActiveChanged
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget3D_BuffMarker::OwnerCueActiveChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget3D_BuffMarker", "OwnerCueActiveChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget3D_BuffMarker.PyWidget3D_BuffMarker.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget3D_BuffMarker::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget3D_BuffMarker", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget3D_BuffMarker.PyWidget3D_BuffMarker.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget3D_BuffMarker::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget3D_BuffMarker", "PreConstruct");

	Params::PyWidget3D_BuffMarker_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget3D_BuffMarker.PyWidget3D_BuffMarker.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget3D_BuffMarker::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget3D_BuffMarker", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

