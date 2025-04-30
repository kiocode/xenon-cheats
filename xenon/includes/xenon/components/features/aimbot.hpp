/**
 * @file aimbot.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon Aimbot Header File
 * @details This file contains the definition of the CAimbot class, which is responsible for handling aimbot functionality in the Xenon cheat engine.
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <xenon/components/component.hpp>
#include <xenon/utility/vec2.hpp>
#include <xenon/configs/aim_config.hpp>

/**
 * @brief A class that represents the aimbot functionality in the Xenon cheat engine.
 * 
 */
class CAimbot : public CComponent {
public:

    void Init() override {
        nearestDistance = g_pXenonConfigs->g_pAimConfig->m_nNearest;
    }

    /**
     * @brief Check if the target is empty. Is the target that the aimbot will take aim at.
     * 
     * @return true if the target is empty, meaning that the aimbot is not currently aiming at any target.
     * @return false if the target is not empty, meaning that the aimbot is currently aiming at a target.
     */
    bool IsTargetEmpty() const;

    /**
     * @brief Set the target for the aimbot.
     * 
     * @param pos The position of the target to set.
     */
    void SetTarget(Vec2& pos);

    /**
     * @brief Check if the target is reached. This function checks if the target is within a certain distance from the current position.
     * 
     * @return true if the target is reached, meaning that the aimbot has successfully aimed at the target.
     * @return false if the target is not reached, meaning that the aimbot is still aiming at the target.
     */
    bool IsTargetReached() const;

    /**
     * @brief Reset the target for the aimbot. This function clears the current target and sets it to an empty state.
     * 
     */
    void ResetTarget();

    /**
     * @brief Aim at the target (use SetTarget). This function calculates the aim direction based on the current target position and applies it to the aimbot.
     * 
     */
    void AimTarget();

    /**
     * @brief Called every frame to update the aimbot functionality. This function checks if the aimbot is enabled and if so, it updates the target position and applies the aim direction.
     * 
     */
    void Update() override;

    /**
     * @brief Get the Target object
     * 
     * @return Vec2 
     */
    Vec2 GetTarget() const;

private:

    Vec2 m_vTarget;

    float nearestDistance = 0;
    TargetProfile lockedTarget;
    TargetProfile nearestTarget;
    bool hasLockedTarget = false;

};
