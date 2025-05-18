/**
 * @file aim_service.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Aim service component.
 * @details This component is responsible for aiming at a target.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <xenon/components/component.hpp>

#include <xenon/utility/vec2.hpp>
#include <xenon/configs/aim_config.hpp>
#include <xenon/models/profiles/target_profile.hpp>

/**
 * @brief Aim service component.
 * @details This component is responsible for aiming at a target.
 */ 
class CAimService : public CComponent {
public:

    /**
     * @brief Keep the recoil.
     */
    void KeepRecoil();

    /**
     * @brief Aim at a target.
     * @param target Target to aim at.
     */
    void Aim(Vec2& target);

    /**
     * @brief Spin 2D.
     */
    void Spin2D();

    /**
     * @brief Spin 3D.
     */
    void Spin3D();

    /**
     * @brief Update the aim service.
     */
    void Update() override;

private:

    /**
     * @brief Set the aim position.
     * @param pos Position to set the aim to.
     */
    void SetAimPos(Vec2 pos);

    /**
     * @brief Mouse move.
     * @param tarx Target x position.
     * @param tary Target y position.
     * @param X X position.
     * @param Y Y position.
     * @param smooth Smooth.
     */
    void MouseMove(float tarx, float tary, float X, float Y, int smooth);

    /**
     * @brief Set the Mouse To object
     * 
     * @param pos Position to set the mouse to.
     */
    void SetMouseTo(Vec2 pos);

    /**
     * @brief Move the mouse to a position.
     * @param pos Position to move the mouse to.
     */
    void MoveMouseTo(Vec2 pos);

    /**
     * @brief Track the mouse.
     */
    void TrackMouse();

    /**
     * @brief Humanize the aim.
     * @param target Target to humanize the aim to.
     */
    void Humanize(Vec2& target);

    /**
     * @brief Smooth move to target.
     * @param target Target to smooth move to.
     */
    void SmoothMoveToTarget(Vec2& target);

    /**
     * @brief Generate bezier control points.
     * @param start Start position.
     * @param target Target position.
     * @return Vector of control points.
     */
    std::vector<Vec2> GenerateBezierControlPoints(const Vec2& start, const Vec2& target);

    /**
     * @brief Calculate bezier point.
     * @param t Time.
     * @param points Points to calculate the bezier point from.
     * @return Vector of the bezier point.
     */
    Vec2 CalculateBezierPoint(float t, const std::vector<Vec2>& points);
};
