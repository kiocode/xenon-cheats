#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Suppressor_Shotgun

#include "Basic.hpp"

#include "Attachment_Barrel_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Suppressor_Shotgun.Suppressor_Shotgun_C
// 0x0000 (0x0260 - 0x0260)
class ASuppressor_Shotgun_C final : public AAttachment_Barrel_base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Suppressor_Shotgun_C">();
	}
	static class ASuppressor_Shotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASuppressor_Shotgun_C>();
	}
};
static_assert(alignof(ASuppressor_Shotgun_C) == 0x000008, "Wrong alignment on ASuppressor_Shotgun_C");
static_assert(sizeof(ASuppressor_Shotgun_C) == 0x000260, "Wrong size on ASuppressor_Shotgun_C");

}

