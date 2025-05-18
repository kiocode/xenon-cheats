/**
 * @file waypoints_config.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Waypoints config.
 * @details This config is responsible for the waypoints settings.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

/**
 * @brief Waypoints config.
 * @details This config is responsible for the waypoints settings.
 */
class WaypointsConfig {
public:

    bool m_bRenderInWorld = true;

    bool m_bNamesInWorld = true;

    float m_fSizeInWorld = 30;

    bool m_bRenderInRadar = true;

    bool m_bNamesInRadar = true;

    float m_fSizeInRadar = 3;
};
