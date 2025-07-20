#pragma once

#include <vector>
#include <imgui/imgui.h>

#include "offsets/offsets.hpp"

namespace Configs {

    inline World* Server = nullptr;
    inline LocalPlayer* Client = nullptr;
    inline int PlayerSize = 64;

    inline bool AimbotEnabled = false;
    inline bool SilentAimbotEnabled = false;
    inline int AimbotRange = 300;
    inline float AimbotFOVAngle = 45.f;
    inline bool AimbotAvoidFrozenTee = false;
    inline ImColor AimbotFOVColor = ImColor(255, 0, 255, 255);
    inline int KeyToBeHoldForAimbot = VK_LCONTROL;
    
    inline bool AutoFireEnabled = false;
    inline int AutoFireDistance = 500.0f;

    inline bool AutoShotEnabled = false;
    inline float AutoShotFOVAngle = 45.f;
    inline int AutoShotRange = 62;
    inline bool AutoShotTargetFrozen = false;
    inline bool AutoShotNeedsHold = false;
    inline ImColor AutoShotFOVColor = ImColor(100, 0, 100, 255);
    inline int KeyToBeHoldForAutoShot = VK_LMENU;

    inline bool PxMovementEnabled = false;
    inline int PxMovementSlowness = 1;


    inline bool BalancerEnabled = false;
    inline int BalancerDistance = 300.0f;
    inline int KeyToBeHoldForBalancer = VK_SPACE;


    inline bool SpinbotEnabled = false;
    inline float SpinbotSpeed = 25.0f;
    inline int SpinbotRange = 100.0f;


    inline bool ESPEnabled = false;
    inline bool ESPShowNearest = false;
    inline ImColor ESPColorBox = ImColor(255, 255, 255, 255);
    inline ImColor ESPColorName = ImColor(255, 255, 255, 255);
    inline ImColor ESPColorLine = ImColor(255, 255, 255, 255);
}
