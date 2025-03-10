#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySignalHandlerActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DeclarativeUnreal_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PySignalHandlerActor.PySignalHandlerActor
// 0x0230 (0x0870 - 0x0640)
class APySignalHandlerActor : public ASignalHandlerActor
{
public:
	struct FSignalResult                          RequestResult;                                     // 0x0640(0x0190)(BlueprintVisible, Net, NativeAccessSpecifierPublic)
	bool                                          BeCancelled;                                       // 0x07D0(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7D1[0x3];                                      // 0x07D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AbilityID;                                         // 0x07D4(0x0004)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFallOff;                                         // 0x07D8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7D9[0x7];                                      // 0x07D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDeclarationHolder                     ViewerSideWatcher;                                 // 0x07E0(0x0010)(NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UNiagaraSystem*> Tag2NiagaraSystem;                                 // 0x07F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                         CheckViewInterval;                                 // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_844[0x4];                                      // 0x0844(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              SceneScreenOffset;                                 // 0x0848(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ObjectScreenOffset;                                // 0x0858(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          CancelAudioEvent;                                  // 0x0868(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetRequestResult(const struct FSignalResult& Result);
	void SetAbilityID(int32 InAbilityId);
	void CancelSignal(bool Is_cancel);
	void SetBeCancelled(bool IsBeCancelled);
	void OnRep_BeCancelled();
	void StartHandlerSignal(const struct FSignalResult& Result);
	void EndHandlerSignal(const struct FSignalResult& Result);
	void OnSummonedEndAgentTask(class AActor* InActor);
	void OnComOwnerChanged(class AActor* InActor);
	void OnNewCharacterBeginPlay();
	void SetIsFallOff(bool IsFallOff_0);
	void OnRep_IsFallOff();
	bool CanHandlerSignal();
	void ReceiveDestroyed();
	void SetResponsableState(bool IsResponsable);
	void SetActive(bool bInActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySignalHandlerActor">();
	}
	static class APySignalHandlerActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APySignalHandlerActor>();
	}
};
static_assert(alignof(APySignalHandlerActor) == 0x000008, "Wrong alignment on APySignalHandlerActor");
static_assert(sizeof(APySignalHandlerActor) == 0x000870, "Wrong size on APySignalHandlerActor");
static_assert(offsetof(APySignalHandlerActor, RequestResult) == 0x000640, "Member 'APySignalHandlerActor::RequestResult' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, BeCancelled) == 0x0007D0, "Member 'APySignalHandlerActor::BeCancelled' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, AbilityID) == 0x0007D4, "Member 'APySignalHandlerActor::AbilityID' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, IsFallOff) == 0x0007D8, "Member 'APySignalHandlerActor::IsFallOff' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, ViewerSideWatcher) == 0x0007E0, "Member 'APySignalHandlerActor::ViewerSideWatcher' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, Tag2NiagaraSystem) == 0x0007F0, "Member 'APySignalHandlerActor::Tag2NiagaraSystem' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, CheckViewInterval) == 0x000840, "Member 'APySignalHandlerActor::CheckViewInterval' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, SceneScreenOffset) == 0x000848, "Member 'APySignalHandlerActor::SceneScreenOffset' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, ObjectScreenOffset) == 0x000858, "Member 'APySignalHandlerActor::ObjectScreenOffset' has a wrong offset!");
static_assert(offsetof(APySignalHandlerActor, CancelAudioEvent) == 0x000868, "Member 'APySignalHandlerActor::CancelAudioEvent' has a wrong offset!");

}

