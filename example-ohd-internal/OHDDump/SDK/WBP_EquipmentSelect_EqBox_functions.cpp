#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EquipmentSelect_EqBox

#include "Basic.hpp"

#include "WBP_EquipmentSelect_EqBox_classes.hpp"
#include "WBP_EquipmentSelect_EqBox_parameters.hpp"


namespace SDK
{

// Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.ExecuteUbergraph_WBP_EquipmentSelect_EqBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EquipmentSelect_EqBox_C::ExecuteUbergraph_WBP_EquipmentSelect_EqBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelect_EqBox_C", "ExecuteUbergraph_WBP_EquipmentSelect_EqBox");

	Params::WBP_EquipmentSelect_EqBox_C_ExecuteUbergraph_WBP_EquipmentSelect_EqBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EquipmentSelect_EqBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelect_EqBox_C", "Tick");

	Params::WBP_EquipmentSelect_EqBox_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EquipmentSelect_EqBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelect_EqBox_C", "PreConstruct");

	Params::WBP_EquipmentSelect_EqBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHighlighted_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EquipmentSelect_EqBox_C::SetHighlight(bool bHighlighted_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelect_EqBox_C", "SetHighlight");

	Params::WBP_EquipmentSelect_EqBox_C_SetHighlight Parms{};

	Parms.bHighlighted_0 = bHighlighted_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.IsHighlighted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bHighlight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EquipmentSelect_EqBox_C::IsHighlighted(bool* bHighlight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelect_EqBox_C", "IsHighlighted");

	Params::WBP_EquipmentSelect_EqBox_C_IsHighlighted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bHighlight != nullptr)
		*bHighlight = Parms.bHighlight;
}


// Function WBP_EquipmentSelect_EqBox.WBP_EquipmentSelect_EqBox_C.SetEnabled
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EquipmentSelect_EqBox_C::SetEnabled(bool bEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EquipmentSelect_EqBox_C", "SetEnabled");

	Params::WBP_EquipmentSelect_EqBox_C_SetEnabled Parms{};

	Parms.bEnabled_0 = bEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

