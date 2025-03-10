#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyKrakoaPortal

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Marvel_structs.hpp"
#include "PyLevelPortalBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyKrakoaPortal.PyKrakoaPortal
// 0x00F8 (0x0600 - 0x0508)
class APyKrakoaPortal final : public APyLevelPortalBase
{
public:
	struct FGameplayTagContainer                  CueTags;                                           // 0x0508(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         ClearTime;                                         // 0x0570(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CDTime;                                            // 0x0574(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APyPlayerStart*                         InComingPlace;                                     // 0x0578(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APyLevelPortalBase*                     TargetPortal;                                      // 0x0580(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          InComingAudio;                                     // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          OutgoingAudio;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOpen;                                             // 0x0598(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_599[0x3];                                      // 0x0599(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UserTeleportedBuff;                                // 0x059C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherTeleportedBuff;                               // 0x05A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsingControlRelation;                             // 0x05A4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A5[0x3];                                      // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APyControl*                             RelatedControlPoint;                               // 0x05A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBattleSide                                   OwnedBattleSide;                                   // 0x05B0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInteractByScope;                                  // 0x05B1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5B2[0x2];                                      // 0x05B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ChannellingTime;                                   // 0x05B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 ChannellingUserBuff;                               // 0x05B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                         WarningTime;                                       // 0x05C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5CC[0x4];                                      // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      WarningMat;                                        // 0x05D0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                      NormalMat;                                         // 0x05D8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AudioCDTime;                                       // 0x05E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowActionTipWhenUseless;                         // 0x05E4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5E5[0x3];                                      // 0x05E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CooldownTips;                                      // 0x05E8(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	void ReceiveInit();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void CheckTeleportFinish(class AMarvelBaseCharacter* Character, const struct FVector& Target_pos);
	void OpenAndClose(bool Open);
	void OnRep_bOpen();
	void Has_player_incoming();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyKrakoaPortal">();
	}
	static class APyKrakoaPortal* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyKrakoaPortal>();
	}
};
static_assert(alignof(APyKrakoaPortal) == 0x000008, "Wrong alignment on APyKrakoaPortal");
static_assert(sizeof(APyKrakoaPortal) == 0x000600, "Wrong size on APyKrakoaPortal");
static_assert(offsetof(APyKrakoaPortal, CueTags) == 0x000508, "Member 'APyKrakoaPortal::CueTags' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, ClearTime) == 0x000570, "Member 'APyKrakoaPortal::ClearTime' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, CDTime) == 0x000574, "Member 'APyKrakoaPortal::CDTime' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, InComingPlace) == 0x000578, "Member 'APyKrakoaPortal::InComingPlace' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, TargetPortal) == 0x000580, "Member 'APyKrakoaPortal::TargetPortal' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, InComingAudio) == 0x000588, "Member 'APyKrakoaPortal::InComingAudio' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, OutgoingAudio) == 0x000590, "Member 'APyKrakoaPortal::OutgoingAudio' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, bOpen) == 0x000598, "Member 'APyKrakoaPortal::bOpen' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, UserTeleportedBuff) == 0x00059C, "Member 'APyKrakoaPortal::UserTeleportedBuff' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, OtherTeleportedBuff) == 0x0005A0, "Member 'APyKrakoaPortal::OtherTeleportedBuff' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, bUsingControlRelation) == 0x0005A4, "Member 'APyKrakoaPortal::bUsingControlRelation' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, RelatedControlPoint) == 0x0005A8, "Member 'APyKrakoaPortal::RelatedControlPoint' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, OwnedBattleSide) == 0x0005B0, "Member 'APyKrakoaPortal::OwnedBattleSide' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, bInteractByScope) == 0x0005B1, "Member 'APyKrakoaPortal::bInteractByScope' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, ChannellingTime) == 0x0005B4, "Member 'APyKrakoaPortal::ChannellingTime' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, ChannellingUserBuff) == 0x0005B8, "Member 'APyKrakoaPortal::ChannellingUserBuff' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, WarningTime) == 0x0005C8, "Member 'APyKrakoaPortal::WarningTime' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, WarningMat) == 0x0005D0, "Member 'APyKrakoaPortal::WarningMat' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, NormalMat) == 0x0005D8, "Member 'APyKrakoaPortal::NormalMat' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, AudioCDTime) == 0x0005E0, "Member 'APyKrakoaPortal::AudioCDTime' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, bShowActionTipWhenUseless) == 0x0005E4, "Member 'APyKrakoaPortal::bShowActionTipWhenUseless' has a wrong offset!");
static_assert(offsetof(APyKrakoaPortal, CooldownTips) == 0x0005E8, "Member 'APyKrakoaPortal::CooldownTips' has a wrong offset!");

}

