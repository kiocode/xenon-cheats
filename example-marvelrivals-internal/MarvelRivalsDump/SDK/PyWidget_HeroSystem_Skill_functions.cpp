#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_Skill

#include "Basic.hpp"

#include "PyWidget_HeroSystem_Skill_classes.hpp"
#include "PyWidget_HeroSystem_Skill_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill.OnSwitchShape__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Shape_id                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_HeroSystem_Skill::OnSwitchShape__DelegateSignature(int32 Shape_id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill", "OnSwitchShape__DelegateSignature");

	Params::PyWidget_HeroSystem_Skill_OnSwitchShape__DelegateSignature Parms{};

	Parms.Shape_id = Shape_id;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Skill::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill.Destruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Skill::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill.MarvelSetVisible
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_HeroSystem_Skill::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill", "MarvelSetVisible");

	Params::PyWidget_HeroSystem_Skill_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill.scrollBox_skill_nav_rule
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// EUINavigation                           Nav_type                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UWidget* UPyWidget_HeroSystem_Skill::ScrollBox_skill_nav_rule(EUINavigation Nav_type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill", "scrollBox_skill_nav_rule");

	Params::PyWidget_HeroSystem_Skill_ScrollBox_skill_nav_rule Parms{};

	Parms.Nav_type = Nav_type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill_Base.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Skill_Base::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill_Base", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Hero_ShapeItem.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Hero_ShapeItem::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Hero_ShapeItem", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill_ListItem.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_Skill_ListItem::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill_ListItem", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_Skill_ListItem.PreConstruct
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_HeroSystem_Skill_ListItem::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_Skill_ListItem", "PreConstruct");

	Params::PyWidget_HeroSystem_Skill_ListItem_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_HeroSystem_Skill.PyWidget_HeroSystem_SkillBanner.OnInitialized
// (BlueprintCosmetic, Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyWidget_HeroSystem_SkillBanner::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_HeroSystem_SkillBanner", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

