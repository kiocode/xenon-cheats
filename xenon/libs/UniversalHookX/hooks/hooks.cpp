#include <cstdio>
#include <mutex>
#include <thread>

#include "hooks.hpp"


#include "backend/opengl/hook_opengl.hpp"
#include "backend/vulkan/hook_vulkan.hpp"

#include "../utils/utils.hpp"

#include "backend/dx10/hook_directx10.hpp"
#include "backend/dx11/hook_directx11.hpp"
#include "backend/dx12/hook_directx12.hpp"
#include "backend/dx9/hook_directx9.hpp"

#include <minhook/include/MinHook.h>
#include <xenon/components/services/ui_service.hpp>

#include <spdlog/spdlog.h>

static HWND g_hWindow = NULL;
static std::mutex g_mReinitHooksGuard;
static WNDPROC oWndProc;
LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

typedef BOOL(WINAPI* SetCursorPos_t)(int X, int Y);
typedef BOOL(WINAPI* ClipCursor_t)(const RECT* lpRect);
static SetCursorPos_t oSetCursorPos = nullptr;
static ClipCursor_t oClipCursor = nullptr;

static BOOL WINAPI hkSetCursorPos(int X, int Y) {
    if (*CUIService::m_bShowMenu) {
        return TRUE;
    }
    return oSetCursorPos(X, Y);
}

static BOOL WINAPI hkClipCursor(const RECT* lpRect) {
    if (*CUIService::m_bShowMenu) {
        return oClipCursor(nullptr);
    }
    return oClipCursor(lpRect);
}

static DWORD WINAPI ReinitializeGraphicalHooks(LPVOID lpParam) {
    std::lock_guard<std::mutex> guard{g_mReinitHooksGuard};

    spdlog::info("[!] Hooks will reinitialize!\n");

    HWND hNewWindow = U::GetProcessWindow( );
    while (hNewWindow == reinterpret_cast<HWND>(lpParam)) {
        hNewWindow = U::GetProcessWindow( );
    }

    H::bShuttingDown = true;

    H::Free( );
    H::Init( );

    H::bShuttingDown = false;
    *CUIService::m_bShowMenu = true;

    return 0;
}

static LRESULT WINAPI WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (uMsg == WM_KEYDOWN) {
        if (wParam == VK_INSERT) {
            *CUIService::m_bShowMenu = !*CUIService::m_bShowMenu;
            ShowCursor(*CUIService::m_bShowMenu);
            if (!*CUIService::m_bShowMenu) {
                ClipCursor(nullptr);
            }
            return 0;
        } else if (wParam == VK_HOME) {
            HANDLE hHandle = CreateThread(NULL, 0, ReinitializeGraphicalHooks, NULL, 0, NULL);
            if (hHandle != NULL)
                CloseHandle(hHandle);
            return 0;
        } else if (wParam == VK_END) {
            H::bShuttingDown = true;
            U::UnloadDLL( );
            return 0;
        }
    } else if (uMsg == WM_DESTROY) {
        HANDLE hHandle = CreateThread(NULL, 0, ReinitializeGraphicalHooks, hWnd, 0, NULL);
        if (hHandle != NULL)
            CloseHandle(hHandle);
    }

    if (*CUIService::m_bShowMenu) {
        if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
            return true;

        switch (uMsg) {
            case WM_MOUSEMOVE:
            case WM_LBUTTONDOWN:
            case WM_LBUTTONUP:
            case WM_RBUTTONDOWN:
            case WM_RBUTTONUP:
            case WM_MBUTTONDOWN:
            case WM_MBUTTONUP:
            case WM_MOUSEWHEEL:
            case WM_MOUSEHWHEEL:
            case WM_XBUTTONDOWN:
            case WM_XBUTTONUP:
                return 0;
            case WM_SETCURSOR:
                SetCursor(LoadCursor(NULL, IDC_ARROW));
                return TRUE;
            case WM_KEYDOWN:
            case WM_KEYUP:
            case WM_SYSKEYDOWN:
            case WM_SYSKEYUP:
            case WM_CHAR:
                return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
            default:
                break;
        }
        return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
    }

    return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

namespace Hooks {
    void Init( ) {
        g_hWindow = U::GetProcessWindow( );

#ifdef DISABLE_LOGGING_CONSOLE
        bool bNoConsole = GetConsoleWindow( ) == NULL;
        if (bNoConsole) {
            AllocConsole( );
        }
#endif

        MH_Initialize( );

        MH_CreateHook(&SetCursorPos, &hkSetCursorPos, reinterpret_cast<LPVOID*>(&oSetCursorPos));
        MH_CreateHook(&ClipCursor, &hkClipCursor, reinterpret_cast<LPVOID*>(&oClipCursor));

        MH_EnableHook(&SetCursorPos);
        MH_EnableHook(&ClipCursor);

        RenderingBackend eRenderingBackend = U::GetRenderingBackend( );
        switch (eRenderingBackend) {
            case RenderingBackend::DIRECTX9:
                DX9::Hook(g_hWindow);
                break;
            case RenderingBackend::DIRECTX10:
                DX10::Hook(g_hWindow);
                break;
            case RenderingBackend::DIRECTX11:
                DX11::Hook(g_hWindow);
                break;
            case RenderingBackend::DIRECTX12:
                DX12::Hook(g_hWindow);
                break;
            case RenderingBackend::OPENGL:
                GL::Hook(g_hWindow);
                break;
            case RenderingBackend::VULKAN:
                VK::Hook(g_hWindow);
                break;
        }

#ifdef DISABLE_LOGGING_CONSOLE
        if (bNoConsole) {
            FreeConsole( );
        }
#endif

        oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));
    }

    void Free( ) {
        if (oWndProc) {
            SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(oWndProc));
        }

        MH_DisableHook(MH_ALL_HOOKS);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        RenderingBackend eRenderingBackend = U::GetRenderingBackend( );
        switch (eRenderingBackend) {
            case RenderingBackend::DIRECTX9:
                DX9::Unhook( );
                break;
            case RenderingBackend::DIRECTX10:
                DX10::Unhook( );
                break;
            case RenderingBackend::DIRECTX11:
                DX11::Unhook( );
                break;
            case RenderingBackend::DIRECTX12:
                DX12::Unhook( );
                break;
            case RenderingBackend::OPENGL:
                GL::Unhook( );
                break;
            case RenderingBackend::VULKAN:
                VK::Unhook( );
                break;
        }

        MH_Uninitialize( );
    }
} // namespace Hooks
