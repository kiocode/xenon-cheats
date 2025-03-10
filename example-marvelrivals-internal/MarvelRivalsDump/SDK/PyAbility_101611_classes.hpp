#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101611

#include "Basic.hpp"

#include "Hero_1016_classes.hpp"
#include "Marvel_classes.hpp"


namespace SDK
{

// PythonClass PyAbility_101611.PyEffectiveComponent_10161101
// 0x0000 (0x1C00 - 0x1C00)
class UPyEffectiveComponent_10161101 final : public UEffectiveComponent_10161101
{
public:
	TArray<struct FHitResult> K2_OnPreApplyContainer(const TArray<struct FHitResult>& HitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyEffectiveComponent_10161101">();
	}
	static class UPyEffectiveComponent_10161101* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyEffectiveComponent_10161101>();
	}
};
static_assert(alignof(UPyEffectiveComponent_10161101) == 0x000010, "Wrong alignment on UPyEffectiveComponent_10161101");
static_assert(sizeof(UPyEffectiveComponent_10161101) == 0x001C00, "Wrong size on UPyEffectiveComponent_10161101");

// PythonClass PyAbility_101611.PyAbility_101611
// 0x0000 (0x2580 - 0x2580)
class UPyAbility_101611 : public UMarvelGameplayAbility
{
public:
	void BeginPlay();
	void K2_ActivateAbility();
	void NativeOnMontageCompleted(const class FString& Tag);
	void NativeOnMontageBlendOut(const class FString& Tag);
	void NativeOnMontageInterrupted(const class FString& Tag);
	void NativeOnMontageCancelled(const class FString& Tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyAbility_101611">();
	}
	static class UPyAbility_101611* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyAbility_101611>();
	}
};
static_assert(alignof(UPyAbility_101611) == 0x000008, "Wrong alignment on UPyAbility_101611");
static_assert(sizeof(UPyAbility_101611) == 0x002580, "Wrong size on UPyAbility_101611");

}

