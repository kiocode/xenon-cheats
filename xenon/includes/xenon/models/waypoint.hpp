/**
 * @file waypoint.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Waypoint.
 * @details This file contains the waypoint class.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once
#include <string>
#include <xenon/utility/vec2.hpp>
#include <imgui/imgui.h>


/**
 * @brief Waypoint.
 * @details This class is responsible for the waypoint.
 */
class Waypoint {
public:
	std::string m_strName;
	Vec2 m_vPos2D;
	Vec3 m_vPos3D;
	ImColor m_cColor;

	Waypoint(std::string sName, Vec2 vPos, ImColor cColor) {
		m_strName = sName;
		m_vPos2D = vPos;
		m_cColor = cColor;
	}
	Waypoint(std::string sName, Vec3 vPos, ImColor cColor) {
		m_strName = sName;
		m_vPos3D = vPos;
		m_cColor = cColor;
	}
};