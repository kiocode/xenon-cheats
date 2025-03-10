#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VirtualActorManager_BPC

#include "Basic.hpp"

#include "PyVirtualActorManager_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VirtualActorManager_BPC.VirtualActorManager_BPC_C
// 0x0008 (0x0500 - 0x04F8)
class AVirtualActorManager_BPC_C final : public APyVirtualActorManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VirtualActorManager_BPC_C">();
	}
	static class AVirtualActorManager_BPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVirtualActorManager_BPC_C>();
	}
};
//static_assert(alignof(AVirtualActorManager_BPC_C) == 0x000008, "Wrong alignment on AVirtualActorManager_BPC_C");
//static_assert(sizeof(AVirtualActorManager_BPC_C) == 0x000500, "Wrong size on AVirtualActorManager_BPC_C");
//static_assert(offsetof(AVirtualActorManager_BPC_C, DefaultSceneRoot) == 0x0004F8, "Member 'AVirtualActorManager_BPC_C::DefaultSceneRoot' has a wrong offset!");

}

