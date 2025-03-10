#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DropDownList_ListView

#include "Basic.hpp"

#include "PyWidget_DropDownList_ListView_classes.hpp"
#include "PyWidget_DropDownList_ListView_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_DropDownList_ListView.PyWidget_DropDownList_ListView.OnItemChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   ItemId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_DropDownList_ListView::OnItemChanged__DelegateSignature(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList_ListView", "OnItemChanged__DelegateSignature");

	Params::PyWidget_DropDownList_ListView_OnItemChanged__DelegateSignature Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_DropDownList_ListView.PyWidget_DropDownList_ListView.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_DropDownList_ListView::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList_ListView", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList_ListView.PyWidget_DropDownList_ListView.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_DropDownList_ListView::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList_ListView", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_DropDownList_ListView.PyWidget_DropDownList_ListView.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_DropDownList_ListView::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_DropDownList_ListView", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

