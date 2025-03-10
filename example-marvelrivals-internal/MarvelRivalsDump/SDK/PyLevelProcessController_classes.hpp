#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelProcessController

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MarvelLevel_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyLevelProcessController.PyLevelProcessController
// 0x0080 (0x0510 - 0x0490)
class APyLevelProcessController : public AMarvelLevelProcessController
{
public:
	bool                                          bIsGroupActorsMoving;                              // 0x0490(0x0001)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrentPartName;                                   // 0x0498(0x0010)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraInterp*                          EnterCameraInterp;                                 // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                         EnterEffect;                                       // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          EnterAudio;                                        // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                SoftReferencedSelectHeroLevels;                    // 0x04C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PrepareStartDispatcher;                            // 0x04D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PrepareEndDispatcher;                              // 0x04E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             FightStartDispatcher;                              // 0x04F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             FightEndDispatcher;                                // 0x0500(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	static class AMarvelLevelProcessController* GetProcessController(class AActor* WCO);

	void PrepareStartDispatcher__DelegateSignature();
	void PrepareEndDispatcher__DelegateSignature();
	void FightStartDispatcher__DelegateSignature();
	void FightEndDispatcher__DelegateSignature();
	void ReceiveInit();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnMapLoaded();
	void OnBeginPlay();
	void OnMatchStateChanged(EMatchState MatchState);
	class FString GetCurrentLevelPartName();
	void OnModeTimeOut();
	void EndCurrentLevel(const TArray<EBattleSide>& Win_side_list);
	void SkyCrackWaveTest();
	void LokiPhantomAppear();
	void LokiPhantomDisappear();
	void SetGroupActorsMoveState(bool IsMoving);
	void OnRep_IsGroupActorsMoving();
	void OnRep_CurrentPartName();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelProcessController">();
	}
	static class APyLevelProcessController* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyLevelProcessController>();
	}
};
static_assert(alignof(APyLevelProcessController) == 0x000008, "Wrong alignment on APyLevelProcessController");
static_assert(sizeof(APyLevelProcessController) == 0x000510, "Wrong size on APyLevelProcessController");
static_assert(offsetof(APyLevelProcessController, bIsGroupActorsMoving) == 0x000490, "Member 'APyLevelProcessController::bIsGroupActorsMoving' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, CurrentPartName) == 0x000498, "Member 'APyLevelProcessController::CurrentPartName' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, EnterCameraInterp) == 0x0004A8, "Member 'APyLevelProcessController::EnterCameraInterp' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, EnterEffect) == 0x0004B0, "Member 'APyLevelProcessController::EnterEffect' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, EnterAudio) == 0x0004B8, "Member 'APyLevelProcessController::EnterAudio' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, SoftReferencedSelectHeroLevels) == 0x0004C0, "Member 'APyLevelProcessController::SoftReferencedSelectHeroLevels' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, PrepareStartDispatcher) == 0x0004D0, "Member 'APyLevelProcessController::PrepareStartDispatcher' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, PrepareEndDispatcher) == 0x0004E0, "Member 'APyLevelProcessController::PrepareEndDispatcher' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, FightStartDispatcher) == 0x0004F0, "Member 'APyLevelProcessController::FightStartDispatcher' has a wrong offset!");
static_assert(offsetof(APyLevelProcessController, FightEndDispatcher) == 0x000500, "Member 'APyLevelProcessController::FightEndDispatcher' has a wrong offset!");

}

