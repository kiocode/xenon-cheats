#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_103429

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyAbility_103429.PyCue_Ability_Loop_10342901.OnExecuteFX
// 0x01C0 (0x01C0 - 0x0000)
struct PyCue_Ability_Loop_10342901_OnExecuteFX final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x01B8)(ConstParm, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PyCue_Ability_Loop_10342901_OnExecuteFX) == 0x000008, "Wrong alignment on PyCue_Ability_Loop_10342901_OnExecuteFX");
static_assert(sizeof(PyCue_Ability_Loop_10342901_OnExecuteFX) == 0x0001C0, "Wrong size on PyCue_Ability_Loop_10342901_OnExecuteFX");
static_assert(offsetof(PyCue_Ability_Loop_10342901_OnExecuteFX, MyTarget) == 0x000000, "Member 'PyCue_Ability_Loop_10342901_OnExecuteFX::MyTarget' has a wrong offset!");
static_assert(offsetof(PyCue_Ability_Loop_10342901_OnExecuteFX, Parameters) == 0x000008, "Member 'PyCue_Ability_Loop_10342901_OnExecuteFX::Parameters' has a wrong offset!");

}

