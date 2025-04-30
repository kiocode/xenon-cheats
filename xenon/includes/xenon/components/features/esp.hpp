/**
 * @file esp.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon ESP Header File
 * @details This file contains the definition of the CEsp class, which is responsible for handling ESP (Extra Sensory Perception) functionality in the Xenon cheat engine.
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <xenon/components/component.hpp>

/**
 * @brief A class that represents the ESP (Extra Sensory Perception) functionality in the Xenon cheat engine.
 * 
 */
class CEsp : public CComponent {
public:

    /**
     * @brief Must be called in loop to render ESP snaplines
     * 
     * @param target 
     */
    void RenderSnapline(TargetProfile* target) const;

    /**
     * @brief Must be called in loop to render ESP boxes
     * 
     * @param target 
     */
    void Render2DBox(TargetProfile* target) const;

    /**
     * @brief Must be called in loop to render ESP 3D boxes
     * 
     * @param target 
     */
    void Render3DBox(TargetProfile* target) const;

    /**
     * @brief Must be called in loop to render ESP skeletons
     * 
     * @param target 
     */
    void RenderSkeleton(TargetProfile* target) const;

    /**
     * @brief Must be called in loop to render ESP health bars
     * 
     * @param target 
     */
    void RenderHealthBar(TargetProfile* target) const;

    /**
     * @brief If Update loop enabled, this function will be executed every frame for each target.
     * 
     * @param target Target profile updated for this frame.
     */
    void UpdateCurrentTarget(TargetProfile* target) override;
};
