#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RCON

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class RCON.RCONServerSystem
// 0x0048 (0x0070 - 0x0028)
class URCONServerSystem final : public UObject
{
public:
	bool                                          bEnabled;                                          // 0x0028(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ListenAddress;                                     // 0x0030(0x0010)(ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        ListenPort;                                        // 0x0040(0x0002)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Password;                                          // 0x0048(0x0010)(ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        MaxActiveConnections;                              // 0x0058(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        MaxAuthAttempts;                                   // 0x005C(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x10];                                      // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Init();
	void Shutdown();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RCONServerSystem">();
	}
	static class URCONServerSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<URCONServerSystem>();
	}
};
static_assert(alignof(URCONServerSystem) == 0x000008, "Wrong alignment on URCONServerSystem");
static_assert(sizeof(URCONServerSystem) == 0x000070, "Wrong size on URCONServerSystem");
static_assert(offsetof(URCONServerSystem, bEnabled) == 0x000028, "Member 'URCONServerSystem::bEnabled' has a wrong offset!");
static_assert(offsetof(URCONServerSystem, ListenAddress) == 0x000030, "Member 'URCONServerSystem::ListenAddress' has a wrong offset!");
static_assert(offsetof(URCONServerSystem, ListenPort) == 0x000040, "Member 'URCONServerSystem::ListenPort' has a wrong offset!");
static_assert(offsetof(URCONServerSystem, Password) == 0x000048, "Member 'URCONServerSystem::Password' has a wrong offset!");
static_assert(offsetof(URCONServerSystem, MaxActiveConnections) == 0x000058, "Member 'URCONServerSystem::MaxActiveConnections' has a wrong offset!");
static_assert(offsetof(URCONServerSystem, MaxAuthAttempts) == 0x00005C, "Member 'URCONServerSystem::MaxAuthAttempts' has a wrong offset!");

}

