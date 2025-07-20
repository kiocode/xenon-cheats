#include "../../../backend.hpp"

#ifdef ENABLE_BACKEND_OPENGL
#include <Windows.h>

#include <memory>

#include "hook_opengl.hpp"

#include <imgui/imgui_impl_opengl3.h>
#include <imgui/imgui_impl_win32.h>
#include <minhook/include/MinHook.h>
#include <xenon/components/services/ui_service.hpp>

#include <spdlog/spdlog.h>

#include "../../hooks.hpp"

static std::add_pointer_t<BOOL WINAPI(HDC)> oWglSwapBuffers;
static BOOL WINAPI hkWglSwapBuffers(HDC Hdc) {
    if (!H::bShuttingDown && ImGui::GetCurrentContext( )) {
        if (!ImGui::GetIO( ).BackendRendererUserData)
            ImGui_ImplOpenGL3_Init( );

        ImGui_ImplOpenGL3_NewFrame( );
        ImGui_ImplWin32_NewFrame( );
        ImGui::NewFrame( );

        CUIService::Render( );

        ImGui::Render( );
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData( ));
    }

    return oWglSwapBuffers(Hdc);
}

namespace GL {
    void Hook(HWND hwnd) {
        HMODULE openGL32 = GetModuleHandleA("opengl32.dll");
        if (openGL32) {
            spdlog::info("[+] OpenGL32: ImageBase: {:p}", static_cast<void*>(openGL32));

            void* fnWglSwapBuffers = reinterpret_cast<void*>(GetProcAddress(openGL32, "wglSwapBuffers"));
            if (fnWglSwapBuffers) {
                CUIService::InitializeContext(hwnd);

                // Hook
                spdlog::info("[+] OpenGL32: fnWglSwapBuffers: {:p}", static_cast<void*>(fnWglSwapBuffers));

                static MH_STATUS wsbStatus = MH_CreateHook(reinterpret_cast<void**>(fnWglSwapBuffers), &hkWglSwapBuffers, reinterpret_cast<void**>(&oWglSwapBuffers));

                MH_EnableHook(fnWglSwapBuffers);
            }
        }
    }

    void Unhook( ) {
        if (ImGui::GetCurrentContext( )) {
            if (ImGui::GetIO( ).BackendRendererUserData)
                ImGui_ImplOpenGL3_Shutdown( );

            if (ImGui::GetIO( ).BackendPlatformUserData)
                ImGui_ImplWin32_Shutdown( );

            ImGui::DestroyContext( );
        }
    }
} // namespace GL
#else
#include <Windows.h>
namespace GL {
    void Hook(HWND hwnd) { spdlog::info("[!] OpenGL backend is not enabled!\n"); }
    void Unhook( ) { }
} // namespace GL
#endif
