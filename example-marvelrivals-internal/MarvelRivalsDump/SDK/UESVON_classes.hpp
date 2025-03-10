#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UESVON

#include "Basic.hpp"

#include "UESVON_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class UESVON.AITask_SVONMoveTo
// 0x0100 (0x0180 - 0x0080)
class UAITask_SVONMoveTo final : public UAITask
{
public:
	FMulticastInlineDelegateProperty_             OnRequestFailed;                                   // 0x0080(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_90[0x8];                                       // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMoveFinished;                                    // 0x0098(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FAIMoveRequest                         MoveRequest;                                       // 0x00A8(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_F8[0x80];                                      // 0x00F8(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	class USVONNavigationComponent*               MyNavComponent;                                    // 0x0178(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UAITask_SVONMoveTo* SVONAIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, bool AUseAsyncPathfinding, class AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, bool bLockAILogic, bool bUseContinuosGoalTracking);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_SVONMoveTo">();
	}
	static class UAITask_SVONMoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_SVONMoveTo>();
	}
};
//static_assert(alignof(UAITask_SVONMoveTo) == 0x000008, "Wrong alignment on UAITask_SVONMoveTo");
//static_assert(sizeof(UAITask_SVONMoveTo) == 0x000180, "Wrong size on UAITask_SVONMoveTo");
//static_assert(offsetof(UAITask_SVONMoveTo, OnRequestFailed) == 0x000080, "Member 'UAITask_SVONMoveTo::OnRequestFailed' has a wrong offset!");
//static_assert(offsetof(UAITask_SVONMoveTo, OnMoveFinished) == 0x000098, "Member 'UAITask_SVONMoveTo::OnMoveFinished' has a wrong offset!");
//static_assert(offsetof(UAITask_SVONMoveTo, MoveRequest) == 0x0000A8, "Member 'UAITask_SVONMoveTo::MoveRequest' has a wrong offset!");
//static_assert(offsetof(UAITask_SVONMoveTo, MyNavComponent) == 0x000178, "Member 'UAITask_SVONMoveTo::MyNavComponent' has a wrong offset!");

// Class UESVON.BTTask_SVONAvoidObstacles
// 0x0020 (0x0098 - 0x0078)
class UBTTask_SVONAvoidObstacles final : public UBTTaskNode
{
public:
	float                                         TraceLength;                                       // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MoveLength;                                        // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x18];                                      // 0x0080(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_SVONAvoidObstacles">();
	}
	static class UBTTask_SVONAvoidObstacles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_SVONAvoidObstacles>();
	}
};
//static_assert(alignof(UBTTask_SVONAvoidObstacles) == 0x000008, "Wrong alignment on UBTTask_SVONAvoidObstacles");
//static_assert(sizeof(UBTTask_SVONAvoidObstacles) == 0x000098, "Wrong size on UBTTask_SVONAvoidObstacles");
//static_assert(offsetof(UBTTask_SVONAvoidObstacles, TraceLength) == 0x000078, "Member 'UBTTask_SVONAvoidObstacles::TraceLength' has a wrong offset!");
//static_assert(offsetof(UBTTask_SVONAvoidObstacles, MoveLength) == 0x00007C, "Member 'UBTTask_SVONAvoidObstacles::MoveLength' has a wrong offset!");

// Class UESVON.BTTask_SVONMoveTo
// 0x0018 (0x00C0 - 0x00A8)
class UBTTask_SVONMoveTo final : public UBTTask_BlackboardBase
{
public:
	float                                         AcceptableRadius;                                  // 0x00A8(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ObservedBlackboardValueTolerance;                  // 0x00AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bObserveBlackboardValue : 1;                       // 0x00B0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTrackMovingGoal : 1;                              // 0x00B0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReachTestIncludesAgentRadius : 1;                 // 0x00B0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReachTestIncludesGoalRadius : 1;                  // 0x00B0(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bUseAsyncPathfinding;                              // 0x00B4(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B5[0xB];                                       // 0x00B5(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_SVONMoveTo">();
	}
	static class UBTTask_SVONMoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_SVONMoveTo>();
	}
};
//static_assert(alignof(UBTTask_SVONMoveTo) == 0x000008, "Wrong alignment on UBTTask_SVONMoveTo");
//static_assert(sizeof(UBTTask_SVONMoveTo) == 0x0000C0, "Wrong size on UBTTask_SVONMoveTo");
//static_assert(offsetof(UBTTask_SVONMoveTo, AcceptableRadius) == 0x0000A8, "Member 'UBTTask_SVONMoveTo::AcceptableRadius' has a wrong offset!");
//static_assert(offsetof(UBTTask_SVONMoveTo, ObservedBlackboardValueTolerance) == 0x0000AC, "Member 'UBTTask_SVONMoveTo::ObservedBlackboardValueTolerance' has a wrong offset!");
//static_assert(offsetof(UBTTask_SVONMoveTo, bUseAsyncPathfinding) == 0x0000B4, "Member 'UBTTask_SVONMoveTo::bUseAsyncPathfinding' has a wrong offset!");

