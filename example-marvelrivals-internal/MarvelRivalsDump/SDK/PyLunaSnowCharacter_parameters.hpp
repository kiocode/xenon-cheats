#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyLunaSnowCharacter

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyLunaSnowCharacter.PyLunaSnowChildActor.OnGenericGameplayTagUpdate
// 0x0010 (0x0010 - 0x0000)
struct PyLunaSnowChildActor_OnGenericGameplayTagUpdate final
{
public:
	struct FGameplayTag                           InTag;                                             // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyLunaSnowChildActor_OnGenericGameplayTagUpdate) == 0x000004, "Wrong alignment on PyLunaSnowChildActor_OnGenericGameplayTagUpdate");
static_assert(sizeof(PyLunaSnowChildActor_OnGenericGameplayTagUpdate) == 0x000010, "Wrong size on PyLunaSnowChildActor_OnGenericGameplayTagUpdate");
static_assert(offsetof(PyLunaSnowChildActor_OnGenericGameplayTagUpdate, InTag) == 0x000000, "Member 'PyLunaSnowChildActor_OnGenericGameplayTagUpdate::InTag' has a wrong offset!");
static_assert(offsetof(PyLunaSnowChildActor_OnGenericGameplayTagUpdate, Count) == 0x00000C, "Member 'PyLunaSnowChildActor_OnGenericGameplayTagUpdate::Count' has a wrong offset!");

}

