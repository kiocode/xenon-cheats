#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ui_controller_reload

#include "Basic.hpp"

#include "Marvel_structs.hpp"


namespace SDK::Params
{

// PythonFunction ui_controller_reload.UIController_Reload.OnAmmoAttributeChanged
// 0x0020 (0x0020 - 0x0000)
struct UIController_Reload_OnAmmoAttributeChanged final
{
public:
	class AActor*                                 SourceActor;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAttributeModifierHandle               Parameter;                                         // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
//static_assert(alignof(UIController_Reload_OnAmmoAttributeChanged) == 0x000008, "Wrong alignment on UIController_Reload_OnAmmoAttributeChanged");
//static_assert(sizeof(UIController_Reload_OnAmmoAttributeChanged) == 0x000020, "Wrong size on UIController_Reload_OnAmmoAttributeChanged");
//static_assert(offsetof(UIController_Reload_OnAmmoAttributeChanged, SourceActor) == 0x000000, "Member 'UIController_Reload_OnAmmoAttributeChanged::SourceActor' has a wrong offset!");
//static_assert(offsetof(UIController_Reload_OnAmmoAttributeChanged, Parameter) == 0x000008, "Member 'UIController_Reload_OnAmmoAttributeChanged::Parameter' has a wrong offset!");

// PythonFunction ui_controller_reload.UIController_Reload.AddAbility
// 0x0008 (0x0008 - 0x0000)
struct UIController_Reload_AddAbility final
{
public:
	class UMarvelGameplayAbility*                 InAbility;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
//static_assert(alignof(UIController_Reload_AddAbility) == 0x000008, "Wrong alignment on UIController_Reload_AddAbility");
//static_assert(sizeof(UIController_Reload_AddAbility) == 0x000008, "Wrong size on UIController_Reload_AddAbility");
//static_assert(offsetof(UIController_Reload_AddAbility, InAbility) == 0x000000, "Member 'UIController_Reload_AddAbility::InAbility' has a wrong offset!");

// PythonFunction ui_controller_reload.UIController_Reload.SetTargetCharacter
// 0x0008 (0x0008 - 0x0000)
struct UIController_Reload_SetTargetCharacter final
{
public:
	class AMarvelBaseCharacter*                   InTargetCharacter;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
//static_assert(alignof(UIController_Reload_SetTargetCharacter) == 0x000008, "Wrong alignment on UIController_Reload_SetTargetCharacter");
//static_assert(sizeof(UIController_Reload_SetTargetCharacter) == 0x000008, "Wrong size on UIController_Reload_SetTargetCharacter");
//static_assert(offsetof(UIController_Reload_SetTargetCharacter, InTargetCharacter) == 0x000000, "Member 'UIController_Reload_SetTargetCharacter::InTargetCharacter' has a wrong offset!");

}

