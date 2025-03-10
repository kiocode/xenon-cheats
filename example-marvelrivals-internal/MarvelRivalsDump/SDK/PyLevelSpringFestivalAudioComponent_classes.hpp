#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLevelSpringFestivalAudioComponent

#include "Basic.hpp"

#include "PyModeAudioComponent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyLevelSpringFestivalAudioComponent.PyLevelSpringFestivalAudioComponent
// 0x0000 (0x0108 - 0x0108)
class UPyLevelSpringFestivalAudioComponent final : public UPyModeAudioComponent
{
public:
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyLevelSpringFestivalAudioComponent">();
	}
	static class UPyLevelSpringFestivalAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyLevelSpringFestivalAudioComponent>();
	}
};
static_assert(alignof(UPyLevelSpringFestivalAudioComponent) == 0x000008, "Wrong alignment on UPyLevelSpringFestivalAudioComponent");
static_assert(sizeof(UPyLevelSpringFestivalAudioComponent) == 0x000108, "Wrong size on UPyLevelSpringFestivalAudioComponent");

}

