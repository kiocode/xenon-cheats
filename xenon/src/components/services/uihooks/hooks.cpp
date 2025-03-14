#include <mutex>
#include <thread>

#include <xenon/components/services/uihooks/hooks.hpp>

#include <xenon/components/services/uihooks/backends/hook_directx9.hpp>
#include <xenon/components/services/uihooks/backends/hook_directx10.hpp>
#include <xenon/components/services/uihooks/backends/hook_directx11.hpp>
#include <xenon/components/services/uihooks/backends/hook_directx12.hpp>
                                                   
#include <xenon/components/services/uihooks/backends/hook_opengl.hpp>
#include <xenon/components/services/uihooks/backends/hook_vulkan.hpp>

#include <minhook/include/MinHook.h>
#include <spdlog/spdlog.h>

static HWND g_hWindow = NULL;
static std::mutex g_mReinitHooksGuard;

void Hooks::Init( ) {
    g_hWindow = U::GetProcessWindow( );

#ifdef DISABLE_LOGGING_CONSOLE
    bool bNoConsole = GetConsoleWindow( ) == NULL;
    if (bNoConsole) {
        AllocConsole( );
    }
#endif

    RenderingBackend_t eRenderingBackend = U::GetRenderingBackend( );
    switch (eRenderingBackend) {
        case DIRECTX9:
            DX9::Hook(g_hWindow);
            break;
        case DIRECTX10:
            DX10::Hook(g_hWindow);
            break;
        case DIRECTX11:
            DX11::Hook(g_hWindow);
            break;
        case DIRECTX12:
            DX12::Hook(g_hWindow);
            break;
        case OPENGL:
            GL::Hook(g_hWindow);
            break;
        case VULKAN:
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


