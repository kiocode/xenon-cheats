#pragma once
#include <Windows.h>

class Hook {
public:
	virtual void ExecHook(HWND hwnd) = 0;
	//void Unhook();
};