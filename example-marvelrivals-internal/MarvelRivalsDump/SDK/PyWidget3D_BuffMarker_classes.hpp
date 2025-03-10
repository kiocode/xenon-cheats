#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget3D_BuffMarker

#include "Basic.hpp"

#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "DeclarativeUnreal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget3D_BuffMarker.PyWidget3D_BuffMarker
// 0x0210 (0x0AB0 - 0x08A0)
#pragma pack(push, 0x1)
class alignas(0x10) UPyWidget3D_BuffMarker : public UMarvel3DWidget
{
public:
	uint8                                         Pad_898[0x8];                                      // 0x0898(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDeclarationHolder                     ViewTargetWatcher;                                 // 0x08A0(0x0010)(NativeAccessSpecifierPublic)
	struct FBuffDurationSubscribeHandle           BuffDurationBindHandle;                            // 0x08B0(0x0040)(NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                            Brush_Normal;                                      // 0x08F0(0x00D0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                            Brush_Frame;                                       // 0x09C0(0x00D0)(Edit, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture_Normal;                                    // 0x0A90(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             Texture_Frame;                                     // 0x0A98(0x0008)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisibleForBuffTarget;                             // 0x0AA0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisibleForBuffInstigator;                         // 0x0AA1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsShowCountdown;                                   // 0x0AA2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void MarvelVisibilityChanged();
	bool ShouldBeVisible();
	void OwnerCueWhileActive();
	void OwnerCueActiveChanged();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget3D_BuffMarker">();
	}
	static class UPyWidget3D_BuffMarker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget3D_BuffMarker>();
	}
};
#pragma pack(pop)
static_assert(alignof(UPyWidget3D_BuffMarker) == 0x000010, "Wrong alignment on UPyWidget3D_BuffMarker");
static_assert(sizeof(UPyWidget3D_BuffMarker) == 0x000AB0, "Wrong size on UPyWidget3D_BuffMarker");
static_assert(offsetof(UPyWidget3D_BuffMarker, ViewTargetWatcher) == 0x0008A0, "Member 'UPyWidget3D_BuffMarker::ViewTargetWatcher' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, BuffDurationBindHandle) == 0x0008B0, "Member 'UPyWidget3D_BuffMarker::BuffDurationBindHandle' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, Brush_Normal) == 0x0008F0, "Member 'UPyWidget3D_BuffMarker::Brush_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, Brush_Frame) == 0x0009C0, "Member 'UPyWidget3D_BuffMarker::Brush_Frame' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, Texture_Normal) == 0x000A90, "Member 'UPyWidget3D_BuffMarker::Texture_Normal' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, Texture_Frame) == 0x000A98, "Member 'UPyWidget3D_BuffMarker::Texture_Frame' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, bVisibleForBuffTarget) == 0x000AA0, "Member 'UPyWidget3D_BuffMarker::bVisibleForBuffTarget' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, bVisibleForBuffInstigator) == 0x000AA1, "Member 'UPyWidget3D_BuffMarker::bVisibleForBuffInstigator' has a wrong offset!");
static_assert(offsetof(UPyWidget3D_BuffMarker, IsShowCountdown) == 0x000AA2, "Member 'UPyWidget3D_BuffMarker::IsShowCountdown' has a wrong offset!");

}

