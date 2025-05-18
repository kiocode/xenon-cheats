/**
 * @file builder.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Builder.
 * @details This file contains the builder class.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <chrono>

#include <spdlog/spdlog.h>
#include <xenon/utility/vec2.hpp>
#include <xenon/components/features/game.hpp>
#include <xenon/components/services/memory_service.hpp>
#include <xenon/core/cheat.hpp>

/**
 * @brief Builder.
 * @details This class is responsible for building the cheat.
 */
class Builder {
public:

    std::shared_ptr<Xenon> xenon;

    std::shared_ptr<XenonConfig> xenonConfig;

    std::shared_ptr<XenonVariables> xenonVariables;

    std::shared_ptr<Game> GameManager;

    std::vector<std::shared_ptr<CComponent>> components;

    Builder(std::string appTitle) : m_strAppTitle(appTitle) {
        RegisterDefaultComponents();
    }

    Builder() : Builder("Unknown") {}

    /**
     * @brief Set the console enabled.
     */
    void SetConsoleEnabled() const;

    /**
     * @brief Set the debug log level.
     */
    void SetDebugLogLevel();

    /**
     * @brief Set the info log level.
     */
    void SetInfoLogLevel();

    /**
     * @brief Set the warn log level.
     */
    void SetWarnLogLevel();

    /**
     * @brief Set the error log level.
     */
    void SetErrorLogLevel();

    /**
     * @brief Build the cheat.
     */
    Cheat Build() const;

private:

    std::string m_strAppTitle;

    void RegisterDefaultComponents();

};
