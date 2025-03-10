#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Train_Setting_OptionEntry

#include "Basic.hpp"

#include "PyWidget_Train_Setting_OptionEntry_classes.hpp"
#include "PyWidget_Train_Setting_OptionEntry_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_Train_Setting_OptionEntry.PyWidget_Train_Setting_OptionEntry.OnMouseLeave
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_Train_Setting_OptionEntry::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Train_Setting_OptionEntry", "OnMouseLeave");

	Params::PyWidget_Train_Setting_OptionEntry_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Train_Setting_OptionEntry.PyWidget_Train_Setting_OptionEntry.OnMouseEnter
// (BlueprintCosmetic, Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, Parm, OutParm, ReferenceParm)

void UPyWidget_Train_Setting_OptionEntry::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Train_Setting_OptionEntry", "OnMouseEnter");

	Params::PyWidget_Train_Setting_OptionEntry_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_Train_Setting_OptionEntry.PyWidget_Train_Setting_OptionEntry.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_Train_Setting_OptionEntry::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_Train_Setting_OptionEntry", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

