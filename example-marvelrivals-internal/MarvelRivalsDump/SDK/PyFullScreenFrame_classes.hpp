#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyFullScreenFrame

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyFullScreenFrame.PyFullScreenFrame
// 0x0000 (0x05F0 - 0x05F0)
class UPyFullScreenFrame : public UPyMarvelUserWidget
{
public:
	void OnViewportChanged();
	void Destruct();
	void Construct();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyFullScreenFrame">();
	}
	static class UPyFullScreenFrame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyFullScreenFrame>();
	}
};
static_assert(alignof(UPyFullScreenFrame) == 0x000008, "Wrong alignment on UPyFullScreenFrame");
static_assert(sizeof(UPyFullScreenFrame) == 0x0005F0, "Wrong size on UPyFullScreenFrame");

}

