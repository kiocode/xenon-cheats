#include <Windows.h>
#include <thread>
#include <dxgi.h>

#include "utils.hpp"
#include <spdlog/spdlog.h>

#define RB2STR(x) case x: return #x

EXTERN_C IMAGE_DOS_HEADER __ImageBase;

static RenderingBackend g_eRenderingBackend = RenderingBackend::REND_NONE;

static BOOL CALLBACK EnumWindowsCallback(HWND handle, LPARAM lParam) {
	const auto isMainWindow = [ handle ]( ) {
		return GetWindow(handle, GW_OWNER) == nullptr && IsWindowVisible(handle);
	};

	DWORD pID = 0;
	GetWindowThreadProcessId(handle, &pID);

	if (GetCurrentProcessId( ) != pID || !isMainWindow( ) || handle == GetConsoleWindow( ))
		return TRUE;

	*reinterpret_cast<HWND*>(lParam) = handle;

	return FALSE;
}

static DWORD WINAPI _UnloadDLL(LPVOID lpParam) {
    FreeLibraryAndExitThread(HookUtils::GetCurrentImageBase( ), 0);
	return 0;
}

namespace HookUtils {
	void SetRenderingBackend(RenderingBackend eRenderingBackground) {
		g_eRenderingBackend = eRenderingBackground;
	}

	RenderingBackend GetRenderingBackend() {
		return g_eRenderingBackend;
	}

	const char* RenderingBackendToStr( ) {
		RenderingBackend eRenderingBackend = GetRenderingBackend( );

		switch (eRenderingBackend) {
			RB2STR(DIRECTX9);
			RB2STR(DIRECTX10);
			RB2STR(DIRECTX11);
			RB2STR(DIRECTX12);

			RB2STR(OPENGL);
			RB2STR(VULKAN);
		}

		return "NONE/UNKNOWN";
	}

	bool printed = false;
	HWND GetProcessWindow( ) {
		HWND hwnd = nullptr;
		EnumWindows(::EnumWindowsCallback, reinterpret_cast<LPARAM>(&hwnd));

		while (!hwnd) {
			EnumWindows(::EnumWindowsCallback, reinterpret_cast<LPARAM>(&hwnd));
			spdlog::info("[!] Waiting for window to appear.\n");
			std::this_thread::sleep_for(std::chrono::milliseconds(200));
		}

		char name[128];
		GetWindowTextA(hwnd, name, RTL_NUMBER_OF(name));
        if (!printed) {   
			spdlog::info("[+] Got window with name: '{}'", name);
			printed = true;
		}

		return hwnd;
	}

	void UnloadDLL( ) {
		HANDLE hThread = CreateThread(NULL, 0, _UnloadDLL, NULL, 0, NULL);
		if (hThread != NULL) CloseHandle(hThread);
	}

	HMODULE GetCurrentImageBase( ) {
		return (HINSTANCE)(&__ImageBase);
	}

	int GetCorrectDXGIFormat(int eCurrentFormat) {
		switch (eCurrentFormat) {
			case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB: return DXGI_FORMAT_R8G8B8A8_UNORM;
		}

		return eCurrentFormat;
	}
}
