#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_RoomPanelV3

#include "Basic.hpp"

#include "PyWidget_RoomPanelV3_classes.hpp"
#include "PyWidget_RoomPanelV3_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomPanel_V4::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.node_btn_down_navigation_rule_custom
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           NavType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_RoomPanel_V4::Node_btn_down_navigation_rule_custom(EUINavigation NavType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "node_btn_down_navigation_rule_custom");

	Params::PyWidget_RoomPanel_V4_Node_btn_down_navigation_rule_custom Parms{};

	Parms.NavType = NavType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.spectator_scroll_up_navigation_rule_custom
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           NavType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_RoomPanel_V4::Spectator_scroll_up_navigation_rule_custom(EUINavigation NavType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "spectator_scroll_up_navigation_rule_custom");

	Params::PyWidget_RoomPanel_V4_Spectator_scroll_up_navigation_rule_custom Parms{};

	Parms.NavType = NavType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomPanel_V4::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "PreConstruct");

	Params::PyWidget_RoomPanel_V4_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.OnBecomeTop
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomPanel_V4::OnBecomeTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "OnBecomeTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.ChildPanelSetIsOwner
// (Native, Public, BlueprintCallable)

void UPyWidget_RoomPanel_V4::ChildPanelSetIsOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "ChildPanelSetIsOwner");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetTeamName
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                             Team_1_Name_0                                          (Parm)
// class FText                             Team_2_Name_0                                          (Parm)

void UPyWidget_RoomPanel_V4::SetTeamName(const class FText& Team_1_Name_0, const class FText& Team_2_Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetTeamName");

	Params::PyWidget_RoomPanel_V4_SetTeamName Parms{};

	Parms.Team_1_Name_0 = std::move(Team_1_Name_0);
	Parms.Team_2_Name_0 = std::move(Team_2_Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetIsObserver
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsObserver                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetIsObserver(bool IsObserver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetIsObserver");

	Params::PyWidget_RoomPanel_V4_SetIsObserver Parms{};

	Parms.IsObserver = IsObserver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetIsOwner
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetIsOwner(bool IsOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetIsOwner");

	Params::PyWidget_RoomPanel_V4_SetIsOwner Parms{};

	Parms.IsOwner = IsOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetMemberOwner
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetMemberOwner(bool IsOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetMemberOwner");

	Params::PyWidget_RoomPanel_V4_SetMemberOwner Parms{};

	Parms.IsOwner = IsOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetStartType
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetStartType(bool IsOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetStartType");

	Params::PyWidget_RoomPanel_V4_SetStartType Parms{};

	Parms.IsOwner = IsOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetHotKeyAIVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetHotKeyAIVisible(bool IsOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetHotKeyAIVisible");

	Params::PyWidget_RoomPanel_V4_SetHotKeyAIVisible Parms{};

	Parms.IsOwner = IsOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetAdjustTeamVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetAdjustTeamVisible(bool IsOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetAdjustTeamVisible");

	Params::PyWidget_RoomPanel_V4_SetAdjustTeamVisible Parms{};

	Parms.IsOwner = IsOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetAdjustTeamEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetAdjustTeamEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetAdjustTeamEnabled");

	Params::PyWidget_RoomPanel_V4_SetAdjustTeamEnabled Parms{};

	Parms.IsEnabled = IsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetRoomInfo
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    IsOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomPanel_V4::SetRoomInfo(bool IsOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetRoomInfo");

	Params::PyWidget_RoomPanel_V4_SetRoomInfo Parms{};

	Parms.IsOwner = IsOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.HiddenRightBtn
// (Native, Public, BlueprintCallable)

void UPyWidget_RoomPanel_V4::HiddenRightBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "HiddenRightBtn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.SetListPosition
// (Native, Public, BlueprintCallable)

void UPyWidget_RoomPanel_V4::SetListPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "SetListPosition");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomPanel_V4.OnRemovedFromFocusPath
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (Parm, NoDestructor)

void UPyWidget_RoomPanel_V4::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomPanel_V4", "OnRemovedFromFocusPath");

	Params::PyWidget_RoomPanel_V4_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomTipsPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomTipsPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomTipsPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomTipsPanel.Construct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_RoomTipsPanel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomTipsPanel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomTipsPanel.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomTipsPanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomTipsPanel", "MarvelSetVisible");

	Params::PyWidget_RoomTipsPanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_RoomPanelV3.PyWidget_RoomTipsPanel.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyWidget_RoomTipsPanel::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_RoomTipsPanel", "OnAnimationFinished");

	Params::PyWidget_RoomTipsPanel_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

