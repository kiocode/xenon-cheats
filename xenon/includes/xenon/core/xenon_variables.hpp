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
	bool g_bUpdate;
	bool g_bShowMenu;

	// UI
	bool g_bRenderUI;
	bool g_bWatermark;
	bool g_bRenderMouse;
	bool g_bRenderWindows;
	bool g_bRenderOverlays;
	bool g_bRenderEnabledCheats;
	bool g_bRenderQuickActions;
	bool g_bMenu;
	bool g_bLuaEditor;
	bool g_bNotifications = true;
	bool g_bRadar;
	bool g_bWaypoints;

	// ESP
	bool g_bEsp;

	bool g_bSnapline;
	bool g_bBox2D;
	bool g_bBox3D;
	bool g_bSkeleton;
	bool g_bHealthBar;

	// Aimbot
	bool g_bAimbot;

	bool g_bStartFromCenter;
	bool g_bSilent;
	bool g_bVisibleCheck;
	bool g_bAutoShoot;
	bool g_bAutoScope;
	bool g_bSmooth;
	bool g_bHumanize;
	bool g_bNoSpread;
	bool g_bNearest = true;
	bool g_bNoRecoil;
	bool g_bFov;

	// Features
	bool g_bCrosshair;
	bool g_bSpinbot2D;
	bool g_bSpinbot3D;

};