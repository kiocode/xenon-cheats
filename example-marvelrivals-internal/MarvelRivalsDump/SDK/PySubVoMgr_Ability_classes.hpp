#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySubVoMgr_Ability

#include "Basic.hpp"

#include "PySubVoMgrBase_classes.hpp"


namespace SDK
{

// PythonClass PySubVoMgr_Ability.PySubVoMgr_Ability
// 0x0000 (0x00F0 - 0x00F0)
class UPySubVoMgr_Ability final : public UPySubVoMgrBase
{
public:
	void OnVoiceBuffTaken(const struct FHeroVoiceBuffRequest& Request);
	void OnVoiceBuffApply(const struct FHeroVoiceBuffRequest& Request);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PySubVoMgr_Ability">();
	}
	static class UPySubVoMgr_Ability* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPySubVoMgr_Ability>();
	}
};
static_assert(alignof(UPySubVoMgr_Ability) == 0x000008, "Wrong alignment on UPySubVoMgr_Ability");
static_assert(sizeof(UPySubVoMgr_Ability) == 0x0000F0, "Wrong size on UPySubVoMgr_Ability");

}

