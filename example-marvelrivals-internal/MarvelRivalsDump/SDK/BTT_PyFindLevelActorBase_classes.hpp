#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_PyFindLevelActorBase

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "BTT_PyFindLevelActorBase_structs.hpp"
#include "PyBTNodeBase_classes.hpp"


namespace SDK
{

// PythonClass BTT_PyFindLevelActorBase.BTT_PyFindLevelActorBase
// 0x0098 (0x0158 - 0x00C0)
class UBTT_PyFindLevelActorBase : public UBTTask_PyBase
{
public:
	struct FBlackboardKeySelector                 OutFoundActor;                                     // 0x00C0(0x0030)(Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 OutFoundActorLocation;                             // 0x00F0(0x0030)(Edit, NativeAccessSpecifierPublic)
	EFilterRule                                   FilterRule;                                        // 0x0120(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OverrideFilterStartPoint;                          // 0x0121(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBlackboardKeySelector                 InFilterStartPoint;                                // 0x0128(0x0030)(Edit, NativeAccessSpecifierPublic)

public:
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTT_PyFindLevelActorBase">();
	}
	static class UBTT_PyFindLevelActorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_PyFindLevelActorBase>();
	}
};
//static_assert(alignof(UBTT_PyFindLevelActorBase) == 0x000008, "Wrong alignment on UBTT_PyFindLevelActorBase");
//static_assert(sizeof(UBTT_PyFindLevelActorBase) == 0x000158, "Wrong size on UBTT_PyFindLevelActorBase");
//static_assert(offsetof(UBTT_PyFindLevelActorBase, OutFoundActor) == 0x0000C0, "Member 'UBTT_PyFindLevelActorBase::OutFoundActor' has a wrong offset!");
//static_assert(offsetof(UBTT_PyFindLevelActorBase, OutFoundActorLocation) == 0x0000F0, "Member 'UBTT_PyFindLevelActorBase::OutFoundActorLocation' has a wrong offset!");
//static_assert(offsetof(UBTT_PyFindLevelActorBase, FilterRule) == 0x000120, "Member 'UBTT_PyFindLevelActorBase::FilterRule' has a wrong offset!");
//static_assert(offsetof(UBTT_PyFindLevelActorBase, OverrideFilterStartPoint) == 0x000121, "Member 'UBTT_PyFindLevelActorBase::OverrideFilterStartPoint' has a wrong offset!");
//static_assert(offsetof(UBTT_PyFindLevelActorBase, InFilterStartPoint) == 0x000128, "Member 'UBTT_PyFindLevelActorBase::InFilterStartPoint' has a wrong offset!");

}

