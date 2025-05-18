/**
 * @file radar_config.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Radar config.
 * @details This config is responsible for the radar settings.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <functional>

/**
 * @brief Radar config.
 * @details This config is responsible for the radar settings.
 * 
 */
class RadarConfig {
public:
    /**
     * @brief The radar type identifier.
     */
    int m_nType;

    /**
     * @brief The overall size of the radar.
     */
    float m_fSize = 200;

    /**
     * @brief The size of target indicators on the radar.
     */
    float m_fTargetsSize = 6;

    /**
     * @brief The size of the local player indicator on the radar.
     */
    float m_fLocalSize = 5;

    /**
     * @brief The default scale of the radar.
     */
    float m_fDefaultScale = 1000;

    /**
     * @brief The zoom factor for the radar display.
     */
    float m_fZoom = 1;

    /**
     * @brief Whether to display target names on the radar.
     */
    bool m_bTargetsName = true;

    /**
     * @brief A custom function for rendering or modifying the radar.
     */
    std::function<void()> m_fnCustomRadar;
};
