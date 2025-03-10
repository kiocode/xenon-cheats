#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BreakableGlass

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BreakableGlass.BreakableGlass_C.ExecuteUbergraph_BreakableGlass
// 0x0058 (0x0058 - 0x0000)
struct BreakableGlass_C_ExecuteUbergraph_BreakableGlass final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_Amount;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_Bone;                   // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_HitLocation;            // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_StartLocation;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_ComponentBoundEvent_Instigator;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass) == 0x000008, "Wrong alignment on BreakableGlass_C_ExecuteUbergraph_BreakableGlass");
static_assert(sizeof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass) == 0x000058, "Wrong size on BreakableGlass_C_ExecuteUbergraph_BreakableGlass");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, EntryPoint) == 0x000000, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::EntryPoint' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, K2Node_ComponentBoundEvent_Amount) == 0x000010, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::K2Node_ComponentBoundEvent_Amount' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, K2Node_ComponentBoundEvent_Bone) == 0x000014, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::K2Node_ComponentBoundEvent_Bone' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, K2Node_ComponentBoundEvent_HitLocation) == 0x00001C, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::K2Node_ComponentBoundEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, K2Node_ComponentBoundEvent_StartLocation) == 0x000028, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::K2Node_ComponentBoundEvent_StartLocation' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, K2Node_ComponentBoundEvent_Instigator) == 0x000038, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::K2Node_ComponentBoundEvent_Instigator' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000040, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004C, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_ExecuteUbergraph_BreakableGlass, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'BreakableGlass_C_ExecuteUbergraph_BreakableGlass::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BreakableGlass.BreakableGlass_C.BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature final
{
public:
	int32                                         Amount;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Bone;                                              // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Instigator_0;                                      // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature) == 0x000008, "Wrong alignment on BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature");
static_assert(sizeof(BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature) == 0x000030, "Wrong size on BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature");
static_assert(offsetof(BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature, Amount) == 0x000000, "Member 'BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature::Amount' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature, Bone) == 0x000004, "Member 'BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature::Bone' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature, HitLocation) == 0x00000C, "Member 'BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature::HitLocation' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature, StartLocation) == 0x000018, "Member 'BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature::StartLocation' has a wrong offset!");
static_assert(offsetof(BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature, Instigator_0) == 0x000028, "Member 'BreakableGlass_C_BndEvt__BreakableGlass_DamageComponent_K2Node_ComponentBoundEvent_0_Damage__DelegateSignature::Instigator_0' has a wrong offset!");

}

