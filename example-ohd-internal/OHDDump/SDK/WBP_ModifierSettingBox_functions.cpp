#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModifierSettingBox

#include "Basic.hpp"

#include "WBP_ModifierSettingBox_classes.hpp"
#include "WBP_ModifierSettingBox_parameters.hpp"


namespace SDK
{

// Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.ExecuteUbergraph_WBP_ModifierSettingBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSettingBox_C::ExecuteUbergraph_WBP_ModifierSettingBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSettingBox_C", "ExecuteUbergraph_WBP_ModifierSettingBox");

	Params::WBP_ModifierSettingBox_C_ExecuteUbergraph_WBP_ModifierSettingBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ModifierSettingBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSettingBox_C", "PreConstruct");

	Params::WBP_ModifierSettingBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.SetSettingText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InSettingText                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModifierSettingBox_C::SetSettingText(const class FText& InSettingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSettingBox_C", "SetSettingText");

	Params::WBP_ModifierSettingBox_C_SetSettingText Parms{};

	Parms.InSettingText = std::move(InSettingText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.GetSettingText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             SettingText_0                                          (Parm, OutParm)

void UWBP_ModifierSettingBox_C::GetSettingText(class FText* SettingText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSettingBox_C", "GetSettingText");

	Params::WBP_ModifierSettingBox_C_GetSettingText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SettingText_0 != nullptr)
		*SettingText_0 = std::move(Parms.SettingText_0);
}


// Function WBP_ModifierSettingBox.WBP_ModifierSettingBox_C.SetSettingTextStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFModifierTextStyle              InSettingTextStyle                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UWBP_ModifierSettingBox_C::SetSettingTextStyle(struct FFModifierTextStyle& InSettingTextStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSettingBox_C", "SetSettingTextStyle");

	Params::WBP_ModifierSettingBox_C_SetSettingTextStyle Parms{};

	Parms.InSettingTextStyle = std::move(InSettingTextStyle);

	UObject::ProcessEvent(Func, &Parms);

	InSettingTextStyle = std::move(Parms.InSettingTextStyle);
}

}

