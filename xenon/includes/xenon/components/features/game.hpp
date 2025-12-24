/**
 * @file game.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon Game Header File
 * @details This file contains the definition of the Game class, which is responsible for handling game-related functionality in the Xenon cheat engine.
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <string>
#include <chrono>
#include <dxgi.h>

#include <xenon/utility/vec2.hpp>
#include <spdlog/spdlog.h>

#include <xenon/utility/vec3.hpp>
#include <xenon/core/xenon_core.hpp>
#include <xenon/core/xenon_config.hpp>
#include <xenon/core/xenon_variables.hpp>
#include <xenon/components/component.hpp>

/**
 * @brief A class that represents the game functionality in the Xenon cheat engine.
 * 
 */
class Game {
public:

    Game(
        std::shared_ptr<Xenon> pXenon,
        std::shared_ptr<XenonConfig> pXenonConfigs,
        std::shared_ptr<XenonVariables> pXenonVariables,
        std::vector<std::shared_ptr<CComponent>> pComponents
    ) : m_pComponents(pComponents) {
        m_pXenon = pXenon;
		m_pXenonVariables = pXenonVariables;
		m_pXenonConfigs = pXenonConfigs;
        m_bRenderUI = &m_pXenonVariables->g_bRenderUI;
        m_pUIService = m_pXenon->g_cUIService;
        UpdateWrapper = std::bind(&Game::Update, this);
    }

    /**
     * @brief Enable the update loop for the game.
     * 
     */
    void EnableUpdate(HINSTANCE hinstDLL); // internal
    void EnableUpdate(); // external

    /**
     * @brief Used to intercept the update loop of the game and update your data like targets position, health, etc.
     * 
     * @param eventName The name of the event to trigger. (es. "Update")
     * @param callback The callback function to execute when the event is triggered.
     */
    void OnEvent(const std::string& eventName, const std::function<void()>& callback) {
        updateCallbacks[eventName].push_back(callback);
    }

    /**
     * @brief Trigger the event with the given name. This will execute all the callbacks associated with the event.
     * 
     * @param eventName The name of the event to trigger. (es. "Update")
     */
    void TriggerEvent(const std::string& eventName) {
        //__try {
        auto it = updateCallbacks.find(eventName);
        if (it != updateCallbacks.end()) {
            for (const auto& callback : it->second) {
                callback();
            }
        }
        else {
            throw std::runtime_error("Event '" + eventName + "' not found");
        }
  /*      }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            spdlog::error("[!] Exception in event '{}'", eventName);
        }*/
    }

    /**
     * @brief Used to intercept the update loop of the game and update your data like targets position, health, etc.
     * 
     * @param eventName The name of the event to trigger. (es. "Update")
     * @param callback The callback function to execute when the event is triggered.
     */
    void OnEvent(const std::string& eventName, const std::function<void(TargetProfile* target)>& callback) {
        updateCurrentTargetCallbacks[eventName].push_back(callback);
    }

    /**
     * @brief Trigger the event with the given name. This will execute all the callbacks associated with the event.
     * 
     * @param eventName The name of the event to trigger. (es. "Update")
     * @param target The target profile to pass to the callback function.
     */
    void TriggerEvent(const std::string& eventName, TargetProfile* target) {
        if (updateCurrentTargetCallbacks.find(eventName) != updateCurrentTargetCallbacks.end()) {
            for (const auto& callback : updateCurrentTargetCallbacks[eventName]) {
                callback(target);
            }
        }
    }

    /**
     * @brief Clear the event with the given name. This will remove all the callbacks associated with the event.
     * 
     * @param eventName The name of the event to clear. (es. "Update")
     */
    void ClearEvent(const std::string& eventName) {
        updateCallbacks.erase(eventName);
        updateCurrentTargetCallbacks.erase(eventName);
    }

private:

    std::unordered_map<std::string, std::vector<std::function<void()>>> updateCallbacks;

    std::unordered_map<std::string, std::vector<std::function<void(TargetProfile* target)>>> updateCurrentTargetCallbacks;

	inline static std::shared_ptr<Xenon> m_pXenon = nullptr;
    inline static std::shared_ptr<XenonVariables> m_pXenonVariables = nullptr;
    inline static std::shared_ptr<XenonConfig> m_pXenonConfigs = nullptr;

    std::vector<std::shared_ptr<CComponent>> m_pComponents;

    void Update();

    void HandleShortcuts();

    //static HRESULT __stdcall BindForInternal(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
    static DWORD WINAPI BindForInternal(LPVOID lpParam);
	static DWORD WINAPI OnCheatLoop(LPVOID lpParam);

    void BindForExternal();

    inline static bool m_bInit = false;

    inline static bool* m_bRenderUI = nullptr;

    inline static std::shared_ptr<CUIService> m_pUIService = nullptr;

    inline static std::function<void()> UpdateWrapper;
};