// Class UESVON.SVONIterationEstimator
// 0x0000 (0x0030 - 0x0030)
class USVONIterationEstimator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SVONIterationEstimator">();
	}
	static class USVONIterationEstimator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USVONIterationEstimator>();
	}
};
//static_assert(alignof(USVONIterationEstimator) == 0x000008, "Wrong alignment on USVONIterationEstimator");
//static_assert(sizeof(USVONIterationEstimator) == 0x000030, "Wrong size on USVONIterationEstimator");

// Class UESVON.SVONFixedIterationEstimator
// 0x0008 (0x0038 - 0x0030)
class USVONFixedIterationEstimator final : public USVONIterationEstimator
{
public:
	int32                                         FixedIterationTime;                                // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SVONFixedIterationEstimator">();
	}
	static class USVONFixedIterationEstimator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USVONFixedIterationEstimator>();
	}
};
//static_assert(alignof(USVONFixedIterationEstimator) == 0x000008, "Wrong alignment on USVONFixedIterationEstimator");
//static_assert(sizeof(USVONFixedIterationEstimator) == 0x000038, "Wrong size on USVONFixedIterationEstimator");
//static_assert(offsetof(USVONFixedIterationEstimator, FixedIterationTime) == 0x000030, "Member 'USVONFixedIterationEstimator::FixedIterationTime' has a wrong offset!");

// Class UESVON.SVONIterationEstimator_SearchEfficiency
// 0x0018 (0x0048 - 0x0030)
class USVONIterationEstimator_SearchEfficiency final : public USVONIterationEstimator
{
public:
	int32                                         MaxIterationNum;                                   // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinIterationNum;                                   // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtraFactorForEstimateDistance;                    // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         IterationNumFactor;                                // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExpectedSearchEfficiency;                          // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SVONIterationEstimator_SearchEfficiency">();
	}
	static class USVONIterationEstimator_SearchEfficiency* GetDefaultObj()
	{
		return GetDefaultObjImpl<USVONIterationEstimator_SearchEfficiency>();
	}
};
//static_assert(alignof(USVONIterationEstimator_SearchEfficiency) == 0x000008, "Wrong alignment on USVONIterationEstimator_SearchEfficiency");
//static_assert(sizeof(USVONIterationEstimator_SearchEfficiency) == 0x000048, "Wrong size on USVONIterationEstimator_SearchEfficiency");
//static_assert(offsetof(USVONIterationEstimator_SearchEfficiency, MaxIterationNum) == 0x000030, "Member 'USVONIterationEstimator_SearchEfficiency::MaxIterationNum' has a wrong offset!");
//static_assert(offsetof(USVONIterationEstimator_SearchEfficiency, MinIterationNum) == 0x000034, "Member 'USVONIterationEstimator_SearchEfficiency::MinIterationNum' has a wrong offset!");
//static_assert(offsetof(USVONIterationEstimator_SearchEfficiency, ExtraFactorForEstimateDistance) == 0x000038, "Member 'USVONIterationEstimator_SearchEfficiency::ExtraFactorForEstimateDistance' has a wrong offset!");
//static_assert(offsetof(USVONIterationEstimator_SearchEfficiency, IterationNumFactor) == 0x00003C, "Member 'USVONIterationEstimator_SearchEfficiency::IterationNumFactor' has a wrong offset!");
//static_assert(offsetof(USVONIterationEstimator_SearchEfficiency, ExpectedSearchEfficiency) == 0x000040, "Member 'USVONIterationEstimator_SearchEfficiency::ExpectedSearchEfficiency' has a wrong offset!");

