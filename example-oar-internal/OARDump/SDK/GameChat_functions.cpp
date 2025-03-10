#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameChat

#include "Basic.hpp"

#include "GameChat_classes.hpp"
#include "GameChat_parameters.hpp"


namespace SDK
{

// Function GameChat.GameChat_C.ExecuteUbergraph_GameChat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameChat_C::ExecuteUbergraph_GameChat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameChat_C", "ExecuteUbergraph_GameChat");

	Params::GameChat_C_ExecuteUbergraph_GameChat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameChat.GameChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameChat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameChat_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameChat.GameChat_C.BndEvt__GameChat_EditableTextBox_269_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameChat_C::BndEvt__GameChat_EditableTextBox_269_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameChat_C", "BndEvt__GameChat_EditableTextBox_269_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::GameChat_C_BndEvt__GameChat_EditableTextBox_269_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameChat.GameChat_C.NewChat
// (Public, BlueprintCallable, BlueprintEvent)

void UGameChat_C::NewChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameChat_C", "NewChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameChat.GameChat_C.UserOpenChat
// (BlueprintCallable, BlueprintEvent)

void UGameChat_C::UserOpenChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameChat_C", "UserOpenChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GameChat.GameChat_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UGameChat_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameChat_C", "GetVisibility_0");

	Params::GameChat_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

