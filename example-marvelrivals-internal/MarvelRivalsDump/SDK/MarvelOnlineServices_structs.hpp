#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarvelOnlineServices

#include "Basic.hpp"


namespace SDK
{

// Enum MarvelOnlineServices.EMarvelLoginStatus
// NumValues: 0x0004
enum class EMarvelLoginStatus : uint8
{
	NotLoggedIn                              = 0,
	UsingLocalProfile                        = 1,
	LoggedIn                                 = 2,
	EMarvelLoginStatus_MAX                   = 3,
};

// Enum MarvelOnlineServices.EMarvelUserPrivilege
// NumValues: 0x0006
enum class EMarvelUserPrivilege : uint8
{
	CanPlay                                  = 0,
	CanPlayOnline                            = 1,
	CanCommunicateOnline                     = 2,
	CanUseUserGeneratedContent               = 3,
	CanUserCrossPlay                         = 4,
	EMarvelUserPrivilege_MAX                 = 5,
};

// Enum MarvelOnlineServices.EMarvelPrivilegeResult
// NumValues: 0x000C
enum class EMarvelPrivilegeResult : uint8
{
	RequiredPatchAvailable                   = 0,
	RequiredSystemUpdate                     = 1,
	AgeRestrictionFailure                    = 2,
	AccountTypeFailure                       = 3,
	UserNotFound                             = 4,
	UserNotLoggedIn                          = 5,
	ChatRestriction                          = 6,
	UGCRestriction                           = 7,
	GenericFailure                           = 8,
	OnlinePlayRestricted                     = 9,
	NetworkConnectionUnavailable             = 10,
	EMarvelPrivilegeResult_MAX               = 11,
};

// Enum MarvelOnlineServices.EMarvelPlatformMessageType
// NumValues: 0x0004
enum class EMarvelPlatformMessageType : uint8
{
	EmptyStore                               = 0,
	ChatRestricted                           = 1,
	UGCRestricted                            = 2,
	EMarvelPlatformMessageType_MAX           = 3,
};

}

