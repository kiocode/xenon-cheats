#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_League_SignUpConfirm

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_League_SignUpConfirm.PyWidget_League_SignUpConfirm
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_League_SignUpConfirm final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_SignUpConfirm">();
	}
	static class UPyWidget_League_SignUpConfirm* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_SignUpConfirm>();
	}
};
static_assert(alignof(UPyWidget_League_SignUpConfirm) == 0x000008, "Wrong alignment on UPyWidget_League_SignUpConfirm");
static_assert(sizeof(UPyWidget_League_SignUpConfirm) == 0x0005F0, "Wrong size on UPyWidget_League_SignUpConfirm");

// PythonClass PyWidget_League_SignUpConfirm.PyWidget_League_SignUp_SecondaryConfirm
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_League_SignUp_SecondaryConfirm final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_SignUp_SecondaryConfirm">();
	}
	static class UPyWidget_League_SignUp_SecondaryConfirm* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_SignUp_SecondaryConfirm>();
	}
};
static_assert(alignof(UPyWidget_League_SignUp_SecondaryConfirm) == 0x000008, "Wrong alignment on UPyWidget_League_SignUp_SecondaryConfirm");
static_assert(sizeof(UPyWidget_League_SignUp_SecondaryConfirm) == 0x0005F0, "Wrong size on UPyWidget_League_SignUp_SecondaryConfirm");

// PythonClass PyWidget_League_SignUpConfirm.PyWidget_League_RejectSignUp_SecondaryConfirm
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_League_RejectSignUp_SecondaryConfirm final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_RejectSignUp_SecondaryConfirm">();
	}
	static class UPyWidget_League_RejectSignUp_SecondaryConfirm* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_RejectSignUp_SecondaryConfirm>();
	}
};
static_assert(alignof(UPyWidget_League_RejectSignUp_SecondaryConfirm) == 0x000008, "Wrong alignment on UPyWidget_League_RejectSignUp_SecondaryConfirm");
static_assert(sizeof(UPyWidget_League_RejectSignUp_SecondaryConfirm) == 0x0005F0, "Wrong size on UPyWidget_League_RejectSignUp_SecondaryConfirm");

// PythonClass PyWidget_League_SignUpConfirm.PyWidget_League_Flag
// 0x0000 (0x05F0 - 0x05F0)
class UPyWidget_League_Flag final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_Flag">();
	}
	static class UPyWidget_League_Flag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_Flag>();
	}
};
static_assert(alignof(UPyWidget_League_Flag) == 0x000008, "Wrong alignment on UPyWidget_League_Flag");
static_assert(sizeof(UPyWidget_League_Flag) == 0x0005F0, "Wrong size on UPyWidget_League_Flag");

// PythonClass PyWidget_League_SignUpConfirm.PyWidget_League_SignUpTag
// 0x0018 (0x0608 - 0x05F0)
class UPyWidget_League_SignUpTag final : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               SizeBox_Icon;                                      // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                               SizeBox_Icon2;                                     // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMarvelTextBlock*                       Text_Tag;                                          // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_League_SignUpTag">();
	}
	static class UPyWidget_League_SignUpTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_League_SignUpTag>();
	}
};
static_assert(alignof(UPyWidget_League_SignUpTag) == 0x000008, "Wrong alignment on UPyWidget_League_SignUpTag");
static_assert(sizeof(UPyWidget_League_SignUpTag) == 0x000608, "Wrong size on UPyWidget_League_SignUpTag");
static_assert(offsetof(UPyWidget_League_SignUpTag, SizeBox_Icon) == 0x0005F0, "Member 'UPyWidget_League_SignUpTag::SizeBox_Icon' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_SignUpTag, SizeBox_Icon2) == 0x0005F8, "Member 'UPyWidget_League_SignUpTag::SizeBox_Icon2' has a wrong offset!");
static_assert(offsetof(UPyWidget_League_SignUpTag, Text_Tag) == 0x000600, "Member 'UPyWidget_League_SignUpTag::Text_Tag' has a wrong offset!");

}

