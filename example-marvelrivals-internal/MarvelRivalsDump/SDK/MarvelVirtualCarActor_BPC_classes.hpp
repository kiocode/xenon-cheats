#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarvelVirtualCarActor_BPC

#include "Basic.hpp"

#include "PyVirtualCarActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MarvelVirtualCarActor_BPC.MarvelVirtualCarActor_BPC_C
// 0x0010 (0x14B0 - 0x14A0)
class AMarvelVirtualCarActor_BPC_C final : public APyMarvelVirtualCarActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x14A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MarvelVirtualCarActor_BPC_C">();
	}
	static class AMarvelVirtualCarActor_BPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMarvelVirtualCarActor_BPC_C>();
	}
};
static_assert(alignof(AMarvelVirtualCarActor_BPC_C) == 0x000010, "Wrong alignment on AMarvelVirtualCarActor_BPC_C");
static_assert(sizeof(AMarvelVirtualCarActor_BPC_C) == 0x0014B0, "Wrong size on AMarvelVirtualCarActor_BPC_C");
static_assert(offsetof(AMarvelVirtualCarActor_BPC_C, DefaultSceneRoot) == 0x0014A0, "Member 'AMarvelVirtualCarActor_BPC_C::DefaultSceneRoot' has a wrong offset!");

}

