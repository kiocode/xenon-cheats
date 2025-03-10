#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelAISystem

#include "Basic.hpp"

#include "PyMarvelAISystem_classes.hpp"
#include "PyMarvelAISystem_parameters.hpp"


namespace SDK
{

// PythonFunction PyMarvelAISystem.PyMarvelAISystem.ReceiveStartPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyMarvelAISystem::ReceiveStartPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelAISystem", "ReceiveStartPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelAISystem.PyMarvelAISystem.ReceiveAIRoundStart
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void UPyMarvelAISystem::ReceiveAIRoundStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelAISystem", "ReceiveAIRoundStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelAISystem.PyMarvelAISystem.AddAICustom
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAISpawnParam                    Spawn_param                                            (Parm)
// class AMarvelAIController*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AMarvelAIController* UPyMarvelAISystem::AddAICustom(const struct FAISpawnParam& Spawn_param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelAISystem", "AddAICustom");

	Params::PyMarvelAISystem_AddAICustom Parms{};

	Parms.Spawn_param = std::move(Spawn_param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyMarvelAISystem.PyMarvelAISystem.RemoveAIByUID
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyMarvelAISystem::RemoveAIByUID(int32 UID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelAISystem", "RemoveAIByUID");

	Params::PyMarvelAISystem_RemoveAIByUID Parms{};

	Parms.UID = UID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyMarvelAISystem.PyMarvelAISystem.AddAI
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                                   UID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Hero_id                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBattleSide                             battle_side                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Difficulty_mode                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Difficulty_level                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMarvelAIControllerBase*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AMarvelAIControllerBase* UPyMarvelAISystem::AddAI(int32 UID, int32 Hero_id, EBattleSide battle_side, const class FString& Name_0, int32 Difficulty_mode, int32 Difficulty_level) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelAISystem", "AddAI");

	Params::PyMarvelAISystem_AddAI Parms{};

	Parms.UID = UID;
	Parms.Hero_id = Hero_id;
	Parms.battle_side = battle_side;
	Parms.Name_0 = std::move(Name_0);
	Parms.Difficulty_mode = Difficulty_mode;
	Parms.Difficulty_level = Difficulty_level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

