/**
 * @file xenon_config.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon config.
 * @details This file contains the xenon config class.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <memory>

#include <xenon/configs/game_variables.hpp>
#include <xenon/configs/aim_config.hpp>
#include <xenon/configs/esp_config.hpp>
#include <xenon/configs/radar_config.hpp>
#include <xenon/configs/ui_config.hpp>
#include <xenon/configs/waypoints_config.hpp>

/**
 * @brief Xenon config.
 * @details This class is responsible for the xenon config.
 */
class XenonConfig {
public:

	std::shared_ptr<AimConfig> g_pAimConfig;
	std::shared_ptr<EspConfig> g_pEspConfig;
	std::shared_ptr<GameVariables> g_pGameVariables;
	std::shared_ptr<RadarConfig> g_pRadarConfig;
	std::shared_ptr<UIConfig> g_pUIConfig;
	std::shared_ptr<WaypointsConfig> g_pWaypointsConfig;

};