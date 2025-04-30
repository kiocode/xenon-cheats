/**
 * @file waypoints.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon Waypoints Header File
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <xenon/components/component.hpp>

#include <xenon/utility/vec2.hpp>
#include <xenon/utility/vec3.hpp>
#include <xenon/models/waypoint.hpp>

#include <imgui/imgui.h>

/**
 * @brief A class that represents the waypoints functionality in the Xenon cheat engine.
 * 
 */
class CWaypoints : public CComponent {
public:

    /**
     * @brief Set the Waypoint object in the current localplayer position 2D.
     * 
     * @param title The name of the waypoint.
     * @param pos The position of the waypoint.
     * @param color The color of the waypoint.
     */
    void SetWaypoint(std::string title, const Vec2& pos, ImColor color);

    /**
     * @brief Set the Waypoint object in the current localplayer position 3D.
     * 
     * @param title The name of the waypoint.
     * @param pos The position of the waypoint.
     * @param color The color of the waypoint.
     */
    void SetWaypoint(std::string title, const Vec3& pos, ImColor color);

    /**
     * @brief Get the Waypoints object
     * 
     * @return std::vector<Waypoint> 
     */
    std::vector<Waypoint> GetWaypoints();

    /**
     * @brief Clear the Waypoints object
     * 
     */
    void ClearWaypoints();

    /**
     * @brief Render the Waypoints object in the world.
     * 
     */
    void RenderInWorld();

    /**
     * @brief Render the Waypoints object in the radar 2D.
     * 
     * @param fnIsPointInRadar Function to check if the point is in the radar.
     * @param localPos Local position of the player.
     * @param defaultScale Default scale of the radar.
     * @param radarSize Size of the radar.
     * @param zoomFactor Zoom factor of the radar.
     * @param radarCenter Center of the radar.
     */
    void RenderInRadar(std::function<bool(ImVec2)> fnIsPointInRadar, Vec2 localPos, float defaultScale, float radarSize, float zoomFactor, ImVec2 radarCenter);

    /**
     * @brief Render the Waypoints object in the radar 3D.
     * 
     * @param fnIsPointInRadar Function to check if the point is in the radar.
     * @param localPos Local position of the player.
     * @param defaultScale Default scale of the radar.
     * @param radarSize Size of the radar.
     * @param zoomFactor Zoom factor of the radar.
     * @param radarCenter Center of the radar.
     */
    void RenderInRadar(std::function<bool(ImVec2)> fnIsPointInRadar, Vec3 localPos, float defaultScale, float radarSize, float zoomFactor, ImVec2 radarCenter);

    /** 
     * @brief Update the Waypoints object every frame.
     */
    void Update() override;

private:

    std::vector<Waypoint> m_vWaypoints;
};
