#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelSequenceActor

#include "Basic.hpp"

#include "PyLevelSequenceActor_classes.hpp"
#include "PyLevelSequenceActor_parameters.hpp"


namespace SDK
{

// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.OnRep_PlayRate
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::OnRep_PlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "OnRep_PlayRate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.S_payload_reach
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     Event_name                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// float                                   Event_args                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyLevelSequenceActor::S_payload_reach(const struct FGameplayTag& Event_name, float Event_args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "S_payload_reach");

	Params::PyLevelSequenceActor_S_payload_reach Parms{};

	Parms.Event_name = std::move(Event_name);
	Parms.Event_args = Event_args;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.OnRep_CurrentPlayDirection
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::OnRep_CurrentPlayDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "OnRep_CurrentPlayDirection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.OnRep_CurrentTime
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::OnRep_CurrentTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "OnRep_CurrentTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.PostRewindForReplay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyLevelSequenceActor::PostRewindForReplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "PostRewindForReplay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.ReceiveTick
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyLevelSequenceActor::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "ReceiveTick");

	Params::PyLevelSequenceActor_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.ResetToStart
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::ResetToStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "ResetToStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.PlayReverseFromCurrentTime
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::PlayReverseFromCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "PlayReverseFromCurrentTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.PlayReverseFromTime
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyLevelSequenceActor::PlayReverseFromTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "PlayReverseFromTime");

	Params::PyLevelSequenceActor_PlayReverseFromTime Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.PlayReverseFromEnd
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::PlayReverseFromEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "PlayReverseFromEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.PlayFromCurrentTime
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::PlayFromCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "PlayFromCurrentTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.PlayFromTime
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyLevelSequenceActor::PlayFromTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "PlayFromTime");

	Params::PyLevelSequenceActor_PlayFromTime Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.PlayFromStart
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "PlayFromStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.GetPlayRate
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::GetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "GetPlayRate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.SetPlayRate
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   Rate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Double_end                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyLevelSequenceActor::SetPlayRate(float Rate, bool Double_end)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "SetPlayRate");

	Params::PyLevelSequenceActor_SetPlayRate Parms{};

	Parms.Rate = Rate;
	Parms.Double_end = Double_end;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.OnFinished
// (Native, Public, BlueprintCallable)

void APyLevelSequenceActor::OnFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "OnFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.ReceiveEndPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyLevelSequenceActor::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "ReceiveEndPlay");

	Params::PyLevelSequenceActor_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.ReceiveBeginPlay
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyLevelSequenceActor::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyLevelSequenceActor.PyLevelSequenceActor.ReceiveInit
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)

void APyLevelSequenceActor::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "ReceiveInit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction PyLevelSequenceActor.PyLevelSequenceActor.OnPlayFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void APyLevelSequenceActor::OnPlayFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyLevelSequenceActor", "OnPlayFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

