#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyIronManCharacter

#include "Basic.hpp"

#include "Hero_1034_classes.hpp"


namespace SDK
{

// PythonClass PyIronManCharacter.PyIronManChildActor
// 0x0000 (0x0AA0 - 0x0AA0)
class APyIronManChildActor : public AIronManChildActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyIronManChildActor">();
	}
	static class APyIronManChildActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyIronManChildActor>();
	}
};
static_assert(alignof(APyIronManChildActor) == 0x000008, "Wrong alignment on APyIronManChildActor");
static_assert(sizeof(APyIronManChildActor) == 0x000AA0, "Wrong size on APyIronManChildActor");

// PythonClass PyIronManCharacter.PyIronManCharacter
// 0x0000 (0x1850 - 0x1850)
class APyIronManCharacter : public AIronManCharacter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyIronManCharacter">();
	}
	static class APyIronManCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyIronManCharacter>();
	}
};
static_assert(alignof(APyIronManCharacter) == 0x000010, "Wrong alignment on APyIronManCharacter");
static_assert(sizeof(APyIronManCharacter) == 0x001850, "Wrong size on APyIronManCharacter");

}

