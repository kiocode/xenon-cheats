#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MarvelGameHUDBP

#include "Basic.hpp"

#include "PyMarvelGameHUD_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MarvelGameHUDBP.MarvelGameHUDBP_C
// 0x0018 (0x0718 - 0x0700)
class AMarvelGameHUDBP_C final : public APyMarvelGameHUD
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Class_RootWidget;                                  // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Class_BattlePanel;                                 // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MarvelGameHUDBP_C">();
	}
	static class AMarvelGameHUDBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMarvelGameHUDBP_C>();
	}
};
static_assert(alignof(AMarvelGameHUDBP_C) == 0x000008, "Wrong alignment on AMarvelGameHUDBP_C");
static_assert(sizeof(AMarvelGameHUDBP_C) == 0x000718, "Wrong size on AMarvelGameHUDBP_C");
static_assert(offsetof(AMarvelGameHUDBP_C, DefaultSceneRoot) == 0x000700, "Member 'AMarvelGameHUDBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMarvelGameHUDBP_C, Class_RootWidget) == 0x000708, "Member 'AMarvelGameHUDBP_C::Class_RootWidget' has a wrong offset!");
static_assert(offsetof(AMarvelGameHUDBP_C, Class_BattlePanel) == 0x000710, "Member 'AMarvelGameHUDBP_C::Class_BattlePanel' has a wrong offset!");

}

