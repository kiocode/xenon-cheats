#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyInvisibleWomanCharacter

#include "Basic.hpp"

#include "Hero_1050_classes.hpp"


namespace SDK
{

// PythonClass PyInvisibleWomanCharacter.PyInvisibleWomanCharacter
// 0x0020 (0x1840 - 0x1820)
class APyInvisibleWomanCharacter : public AInvisibleWomanCharacter
{
public:
	int32                                         EnergyAbility;                                     // 0x1820(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1824[0x4];                                     // 0x1824(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarvelAbilityTargetActor_Projectile*   RegisteredProjectile_105051;                       // 0x1828(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnRegisteredProjectileChanged;                     // 0x1830(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void RegenSkillEnergy(float AddEnergy);
	void ResetShieldRegenValue(float NewValue);
	class AActor* GetCurrentShieldOnTarget(int32 ImmunityBuffID, class AActor* Target);
	void OnRegisteredProjectileChanged__DelegateSignature(class AMarvelAbilityTargetActor_Projectile* NewProjectile);
	class AMarvelAbilityTargetActor_Projectile* GetRegisteredProjectile_105051();
	void SetRegisteredProjectile_105051(class AMarvelAbilityTargetActor_Projectile* Projectile);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyInvisibleWomanCharacter">();
	}
	static class APyInvisibleWomanCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<APyInvisibleWomanCharacter>();
	}
};
static_assert(alignof(APyInvisibleWomanCharacter) == 0x000010, "Wrong alignment on APyInvisibleWomanCharacter");
static_assert(sizeof(APyInvisibleWomanCharacter) == 0x001840, "Wrong size on APyInvisibleWomanCharacter");
static_assert(offsetof(APyInvisibleWomanCharacter, EnergyAbility) == 0x001820, "Member 'APyInvisibleWomanCharacter::EnergyAbility' has a wrong offset!");
static_assert(offsetof(APyInvisibleWomanCharacter, RegisteredProjectile_105051) == 0x001828, "Member 'APyInvisibleWomanCharacter::RegisteredProjectile_105051' has a wrong offset!");
static_assert(offsetof(APyInvisibleWomanCharacter, OnRegisteredProjectileChanged) == 0x001830, "Member 'APyInvisibleWomanCharacter::OnRegisteredProjectileChanged' has a wrong offset!");

}

