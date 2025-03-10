#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DeployMenu_DeployButton

#include "Basic.hpp"

#include "WBP_DeployMenu_DeployButton_classes.hpp"
#include "WBP_DeployMenu_DeployButton_parameters.hpp"


namespace SDK
{

// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnClicked__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnClicked__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnClicked__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnPressed__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnPressed__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnPressed__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnReleased__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnReleased__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnReleased__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnHovered__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnHovered__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnHovered__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::OnUnhovered__DelegateSignature(bool bCloseBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "OnUnhovered__DelegateSignature");

	Params::WBP_DeployMenu_DeployButton_C_OnUnhovered__DelegateSignature Parms{};

	Parms.bCloseBtn = bCloseBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.ExecuteUbergraph_WBP_DeployMenu_DeployButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_DeployButton_C::ExecuteUbergraph_WBP_DeployMenu_DeployButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "ExecuteUbergraph_WBP_DeployMenu_DeployButton");

	Params::WBP_DeployMenu_DeployButton_C_ExecuteUbergraph_WBP_DeployMenu_DeployButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_DeployButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "Tick");

	Params::WBP_DeployMenu_DeployButton_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "PreConstruct");

	Params::WBP_DeployMenu_DeployButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.UpdateDeployBtnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPlayerAlive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDeploymentQueued                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSpawnPointSelected_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::UpdateDeployBtnState(bool bPlayerAlive, bool bDeploymentQueued, bool bSpawnPointSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "UpdateDeployBtnState");

	Params::WBP_DeployMenu_DeployButton_C_UpdateDeployBtnState Parms{};

	Parms.bPlayerAlive = bPlayerAlive;
	Parms.bDeploymentQueued = bDeploymentQueued;
	Parms.bSpawnPointSelected_0 = bSpawnPointSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDeploying_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSpawnPointSelected_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_DeployMenu_DeployButton_C::InternalUpdateBtnText(bool bDeploying_0, bool bSpawnPointSelected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "InternalUpdateBtnText");

	Params::WBP_DeployMenu_DeployButton_C_InternalUpdateBtnText Parms{};

	Parms.bDeploying_0 = bDeploying_0;
	Parms.bSpawnPointSelected_0 = bSpawnPointSelected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnStyle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_DeployMenu_DeployButton_C::InternalUpdateBtnStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "InternalUpdateBtnStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalGetSpawnTimeRemaining
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SpawnSeconds                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DeployMenu_DeployButton_C::InternalGetSpawnTimeRemaining(int32* SpawnSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DeployMenu_DeployButton_C", "InternalGetSpawnTimeRemaining");

	Params::WBP_DeployMenu_DeployButton_C_InternalGetSpawnTimeRemaining Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnSeconds != nullptr)
		*SpawnSeconds = Parms.SpawnSeconds;
}

}

