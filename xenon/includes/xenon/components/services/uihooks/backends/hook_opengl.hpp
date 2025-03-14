#pragma once

#include <xenon/components/services/uihooks/hook.hpp>

class GL : Hook {
public:
	void ExecHook(HWND hwnd) override;
private:
	static std::add_pointer_t<BOOL WINAPI(HDC)> oWglSwapBuffers;
	static BOOL WINAPI hkWglSwapBuffers(HDC Hdc);
};
