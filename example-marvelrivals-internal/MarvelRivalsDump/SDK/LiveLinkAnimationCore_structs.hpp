#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkAnimationCore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LiveLinkInterface_structs.hpp"


namespace SDK
{

// ScriptStruct LiveLinkAnimationCore.AnimNode_LiveLinkPose
// 0x0040 (0x0068 - 0x0028)
struct FAnimNode_LiveLinkPose final : public FAnimNode_Base
{
public:
	struct FPoseLink                              InputPose;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                   LiveLinkSubjectName;                               // 0x0038(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ULiveLinkRetargetAsset>     RetargetAsset;                                     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;                              // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x10];                                      // 0x0058(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_LiveLinkPose) == 0x000008, "Wrong alignment on FAnimNode_LiveLinkPose");
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x000068, "Wrong size on FAnimNode_LiveLinkPose");
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x000028, "Member 'FAnimNode_LiveLinkPose::InputPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, LiveLinkSubjectName) == 0x000038, "Member 'FAnimNode_LiveLinkPose::LiveLinkSubjectName' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x000048, "Member 'FAnimNode_LiveLinkPose::RetargetAsset' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x000050, "Member 'FAnimNode_LiveLinkPose::CurrentRetargetAsset' has a wrong offset!");

// ScriptStruct LiveLinkAnimationCore.LiveLinkInstanceProxy
// 0x0060 (0x0830 - 0x07D0)
struct FLiveLinkInstanceProxy final : public FAnimInstanceProxy
{
public:
	struct FAnimNode_LiveLinkPose                 PoseNode;                                          // 0x07C8(0x0068)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLiveLinkInstanceProxy) == 0x000010, "Wrong alignment on FLiveLinkInstanceProxy");
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x000830, "Wrong size on FLiveLinkInstanceProxy");
static_assert(offsetof(FLiveLinkInstanceProxy, PoseNode) == 0x0007C8, "Member 'FLiveLinkInstanceProxy::PoseNode' has a wrong offset!");

}

