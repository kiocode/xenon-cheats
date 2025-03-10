#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_MailPanel

#include "Basic.hpp"

#include "PyWidget_MailPanel_classes.hpp"
#include "PyWidget_MailPanel_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_MailPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_MailPanel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_MailPanel::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.OnBecomeTop
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_MailPanel::OnBecomeTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "OnBecomeTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_MailPanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "MarvelSetVisible");

	Params::PyWidget_MailPanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.OnListviewEntryGenerated
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                      EntryWidget                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_MailPanel::OnListviewEntryGenerated(class UUserWidget* EntryWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "OnListviewEntryGenerated");

	Params::PyWidget_MailPanel_OnListviewEntryGenerated Parms{};

	Parms.EntryWidget = EntryWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.scroll_left_navigation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           NavType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_MailPanel::Scroll_left_navigation(EUINavigation NavType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "scroll_left_navigation");

	Params::PyWidget_MailPanel_Scroll_left_navigation Parms{};

	Parms.NavType = NavType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_MailPanel.PyWidget_MailPanel.scroll_right_navigation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           NavType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_MailPanel::Scroll_right_navigation(EUINavigation NavType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_MailPanel", "scroll_right_navigation");

	Params::PyWidget_MailPanel_Scroll_right_navigation Parms{};

	Parms.NavType = NavType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

