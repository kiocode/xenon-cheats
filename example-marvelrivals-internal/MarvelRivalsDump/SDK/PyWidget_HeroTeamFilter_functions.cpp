#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroTeamFilter

#include "Basic.hpp"

#include "PyWidget_HeroTeamFilter_classes.hpp"
#include "PyWidget_HeroTeamFilter_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_HeroTeamFilter.PyWidget_HeroTeamFilter.OnHeroTeamFilter__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// TArray<int32>                           HeroID_List                                            (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_HeroTeamFilter::OnHeroTeamFilter__DelegateSignature(const TArray<int32>& HeroID_List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroTeamFilter", "OnHeroTeamFilter__DelegateSignature");

	Params::PyWidget_HeroTeamFilter_OnHeroTeamFilter__DelegateSignature Parms{};

	Parms.HeroID_List = std::move(HeroID_List);

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_HeroTeamFilter.PyWidget_HeroTeamFilter.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroTeamFilter::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroTeamFilter", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroTeamFilter.PyWidget_HeroTeamFilter.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroTeamFilter::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroTeamFilter", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroTeamFilter.PyWidget_HeroTeamFilter.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroTeamFilter::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroTeamFilter", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroTeamFilter.PyWidget_HeroTeamFilter.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_HeroTeamFilter::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroTeamFilter", "PreConstruct");

	Params::PyWidget_HeroTeamFilter_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

