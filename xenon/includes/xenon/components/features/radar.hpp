/**
 * @file radar.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon Radar Header File
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <xenon/components/component.hpp>

#include <xenon/utility/vec2.hpp>
#include <xenon/models/enums/radar_shape.hpp>

/**
 * @brief A class that represents the radar functionality in the Xenon cheat engine.
 * 
 */
class CRadar : public CComponent {
public:

    void Render();

    /**
     * @brief Must be called in loop to render radar targets, render radar with circle or square shape.
     * 
     * @param shape 
     * @param is3D 
     */
    void RenderRadarBase(RadarShape shape, bool is3D);

    /**
     * @brief Loop function to render radar targets.
     * 
     */
    void Update() override;
};
