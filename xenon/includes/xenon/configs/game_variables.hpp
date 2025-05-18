/**
 * @file game_variables.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Game variables.
 * @details This file contains the game variables.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <vector>
#include <xenon/models/profiles/target_profile.hpp>

/**
 * @brief Game variables.
 * @details This class contains the game variables.
 */
class GameVariables {
public:

    /**
     * @brief Targets.
     */
    std::vector<TargetProfile> g_vTargets;

    /**
     * @brief Local.
     */
    TargetProfile g_vLocal;

    /**
     * @brief Nearest target.
     */
    TargetProfile* g_vNearestTarget = nullptr;
};
