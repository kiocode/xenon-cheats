/**
 * @file component.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Xenon Component Header File
 * @details This file contains the definition of the CComponent class, which is the base class for all components in the Xenon cheat engine.
 * @version 0.1
 * @date 2025-05-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <vector>
#include <memory>

#include <spdlog/spdlog.h>

#include <xenon/core/xenon_core.hpp>
#include <xenon/core/xenon_variables.hpp>
#include <xenon/core/xenon_config.hpp>

/**
 * @brief Base class for all components in the Xenon framework.
 * 
 */
class CComponent {
public:

    static std::shared_ptr<Xenon> g_pXenon;
    static std::shared_ptr<XenonVariables> g_pXenonVariables;
    static std::shared_ptr<XenonConfig> g_pXenonConfigs;

    /**
     * @brief Will be executed when the component is initialized.
     * 
     */
    virtual void Init() {}

    /**
     * @brief If Update loop enabled, this function will be executed every frame.
     * 
     */
    virtual void Update() {}

    /**
     * @brief If Update loop enabled, this function will be executed every frame for each target.
     * 
     * @param target Target profile updated for this frame.
     */
    virtual void UpdateCurrentTarget(TargetProfile* target) {}

    virtual ~CComponent() = default;
};
