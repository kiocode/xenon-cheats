#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_activation_logic

#include "Basic.hpp"

#include "MarvelAI_structs.hpp"


namespace SDK::Params
{

// PythonFunction ability_activation_logic.PyAIAbilityActivationLogicBase.BeginLogic
// 0x0100 (0x0100 - 0x0000)
struct PyAIAbilityActivationLogicBase_BeginLogic final
{
public:
	class UAIAbilityExecutor*                     OwnerExecutor;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAIAbilityUsage                        AbilityUsage;                                      // 0x0008(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class AMarvelAIController*                    Controller;                                        // 0x00F0(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
//static_assert(alignof(PyAIAbilityActivationLogicBase_BeginLogic) == 0x000008, "Wrong alignment on PyAIAbilityActivationLogicBase_BeginLogic");
//static_assert(sizeof(PyAIAbilityActivationLogicBase_BeginLogic) == 0x000100, "Wrong size on PyAIAbilityActivationLogicBase_BeginLogic");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_BeginLogic, OwnerExecutor) == 0x000000, "Member 'PyAIAbilityActivationLogicBase_BeginLogic::OwnerExecutor' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_BeginLogic, AbilityUsage) == 0x000008, "Member 'PyAIAbilityActivationLogicBase_BeginLogic::AbilityUsage' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_BeginLogic, Controller) == 0x0000F0, "Member 'PyAIAbilityActivationLogicBase_BeginLogic::Controller' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_BeginLogic, ReturnValue) == 0x0000F8, "Member 'PyAIAbilityActivationLogicBase_BeginLogic::ReturnValue' has a wrong offset!");

// PythonFunction ability_activation_logic.PyAIAbilityActivationLogicBase.TickLogic
// 0x0100 (0x0100 - 0x0000)
struct PyAIAbilityActivationLogicBase_TickLogic final
{
public:
	class UAIAbilityExecutor*                     OwnerExecutor;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAIAbilityUsage                        AbilityUsage;                                      // 0x0008(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class AMarvelAIController*                    Controller;                                        // 0x00F0(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x00F8(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00FC(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
//static_assert(alignof(PyAIAbilityActivationLogicBase_TickLogic) == 0x000008, "Wrong alignment on PyAIAbilityActivationLogicBase_TickLogic");
//static_assert(sizeof(PyAIAbilityActivationLogicBase_TickLogic) == 0x000100, "Wrong size on PyAIAbilityActivationLogicBase_TickLogic");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_TickLogic, OwnerExecutor) == 0x000000, "Member 'PyAIAbilityActivationLogicBase_TickLogic::OwnerExecutor' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_TickLogic, AbilityUsage) == 0x000008, "Member 'PyAIAbilityActivationLogicBase_TickLogic::AbilityUsage' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_TickLogic, Controller) == 0x0000F0, "Member 'PyAIAbilityActivationLogicBase_TickLogic::Controller' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_TickLogic, DeltaTime) == 0x0000F8, "Member 'PyAIAbilityActivationLogicBase_TickLogic::DeltaTime' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_TickLogic, ReturnValue) == 0x0000FC, "Member 'PyAIAbilityActivationLogicBase_TickLogic::ReturnValue' has a wrong offset!");

// PythonFunction ability_activation_logic.PyAIAbilityActivationLogicBase.EndLogic
// 0x0100 (0x0100 - 0x0000)
struct PyAIAbilityActivationLogicBase_EndLogic final
{
public:
	class UAIAbilityExecutor*                     OwnerExecutor;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAIAbilityUsage                        AbilityUsage;                                      // 0x0008(0x00E8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class AMarvelAIController*                    Controller;                                        // 0x00F0(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00F8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
//static_assert(alignof(PyAIAbilityActivationLogicBase_EndLogic) == 0x000008, "Wrong alignment on PyAIAbilityActivationLogicBase_EndLogic");
//static_assert(sizeof(PyAIAbilityActivationLogicBase_EndLogic) == 0x000100, "Wrong size on PyAIAbilityActivationLogicBase_EndLogic");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_EndLogic, OwnerExecutor) == 0x000000, "Member 'PyAIAbilityActivationLogicBase_EndLogic::OwnerExecutor' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_EndLogic, AbilityUsage) == 0x000008, "Member 'PyAIAbilityActivationLogicBase_EndLogic::AbilityUsage' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_EndLogic, Controller) == 0x0000F0, "Member 'PyAIAbilityActivationLogicBase_EndLogic::Controller' has a wrong offset!");
//static_assert(offsetof(PyAIAbilityActivationLogicBase_EndLogic, ReturnValue) == 0x0000F8, "Member 'PyAIAbilityActivationLogicBase_EndLogic::ReturnValue' has a wrong offset!");

}

