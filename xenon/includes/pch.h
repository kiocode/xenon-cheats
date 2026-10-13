/**
 * @file pch.h
 * @brief Xenon Precompiled Header
 * @details Stable, widely-used headers that are expensive to parse.
 *          Compiled once per configuration; rebuilt only when this file changes.
 *
 *          To customize ImGui: edit imconfig.h (included by imgui.h).
 *          The PCH rebuilds once on the next compile — that is expected.
 */

#pragma once

// ── Windows ──────────────────────────────────────────────────────────────────
// NOMINMAX prevents Windows.h from defining min/max macros, which break std::min/std::max.
#define NOMINMAX
#include <Windows.h>
#include <d3d11.h>
#include <d3d12.h>
#include <dxgi.h>
#include <dwmapi.h>
#include <tlhelp32.h>
#include <psapi.h>

// ── STL ──────────────────────────────────────────────────────────────────────
#include <memory>
#include <vector>
#include <string>
#include <string_view>
#include <functional>
#include <unordered_map>
#include <chrono>
#include <thread>
#include <stdexcept>
#include <cstdint>
#include <cmath>
#include <iostream>
#include <fstream>

// ── spdlog (header-only, pulled in by almost every translation unit) ──────────
#include <spdlog/spdlog.h>
#include <spdlog/sinks/wincolor_sink.h>

// ── ImGui core (used by most feature/service components) ─────────────────────
#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include <imgui/imgui_impl_win32.h>

// ── MinHook ───────────────────────────────────────────────────────────────────
#include <minhook/include/MinHook.h>
