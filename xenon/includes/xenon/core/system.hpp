/**
 * @file system.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief System.
 * @details This file contains the system class.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <string>
#include <functional>

#include <spdlog/spdlog.h>

#include <xenon/utility/vec2.hpp>
#include <xenon/utility/vec3.hpp>
#include <xenon/models/enums/game_dimension.hpp>
#include <xenon/models/enums/rendering_type.hpp>
#include <xenon/models/enums/rendering_hook_type.hpp>
#include <xenon/models/enums/gameengine_type.hpp>
#include <xenon/models/enums/unityengine_type.hpp>
#include <xenon/models/enums/unrealengine_version.hpp>

/**
 * @brief System.
 * @details This class is responsible for the system.
 */
class System {
public:
	RenderingBackend g_renderingBackend = RenderingBackend::REND_NONE;

	intptr_t g_pUnityBase;
	intptr_t g_pUnityGameAssembly;
	intptr_t g_pUnityPlayer;

	float g_fStartPlayTime;
	float g_fDeltaTime;

	float m_fDistanceScale = 1;
	bool m_bCheckDistanceScale = false;

    /**
     * @brief World to screen 2D.
     */
	std::function<Vec2(Vec2)> m_fnW2S2D;

    /**
     * @brief World to screen 3D.
     */
	std::function<Vec2(Vec3)> m_fnW2S3D;

	std::function<Vec2(Vec2)> m_fnS2W2D;
	std::function<Vec2(Vec3)> m_fnS2W3D;

    /**
     * @brief Get the play time.
     * @return The play time.
     */
	float GetPlayTime() const;

    /**
     * @brief Get the screen resolution.
     * @return The screen resolution.
     */
	Vec2 GetScreenResolution();

    /**
     * @brief Get the screen center.
     * @return The screen center.
     */
	Vec2 GetScreenCenter();

    /**
     * @brief Get the mouse position.
     * @return The mouse position.
     */
	Vec2 GetMousePos();

    /**
     * @brief Set the app title.
     */
	void SetAppTitle(std::string title) {
		m_strAppTitle = title;
	}

    /**
     * @brief Get the app title.
     * @return The app title.
     */
	std::string* GetAppTitle() {
		return &m_strAppTitle;
	}

    /**
     * @brief Set if the cheat is internal.
     */
	void IsInternal(bool isInternal) {
		m_bIsInternal = isInternal;
	}

    /**
     * @brief Get if the cheat is internal.
     * @return True if the cheat is internal, false otherwise.
     */
	bool IsInternal() const {
		return m_bIsInternal;
	}

    /**
     * @brief Set if the game is Unity Engine.
     */
	void IsUnityEngine(UnityEngineType type) {
		if (!m_bIsInternal) {
			spdlog::warn("External cheat cannot change to Unity Engine.");
		}

		m_gameEngineType = GameEngineType::UNITY_ENGINE;
		m_unityEngineType = type;
	}

    /**
     * @brief Set if the game is Unreal Engine.
     */
	void IsUnrealEngine(UnrealEngineVersion version) {
		if (!m_bIsInternal) {
			spdlog::warn("External cheat cannot change to Unreal Engine.");
		}

		m_gameEngineType = GameEngineType::UNREAL_ENGINE;
		m_unrealEngineVersion = version;
	}

    /**
     * @brief Set the game dimension.
     */
	void SetGameDimension(GameDimension dim) {
		m_gameDimension = dim;
	}

    /**
     * @brief Get the game dimension.
     * @return The game dimension.
     */
	GameDimension GetGameDimension() const {
		return m_gameDimension;
	}

    /**
     * @brief Check if the game is 3D.
     * @return True if the game is 3D, false otherwise.
     */
	bool Is3DGame() const {
		return m_gameDimension == GameDimension::DIM_3D;
	}

 //   /**
 //    * @brief Set the rendering hook type.
 //    */
	//void SetRenderingHookType(RenderingHookType type) {

	//	if (!m_bIsInternal) {
	//		spdlog::warn("External cheat don't need this.");
	//	}

	//	m_renderingHookType = type;
	//}

 //   /**
 //    * @brief Get the rendering hook type.
 //    * @return The rendering hook type.
 //    */
	//RenderingHookType GetRenderingHookType() const {
	//	return m_renderingHookType;
	//}

    /**
     * @brief Set the rendering backend.
     */
	void SetRenderingBackend(RenderingBackend type) {

		if (!m_bIsInternal) {
			spdlog::warn("External cheat cannot change rendering backend, DX11 will be used.");
		}

		g_renderingBackend = type;
	}

private:
	std::string m_strAppTitle;
	bool m_bIsInternal;
	GameEngineType m_gameEngineType = GameEngineType::ENGINE_NONE;
	UnityEngineType m_unityEngineType = UnityEngineType::UNITY_NONE;
	UnrealEngineVersion m_unrealEngineVersion = UnrealEngineVersion::UNREAL_NONE;
	GameDimension m_gameDimension = GameDimension::DIM_NONE;
	//RenderingHookType m_renderingHookType = RenderingHookType::RENDERHOOK_NONE;

	void GetDesktopResolution(int& horizontal, int& vertical);

};