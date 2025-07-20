/**
 * @file ui_service.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief UI service component.
 * @details This component is responsible for rendering the UI.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <memory>
#include <Windows.h>
#include <d3d11.h>
#include <d3d12.h>
#include <dxgi.h>

#include <imgui/imgui.h>
#include <imgui/imgui_impl_win32.h>
#include <imgui/imgui_impl_dx11.h>
#include <imgui/imgui_impl_dx12.h>
#include <imgui/imgui_impl_opengl2.h>
#include <imgui/imgui_impl_opengl3.h>

#include <xenon/components/component.hpp>
#include <xenon/core/system.hpp>

#include <xenon/models/hotkey.hpp>
#include <xenon/utility/imgui_helper.hpp>

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
//typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
//typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

enum Tabs {
    AIM = 0,
    VISUALS,
    RADAR,
    MISC,
    DEV,
    NUM_TABS
};

enum SubTabs {
    SETTINGS = 0,
    COLORS,
};

/**
 * @brief UI service component.
 * @details This component is responsible for rendering the UI.
 * 
 */
class CUIService : public CComponent {
public:

    Hotkey testhotkey;
    bool isEditing = false;

    inline static bool* m_bShowMenu = nullptr;
    inline static std::shared_ptr<System> m_pSystem = nullptr;
    //inline static WNDPROC* m_pOWndProc = nullptr;
    // 
    //Present oPresent = NULL;
    //WNDPROC oWndProc = NULL;

    /**
     * @brief Initialize the UI service.
     */
    void Init() override {
        m_bShowMenu = &g_pXenonVariables->g_bShowMenu;
        m_pSystem = g_pXenon->g_pSystem;
        //m_pOWndProc = &oWndProc;
    }

    inline static void InitializeContext(HWND hwnd) {
        if (ImGui::GetCurrentContext())
            return;

        ImGui::CreateContext();
        ImGui_ImplWin32_Init(hwnd);

        ImGuiIO& io = ImGui::GetIO();
        io.IniFilename = io.LogFilename = nullptr;
    }

    /**
     * @brief Initialize the present function.
     * @param pSwapChain Swap chain.
     * @return True if the present function was initialized, false otherwise.
     */
    //bool InitPresent(IDXGISwapChain* pSwapChain);

    /**
     * @brief Initialize the external function.
     */
    void InitExternal();

    /**
     * @brief Update the UI.
     */
    static void UpdateUI();

    /**
     * @brief Destroy the UI.
     */
    void Destroy();

    /**
     * @brief Begin render the UI.
     */
    //void BeginRenderUI();

    /**
     * @brief End render the UI.
     */
    //void EndRenderUI();

    /**
     * @brief Set the menu open.
     */
    static void SetMenuOpen();

    /**
     * @brief Set the menu close.
     */
    static void SetMenuClose();

    /**
     * @brief Create the ImGui UI.
     */
    void CreateImGuiUI();

    /**
     * @brief Render the crosshair.
     */
    static void RenderCrosshair();

    /**
     * @brief Render the FOV.
     */
    static void RenderFov();

    /**
     * @brief Render the enabled cheats.
     */
    static void RenderEnabledCheats();

    /**
     * @brief Update the UI.
     */
    static void Render();

private:

    inline static HWND m_hWindow = NULL; 
    WNDCLASSEXW m_wClass{}; 
    IDXGISwapChain* m_pSwapChain = nullptr;
    D3D_FEATURE_LEVEL m_dLevel{}; 

    ID3D11Device* m_pDeviceDX11 = nullptr;
    ID3D11DeviceContext* m_pContextDX11 = nullptr;
    ID3D11RenderTargetView* m_pMainRenderTargetViewDX11 = nullptr;

    //ID3D12Device* m_pDeviceDX12 = nullptr; 
    //ID3D12DescriptorHeap* m_pDescriptorHeapImGuiRender;
    //uint8_t m_nBuffersCounts = -1;

    ID3D11DepthStencilState* m_pNoDepthStencilStateDX11 = nullptr;
    ID3D11DepthStencilState* m_pDefaultDepthStencilStateDX11 = nullptr; 

    inline static ImFont* m_pMainFont = nullptr;
    inline static ImFont* m_pBiggerMainFont = nullptr;
    inline static int m_nSelectedTab = 0;
    inline static int m_nSelectedSubTab = 0;
     
    inline static bool m_bDevTab = false;

    static LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

    static void RenderFovLine(float offset);

    void InitializeDepthStencilStates();

    static void LoadDefaultFonts();

    bool CreateWindowUI();

    bool CreateDeviceUI();

    static void RenderDefaultTheme(bool rainbowBorders);

    static void RenderDefaultUIQuickActions();

    static void RenderDefaultMenu();

    static void RenderMouse();

    //void ResetDeviceUI();

    void DestroyWindowUI();

    void DestroyDeviceUI();

    void DestroyImGuiUI();
};