// Class UESVON.SvonNavDataRenderingComponent
// 0x0040 (0x0880 - 0x0840)
class USvonNavDataRenderingComponent final : public UPrimitiveComponent
{
public:
	class FString                                 DrawFlagName;                                      // 0x0838(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bForcesUpdate : 1;                                 // 0x0848(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bDrawOnlyWhenSelected : 1;                         // 0x0848(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_849[0x7];                                      // 0x0849(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              DebugMeshMaterialFakeLight;                        // 0x0850(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_858[0x28];                                     // 0x0858(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CleanDataDrawing();
	void UpdateDataDrawing();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SvonNavDataRenderingComponent">();
	}
	static class USvonNavDataRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USvonNavDataRenderingComponent>();
	}
};
//static_assert(alignof(USvonNavDataRenderingComponent) == 0x000010, "Wrong alignment on USvonNavDataRenderingComponent");
//static_assert(sizeof(USvonNavDataRenderingComponent) == 0x000880, "Wrong size on USvonNavDataRenderingComponent");
//static_assert(offsetof(USvonNavDataRenderingComponent, DrawFlagName) == 0x000838, "Member 'USvonNavDataRenderingComponent::DrawFlagName' has a wrong offset!");
//static_assert(offsetof(USvonNavDataRenderingComponent, DebugMeshMaterialFakeLight) == 0x000850, "Member 'USvonNavDataRenderingComponent::DebugMeshMaterialFakeLight' has a wrong offset!");

// Class UESVON.SVONNavigationComponent
// 0x00D0 (0x01C0 - 0x00F0)
class USVONNavigationComponent final : public UActorComponent
{
public:
	bool                                          DebugPrintCurrentPosition;                         // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DebugPrintMortonCodes;                             // 0x00F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DebugDrawResultPath;                               // 0x00F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F3[0x5];                                       // 0x00F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSVONPathFinderSettings                PathFinderSettings;                                // 0x00F8(0x0048)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSVONMoveRequestFailed;                           // 0x0140(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_150[0x28];                                     // 0x0150(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class UAITask_SVONMoveTo*                     CurMoveTask;                                       // 0x0178(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_180[0x40];                                     // 0x0180(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetSVOPointsInBox(const struct FVector& CenterPos, const float Half, const int32 MaxFindCount, TArray<struct FVector>* OutPoints);
	bool K2_FindPathImmediate(const struct FVector& StartPosition, const struct FVector& TargetPosition, TArray<struct FVector>* OutPathPoints);
	void K2_SetFixedIterationTime(int32 FixedTimes);
	bool K2_UpdateVolume(class ASVONVolume* OptVolume);
	void OnMoveRequestFailed();
	bool TryCancelCurrentMoveTask();

	bool IsPositionSVOBlocked(const struct FVector& Position) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SVONNavigationComponent">();
	}
	static class USVONNavigationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USVONNavigationComponent>();
	}
};
//static_assert(alignof(USVONNavigationComponent) == 0x000008, "Wrong alignment on USVONNavigationComponent");
//static_assert(sizeof(USVONNavigationComponent) == 0x0001C0, "Wrong size on USVONNavigationComponent");
//static_assert(offsetof(USVONNavigationComponent, DebugPrintCurrentPosition) == 0x0000F0, "Member 'USVONNavigationComponent::DebugPrintCurrentPosition' has a wrong offset!");
//static_assert(offsetof(USVONNavigationComponent, DebugPrintMortonCodes) == 0x0000F1, "Member 'USVONNavigationComponent::DebugPrintMortonCodes' has a wrong offset!");
//static_assert(offsetof(USVONNavigationComponent, DebugDrawResultPath) == 0x0000F2, "Member 'USVONNavigationComponent::DebugDrawResultPath' has a wrong offset!");
//static_assert(offsetof(USVONNavigationComponent, PathFinderSettings) == 0x0000F8, "Member 'USVONNavigationComponent::PathFinderSettings' has a wrong offset!");
//static_assert(offsetof(USVONNavigationComponent, OnSVONMoveRequestFailed) == 0x000140, "Member 'USVONNavigationComponent::OnSVONMoveRequestFailed' has a wrong offset!");
//static_assert(offsetof(USVONNavigationComponent, CurMoveTask) == 0x000178, "Member 'USVONNavigationComponent::CurMoveTask' has a wrong offset!");

