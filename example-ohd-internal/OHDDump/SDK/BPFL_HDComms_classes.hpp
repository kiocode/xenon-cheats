#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HDComms

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_HDComms.BPFL_HDComms_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_HDComms_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetValidCommsComponentForPlayer(class APlayerController* Player, class UObject* __WorldContext, class UDFPlayerCommsComponent** PlayerCommsComp);
	static void GetColorForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, struct FSlateColor* ChannelColor);
	static void SetupNewTeamChannel(class UDFCommChannel* CreatedChannel, class AHDTeamState* TeamToAssociate, class UObject* __WorldContext);
	static void SetupNewSquadChannel(class UDFCommChannel* CreatedChannel, class AHDSquadState* SquadToAssociate, class UObject* __WorldContext);
	static void GetTextChatIconForCommChannel(class UDFCommChannel* Channel, class UObject* __WorldContext, class UTexture2D** ChannelChatIcon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_HDComms_C">();
	}
	static class UBPFL_HDComms_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_HDComms_C>();
	}
};
static_assert(alignof(UBPFL_HDComms_C) == 0x000008, "Wrong alignment on UBPFL_HDComms_C");
static_assert(sizeof(UBPFL_HDComms_C) == 0x000028, "Wrong size on UBPFL_HDComms_C");

}

