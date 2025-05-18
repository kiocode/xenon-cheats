/**
 * @file cheat.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Cheat.
 * @details This file contains the cheat class.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <memory>

#include <spdlog/spdlog.h>

#include <xenon/models/enums/rendering_hook_type.hpp>
#include <xenon/models/enums/unrealengine_version.hpp>
#include <xenon/models/enums/unityengine_type.hpp>
#include <xenon/components/features/game.hpp>
#include <xenon/components/services/notification_service.hpp>

#include <xenon/core/system.hpp>

#include <xenon/core/xenon_config.hpp>
#include <xenon/core/xenon_variables.hpp>
#include <xenon/core/xenon_core.hpp>

/**
 * @brief Cheat.
 * @details This class is responsible for the cheat.
 */
class Cheat {
public:

    Cheat(
        std::shared_ptr<Xenon> pXenon,
        std::shared_ptr<XenonVariables> pXenonVariables,
        std::shared_ptr<Game> pGame
    ) : m_pXenon(pXenon), m_pXenonVariables(pXenonVariables), m_pGame(pGame) { }

    /**
     * @brief Use the update.
     */
    void UseUpdate() {

        m_pXenonVariables->g_bUpdate = true;

        spdlog::info("Update is enabled");
    }

    /**
     * @brief Use the custom UI.
     * @param renderingHookType Rendering hook type.
     * @param renderingType Rendering type.
     */
    void UseUICustom(RenderingHookType renderingHookType, RenderingBackend renderingType) {

        if (!m_pXenon->g_pSystem->IsInternal()) {
            spdlog::warn("Rendering hook type is not necessary if the cheat is External");;
        }
        else {
            if (renderingHookType == RenderingHookType::RENDERHOOK_NONE) {
				spdlog::error("Rendering hook type must be specified if the cheat is Internal");
				return;
			}

            if (renderingType == RenderingBackend::REND_NONE) {
                spdlog::error("Rendering type must be specified if the cheat is Internal");
				return;
            }
        }

        m_pXenon->g_pSystem->SetRenderingHookType(renderingHookType);
        m_pXenon->g_pSystem->SetRenderingBackend(renderingType);
        m_pXenonVariables->g_bRenderUI = true;

        spdlog::info("Custom UI is enabled");
    }

    /**
     * @brief Use the custom UI.
     */
    void UseUICustom() {

        if (m_pXenon->g_pSystem->IsInternal()) {
            spdlog::error("Rendering hook type must be specified if the cheat is Internal");
            return;
        }

        m_pXenonVariables->g_bRenderUI = true;

        spdlog::info("Custom UI is enabled");
    }

    /**
     * @brief Use the aimbot.
     */
    void UseAimbot() {

        m_pXenonVariables->g_bAimbot = true;

        spdlog::info("Aimbot is enabled");
    }

    /**
     * @brief Use the fov.
     */
    void UseFov() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("Fov can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bFov = true;

        spdlog::info("Fov is enabled");
    }

    /**
     * @brief Use the no recoil.
     */
    void UseNoRecoil() {

        m_pXenonVariables->g_bNoRecoil = true;

        spdlog::info("Recoil is enabled");
    }

    /**
     * @brief Use the 2D spinbot.
     */
    void Use2DSpinbot() {

        m_pXenonVariables->g_bSpinbot2D = true;

        spdlog::info("Spinbot 2D is enabled");
    }

    /**
     * @brief Use the 3D spinbot.
     */
    void Use3DSpinbot() {

        m_pXenonVariables->g_bSpinbot3D = true;

        spdlog::info("Spinbot 3D is enabled");
    }

    /**
     * @brief Use the radar.
     */
    void UseUIRadar() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("UI Radar can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bRadar = true;

        spdlog::info("UI Radar is enabled");

    }