// Class UESVON.SVONReachableTestPoint
// 0x0000 (0x0490 - 0x0490)
class ASVONReachableTestPoint final : public AActor
{
public:
	void DrawReachPath();

	void DrawReachable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SVONReachableTestPoint">();
	}
	static class ASVONReachableTestPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASVONReachableTestPoint>();
	}
};
//static_assert(alignof(ASVONReachableTestPoint) == 0x000008, "Wrong alignment on ASVONReachableTestPoint");
//static_assert(sizeof(ASVONReachableTestPoint) == 0x000490, "Wrong size on ASVONReachableTestPoint");

// Class UESVON.SVONVolume
// 0x0618 (0x0AE0 - 0x04C8)
class ASVONVolume final : public AVolume
{
public:
	float                                         MyDebugDistance;                                   // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MyShowVoxels;                                      // 0x04CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MyShowLeafVoxels;                                  // 0x04CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MyShowMortonCodes;                                 // 0x04CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MyShowNeighbourLinks;                              // 0x04CF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MyShowParentChildLinks;                            // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableRebuildDebug;                                // 0x04D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseAsyncBuild;                                     // 0x04D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D3[0x1];                                      // 0x04D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RebuildMillisecondDelta;                           // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDebugRendering;                             // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D9[0x7];                                      // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSvonDebugRenderingSettings            DebugRenderingSettings;                            // 0x04E0(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                         MyVoxelPower;                                      // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             MyCollisionChannel;                                // 0x0504(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_505[0x3];                                      // 0x0505(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MyClearance;                                       // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESVOGenerationStrategy                        MyGenerationStrategy;                              // 0x050C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseForNav;                                        // 0x050D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bConcernReachable;                                 // 0x050E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MyNumLayers;                                       // 0x050F(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MyNumBytes;                                        // 0x0510(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MyLeafVoxelSize;                                   // 0x0514(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridePathFindingSetting;                       // 0x0518(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseUnitCost;                                      // 0x0519(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51A[0x6];                                      // 0x051A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<uint32, uint32>                          MyOffSVOLinkMap;                                   // 0x0520(0x0050)(NativeAccessSpecifierPublic)
	TMap<uint32, uint64>                          MyOffSVOLinkIdMap;                                 // 0x0570(0x0050)(NativeAccessSpecifierPublic)
	TMap<uint64, struct FVectorPair>              MyOffSVOLinkLocationMap;                           // 0x05C0(0x0050)(Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                          bHasOffSVOLink;                                    // 0x0610(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         DebugLayerIndex;                                   // 0x0611(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_612[0x2];                                      // 0x0612(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugNodeIndex;                                    // 0x0614(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         DebugSubNodeIndex;                                 // 0x0618(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugForceLeafNode;                               // 0x0619(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          DebugDirection;                                    // 0x061A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugShowNeighbours;                              // 0x061B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoFlushWhenDebugLink;                           // 0x061C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61D[0x3];                                      // 0x061D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USvonNavDataRenderingComponent*         RenderingComponent;                                // 0x0620(0x0008)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_628[0x80];                                     // 0x0628(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MyOrigin;                                          // 0x06A8(0x0018)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                MyExtent;                                          // 0x06C0(0x0018)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                MyDebugPosition;                                   // 0x06D8(0x0018)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_6F0[0x3F0];                                    // 0x06F0(0x03F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DebugNeighbourInDirection();
	void DebugSpecialLink();
	void DebugSubNodesInDirection();
	void FlushDebugDrawLines();
	void K2_ReDrawDebug(const struct FVector& DebugPosition, const float DebugDistance);
	void ReDrawDebugLines_VLog();

