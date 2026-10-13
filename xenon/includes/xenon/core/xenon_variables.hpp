/**
 * @file xenon_variables.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon variables.
 * @details This file contains the xenon variables class.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <xenon/models/enums/rendering_hook_type.hpp>

#include <winuser.rh>

/**
 * @brief Xenon variables.
 * @details This class is responsible for the xenon variables.
 */
class XenonVariables {
public:

	// System
	int g_nToggleUIKey = VK_INSERT;
	bool g_bUpdate = false;
	bool g_bShowMenu = false;

	// UI
	bool g_bRenderUI = false;
	bool g_bWatermark = false;
	bool g_bRenderMouse = false;
	bool g_bRenderWindows = false;
	bool g_bRenderOverlays = false;
	bool g_bRenderEnabledCheats = false;
	bool g_bRenderQuickActions = false;
	bool g_bMenu = false;
	bool g_bLuaEditor = false;
	bool g_bNotifications = true;
	bool g_bRadar = false;
	bool g_bWaypoints = false;

	// ESP
	bool g_bEsp = false;

	bool g_bSnapline = false;
	bool g_bBox2D = false;
	bool g_bBox3D = false;
	bool g_bSkeleton = false;
	bool g_bHealthBar = false;

	// Aimbot
	bool g_bAimbot = false;

	bool g_bStartFromCenter = false;
	bool g_bSilent = false;
	bool g_bVisibleCheck = false;
	bool g_bAutoShoot = false;
	bool g_bAutoScope = false;
	bool g_bSmooth = false;
	bool g_bHumanize = false;
	bool g_bNoSpread = false;
	bool g_bNearest = true;
	bool g_bNoRecoil = false;
	bool g_bFov = false;

	// Features
	bool g_bCrosshair = false;
	bool g_bSpinbot2D = false;
	bool g_bSpinbot3D = false;

};