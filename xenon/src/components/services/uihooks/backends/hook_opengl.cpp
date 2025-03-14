#include <Windows.h>

#include <memory>

#include <xenon/components/services/uihooks/backends/hook_opengl.hpp>

#include <imgui/imgui_impl_opengl3.h>
#include <imgui/imgui_impl_win32.h>
#include <minhook/include/MinHook.h>
#include <spdlog/spdlog.h>
#include <xenon/components/services/uihooks/hooks.hpp>

BOOL WINAPI GL::hkWglSwapBuffers(HDC Hdc) {
    if (ImGui::GetCurrentContext()) {
        if (!ImGui::GetIO( ).BackendRendererUserData)
            ImGui_ImplOpenGL3_Init();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        Menu::Render();

        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    }

    return oWglSwapBuffers(Hdc);
}

void GL::ExecHook(HWND hwnd) {
    HMODULE openGL32 = GetModuleHandleA("opengl32.dll");
    if (openGL32) {
        spdlog::info("OpenGL32: ImageBase: 0x{:X}", reinterpret_cast<uintptr_t>(openGL32));

        void* fnWglSwapBuffers = reinterpret_cast<void*>(GetProcAddress(openGL32, "wglSwapBuffers"));
        if (fnWglSwapBuffers) {
            Menu::InitializeContext(hwnd);

            // Hook
            spdlog::info("OpenGL32: fnWglSwapBuffers: 0x{:X}", reinterpret_cast<uintptr_t>(fnWglSwapBuffers));

            static MH_STATUS wsbStatus = MH_CreateHook(reinterpret_cast<void**>(fnWglSwapBuffers), &hkWglSwapBuffers, reinterpret_cast<void**>(&oWglSwapBuffers));

            MH_EnableHook(fnWglSwapBuffers);
        }
    }
}