    /**
     * @brief Use the menu.
     */
    void UseUIMenu() {
        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("UI Menu can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bMenu = true;

        spdlog::info("UI Menu is enabled");

    }

    /**
     * @brief Use the render mouse.
     */
    void UseUIRenderMouse() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("UI Custom Draw List can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bRenderMouse = true;

        spdlog::info("UI Custom Draw List of Mouse is enabled");
    }

    /**
     * @brief Use the render windows.
     */
    void UseUIRenderWindows() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("UI Custom Draw List can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bRenderWindows = true;

        spdlog::info("UI Custom Draw List of Windows is enabled");

    }

    /**
     * @brief Use the render overlays.
     */
    void UseUIRenderOverlays() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("UI Custom Draw List can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bRenderOverlays = true;

        spdlog::info("UI Custom Draw List of Overlay is enabled");

    }

    /**
     * @brief Use the render enabled cheats.
     */
    void UseUIRenderEnabledCheats() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("UI Show Enabled Cheats can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bRenderEnabledCheats = true;

        spdlog::info("UI Show Enabled Cheats is enabled");

    }

    /**
     * @brief Use the UI quick actions.
     */
    void UseUIQuickActions() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("UI Quick Actions can only be used with Custom UI");
            return;
        }

        m_pXenonVariables->g_bRenderQuickActions = true;

        spdlog::info("UI Quick Actions is enabled");

    }

    /**
     * @brief Use the ESP snapline.
     */
    void UseESPSnapline() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("Snapline ESP can only be used with Custom UI");
            return;
        }

        if (!m_pXenonVariables->g_bEsp) {
            m_pXenonVariables->g_bEsp = true;
        }

        m_pXenonVariables->g_bSnapline = true;

        spdlog::info("Snapline ESP is enabled");

    }

    /**
     * @brief Use the ESP box 2D.
     */
    void UseESPBox2D() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("2D Box ESP can only be used with Custom UI");
            return;
        }

        if (!m_pXenonVariables->g_bEsp) {
            m_pXenonVariables->g_bEsp = true;
        }

        m_pXenonVariables->g_bBox2D = true;

        spdlog::info("2D Box ESP is enabled");
    }

    /**
     * @brief Use the ESP box 3D.
     */
    void UseESPBox3D() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("3D Box ESP can only be used with Custom UI");
            return;
        }

        if (!m_pXenonVariables->g_bEsp) {
            m_pXenonVariables->g_bEsp = true;
        }

        m_pXenonVariables->g_bBox3D = true;

        spdlog::info("3D Box ESP is enabled");
    }

    /**
     * @brief Use the ESP skeleton.
     */
    void UseESPSkeleton() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("Skeleton ESP can only be used with Custom UI");
            return;
        }

        if (!m_pXenonVariables->g_bEsp) {
            m_pXenonVariables->g_bEsp = true;
        }

        m_pXenonVariables->g_bSkeleton = true;

        spdlog::info("Skeleton ESP is enabled");
    }

    /**
     * @brief Use the ESP health bar.
     */
    void UseESPHealthBar() {

        if (!m_pXenonVariables->g_bRenderUI) {
            spdlog::error("Health Bar ESP can only be used with Custom UI");
            return;
        }

        if (!m_pXenonVariables->g_bEsp) {
            m_pXenonVariables->g_bEsp = true;
        }

        m_pXenonVariables->g_bHealthBar = true;

        spdlog::info("Health Bar ESP is enabled");
    }

    /**
     * @brief Run the cheat.
     */
    void Run();

    /**
     * @brief Fetch the SDK if game is il2cpp Unity.
     * @return True if the SDK was fetched, false otherwise.
     */
    bool FetchSDK() const {

        m_pXenon->g_pSystem->g_pUnityBase = (intptr_t)GetModuleHandle(NULL);
        if (m_pXenon->g_pSystem->g_pUnityBase == 0) {
            //spdlog::error("Failed to get base address");
            return false;
        }

        m_pXenon->g_pSystem->g_pUnityGameAssembly = (intptr_t)GetModuleHandleW(L"GameAssembly.dll");
        if (m_pXenon->g_pSystem->g_pUnityGameAssembly == 0) {
            //spdlog::error("Failed to get GameAssembly address");
            return false;
        }

        m_pXenon->g_pSystem->g_pUnityPlayer = (intptr_t)GetModuleHandleW(L"UnityPlayer.dll");
        if (m_pXenon->g_pSystem->g_pUnityPlayer == 0) {
            //spdlog::error("Failed to get UnityPlayer address");
            return false;
        }

        return true;

    }

private:
    std::shared_ptr<Xenon> m_pXenon;
    std::shared_ptr<XenonVariables> m_pXenonVariables;
    std::shared_ptr<Game> m_pGame;
};