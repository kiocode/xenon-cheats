#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_PyFindNearByObstacle

#include "Basic.hpp"


namespace SDK::Params
{

// PythonFunction BTT_PyFindNearByObstacle.BTT_PyFindNearByObstacle.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_PyFindNearByObstacle_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
//static_assert(alignof(BTT_PyFindNearByObstacle_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_PyFindNearByObstacle_ReceiveExecuteAI");
//static_assert(sizeof(BTT_PyFindNearByObstacle_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_PyFindNearByObstacle_ReceiveExecuteAI");
//static_assert(offsetof(BTT_PyFindNearByObstacle_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_PyFindNearByObstacle_ReceiveExecuteAI::OwnerController' has a wrong offset!");
//static_assert(offsetof(BTT_PyFindNearByObstacle_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_PyFindNearByObstacle_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