	void CleanDebugDraw() const;
	void DrawNodeForReachableTest(bool DrawReachable) const;
	void DrawReachableNode() const;
	void DrawUnreachableNode() const;
	void FlushRendering() const;
	void RedoRendering() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SVONVolume">();
	}
	static class ASVONVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASVONVolume>();
	}
};
//static_assert(alignof(ASVONVolume) == 0x000008, "Wrong alignment on ASVONVolume");
//static_assert(sizeof(ASVONVolume) == 0x000AE0, "Wrong size on ASVONVolume");
//static_assert(offsetof(ASVONVolume, MyDebugDistance) == 0x0004C8, "Member 'ASVONVolume::MyDebugDistance' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyShowVoxels) == 0x0004CC, "Member 'ASVONVolume::MyShowVoxels' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyShowLeafVoxels) == 0x0004CD, "Member 'ASVONVolume::MyShowLeafVoxels' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyShowMortonCodes) == 0x0004CE, "Member 'ASVONVolume::MyShowMortonCodes' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyShowNeighbourLinks) == 0x0004CF, "Member 'ASVONVolume::MyShowNeighbourLinks' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyShowParentChildLinks) == 0x0004D0, "Member 'ASVONVolume::MyShowParentChildLinks' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, EnableRebuildDebug) == 0x0004D1, "Member 'ASVONVolume::EnableRebuildDebug' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, UseAsyncBuild) == 0x0004D2, "Member 'ASVONVolume::UseAsyncBuild' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, RebuildMillisecondDelta) == 0x0004D4, "Member 'ASVONVolume::RebuildMillisecondDelta' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bEnableDebugRendering) == 0x0004D8, "Member 'ASVONVolume::bEnableDebugRendering' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, DebugRenderingSettings) == 0x0004E0, "Member 'ASVONVolume::DebugRenderingSettings' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyVoxelPower) == 0x000500, "Member 'ASVONVolume::MyVoxelPower' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyCollisionChannel) == 0x000504, "Member 'ASVONVolume::MyCollisionChannel' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyClearance) == 0x000508, "Member 'ASVONVolume::MyClearance' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyGenerationStrategy) == 0x00050C, "Member 'ASVONVolume::MyGenerationStrategy' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bUseForNav) == 0x00050D, "Member 'ASVONVolume::bUseForNav' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bConcernReachable) == 0x00050E, "Member 'ASVONVolume::bConcernReachable' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyNumLayers) == 0x00050F, "Member 'ASVONVolume::MyNumLayers' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyNumBytes) == 0x000510, "Member 'ASVONVolume::MyNumBytes' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyLeafVoxelSize) == 0x000514, "Member 'ASVONVolume::MyLeafVoxelSize' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bOverridePathFindingSetting) == 0x000518, "Member 'ASVONVolume::bOverridePathFindingSetting' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bUseUnitCost) == 0x000519, "Member 'ASVONVolume::bUseUnitCost' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyOffSVOLinkMap) == 0x000520, "Member 'ASVONVolume::MyOffSVOLinkMap' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyOffSVOLinkIdMap) == 0x000570, "Member 'ASVONVolume::MyOffSVOLinkIdMap' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyOffSVOLinkLocationMap) == 0x0005C0, "Member 'ASVONVolume::MyOffSVOLinkLocationMap' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bHasOffSVOLink) == 0x000610, "Member 'ASVONVolume::bHasOffSVOLink' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, DebugLayerIndex) == 0x000611, "Member 'ASVONVolume::DebugLayerIndex' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, DebugNodeIndex) == 0x000614, "Member 'ASVONVolume::DebugNodeIndex' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, DebugSubNodeIndex) == 0x000618, "Member 'ASVONVolume::DebugSubNodeIndex' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bDebugForceLeafNode) == 0x000619, "Member 'ASVONVolume::bDebugForceLeafNode' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, DebugDirection) == 0x00061A, "Member 'ASVONVolume::DebugDirection' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bDebugShowNeighbours) == 0x00061B, "Member 'ASVONVolume::bDebugShowNeighbours' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, bAutoFlushWhenDebugLink) == 0x00061C, "Member 'ASVONVolume::bAutoFlushWhenDebugLink' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, RenderingComponent) == 0x000620, "Member 'ASVONVolume::RenderingComponent' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyOrigin) == 0x0006A8, "Member 'ASVONVolume::MyOrigin' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyExtent) == 0x0006C0, "Member 'ASVONVolume::MyExtent' has a wrong offset!");
//static_assert(offsetof(ASVONVolume, MyDebugPosition) == 0x0006D8, "Member 'ASVONVolume::MyDebugPosition' has a wrong offset!");

}

