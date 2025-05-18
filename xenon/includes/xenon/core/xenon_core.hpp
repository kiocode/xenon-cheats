/**
 * @file xenon_core.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon core.
 * @details This file contains the xenon core class.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once
#include <memory>

class System;

class CAimbot;
class CEsp;
class CRadar;
class CWaypoints;

class CAimService;
class CLuaService;
class CMemoryService;
class CInjectionService;
class CNotificationService;
class CUIService;

/**
 * @brief Xenon core.
 * @details This class is responsible for the xenon core.
 */
class Xenon {
public:

	std::shared_ptr<System> g_pSystem;

	std::shared_ptr<CAimbot> g_cAimbot;
	std::shared_ptr<CEsp> g_cEsp;
	std::shared_ptr<CRadar> g_cRadar;
	std::shared_ptr<CWaypoints> g_cWaypoints;

	std::shared_ptr<CAimService> g_cAimService;
	std::shared_ptr<CLuaService> g_cLuaService;
	std::shared_ptr<CMemoryService> g_cMemoryService;
	std::shared_ptr<CInjectionService> g_cInjectionService;
	std::shared_ptr<CNotificationService> g_cNotificationService;
	std::shared_ptr<CUIService> g_cUIService;

};