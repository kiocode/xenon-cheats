#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Summoned_20000102_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Summoned_20000102_BP.Summoned_20000102_BP_C.ExecuteUbergraph_Summoned_20000102_BP
// 0x0200 (0x0200 - 0x0000)
struct Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x0088(0x0170)(ContainsInstancedReference)
};
//static_assert(alignof(Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP) == 0x000010, "Wrong alignment on Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP");
//static_assert(sizeof(Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP) == 0x000200, "Wrong size on Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP");
//static_assert(offsetof(Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP, EntryPoint) == 0x000000, "Member 'Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP::EntryPoint' has a wrong offset!");
//static_assert(offsetof(Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
//static_assert(offsetof(Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP, CallFunc_Add_VectorVector_ReturnValue) == 0x000070, "Member 'Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
//static_assert(offsetof(Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000088, "Member 'Summoned_20000102_BP_C_ExecuteUbergraph_Summoned_20000102_BP::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");

}

