# 🎮 Xenon Framework - Advanced Game Hacking Framework

**Xenon** is a modern and powerful C++ framework designed for creating game cheats, both internal (DLL injection) and external (standalone). The framework offers a modular architecture that allows developers to easily implement features like ESP, Aimbot, Radar, and much more with native support for Unreal Engine and Unity (but any engine or language is avaiable for the use).

![Language](https://img.shields.io/badge/Language-C%2B%2B20-blue.svg)
![Platform](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)

## 📑 Table of Contents

1. [🚀 Quick Start Guide](#-quick-start-guide)
2. [⚙️ Installation and Setup](#️-installation-and-setup)
3. [🏗️ Framework Architecture](#️-framework-architecture)
4. [📚 Complete Tutorials](#-complete-tutorials)
5. [🎯 Practical Examples](#-practical-examples)
6. [📖 API Reference](#-api-reference)
7. [🛠️ Troubleshooting](#️-troubleshooting)
8. [🤝 Contributing](#-contributing)

---

## 🚀 Quick Start Guide

### Prerequisites
- **Visual Studio 2022** (Community or higher)
- **Windows SDK 10.0.22000.0** or higher
- **C++20** standard
- **Git** to clone the repository

### Quick Setup (5 minutes)

```bash
# 1. Clone the repository
git clone https://github.com/kiocode/xenon-cheats.git
cd xenon-cheats

# 2. Open the solution in Visual Studio
start xenon.sln

# 3. Build the framework (Release x64 recommended)
# Build -> Build Solution (Ctrl+Shift+B)

# 4. Choose an example project and build
# Examples: example-ddnet-external, example-ohd-internal
```

### First Cheat in 2 Minutes

```cpp
#include <xenon/xenon.hpp>

int main() {
    Builder builder("My First Cheat");
    
    // Configure for external 2D cheat
    builder.xenon->g_pSystem->IsInternal(false);
    builder.xenon->g_pSystem->SetGameDimension(GameDimension::DIM_2D);
    builder.SetConsoleEnabled();
    
    // Connect to the game
    builder.xenon->g_cMemoryService->AttachGame("GameName.exe");
    
    // Configure target updates
    builder.GameManager->OnEvent("Update", [builder]() {
        // Logic to find targets in the game
        // builder.xenonConfig->g_pGameVariables->g_vTargets.push_back(targetProfile);
    });
    
    // Build and run the cheat
    Cheat cheat = builder.Build();
    cheat.UseUICustom();
    cheat.UseUIMenu();
    cheat.UseESPBox2D();
    cheat.Run();
    
    return 0;
}
```

---

## ⚙️ Installation and Setup

### Development Environment

#### Visual Studio 2022 Setup
1. **Install Visual Studio 2022** with:
   - Desktop development with C++
   - Windows 10/11 SDK (latest version)
   - Git for Windows

2. **Configure project properties**:
   ```
   Configuration Properties:
   ├── General
   │   ├── C++ Language Standard: C++20
   │   └── Platform Toolset: v143
   ├── Advanced
   │   └── Character Set: Use Multi-Byte Character Set
   └── Debugging
       └── Working Directory: $(ProjectDir)
   ```

#### Project Structure

```
xenon-cheats/
├── xenon/                          # Framework core
│   ├── includes/xenon/             # Header files
│   │   ├── xenon.hpp              # Main include
│   │   ├── components/            # Functional modules
│   │   ├── configs/               # Configurations
│   │   ├── core/                  # Core classes
│   │   ├── models/                # Data models
│   │   └── utility/               # Utility functions
│   ├── src/                       # Source files
│   └── libs/                      # External libraries
├── example-*/                     # Example projects
└── docs/                          # Documentation
```

### Configuration for Different Game Types

#### 2D Games (e.g. DDNet, browser games)
```cpp
Builder builder("2D Game Cheat");
builder.xenon->g_pSystem->SetGameDimension(GameDimension::DIM_2D);
builder.xenon->g_pSystem->IsInternal(false); // External

// 2D coordinate conversion functions
system->m_fnW2S2D = [](Vec2 pos) { /* world to screen */ };
system->m_fnS2W2D = [](Vec2 pos) { /* screen to world */ };
```

#### 3D Unreal Engine Games
```cpp
Builder builder("UE4 Game Cheat");
builder.xenon->g_pSystem->IsUnrealEngine(UnrealEngineVersion::UE4);
builder.xenon->g_pSystem->SetGameDimension(GameDimension::DIM_3D);
builder.xenon->g_pSystem->IsInternal(true); // Often internal

// UE-specific 3D conversion function
pSystem->m_fnW2S3D = [](Vec3 pos) {
    SDK::FVector2D screenPos;
    SDK::FVector unrealPos(pos.x, pos.z, pos.y);
    if (UE::m_pMyController->ProjectWorldLocationToScreen(unrealPos, &screenPos, false)) {
        return Vec2(screenPos.X, screenPos.Y);
    }
    return Vec2(-99, -99);
};
```

#### Unity Games with IL2CPP
```cpp
Builder builder("Unity Game Cheat");
builder.xenon->g_pSystem->IsUnityEngine(true);
builder.xenon->g_pSystem->SetGameDimension(GameDimension::DIM_3D);

// Initialize IL2CPP resolver
if (IL2CPP::Initialize(true)) {
    spdlog::info("IL2CPP initialize success.");
} else {
    spdlog::error("IL2CPP initialize failed.");
    return FALSE;
}
```

#### Unity Games with MONO
```cpp
Builder builder("Unity Game Cheat");
builder.xenon->g_pSystem->IsUnityEngine(true);
builder.xenon->g_pSystem->SetGameDimension(GameDimension::DIM_3D);

// Implement your SDK reader
```

---

## 🏗️ Framework Architecture

### Main Components

#### 1. **Builder Pattern**
The `Builder` is the entry point to configure your cheat:

```cpp
Builder builder("Cheat Name");

// System configurations
std::shared_ptr<System> pSystem = builder.xenon->g_pSystem;
std::shared_ptr<GameVariables> pGameVars = builder.xenonConfig->g_pGameVariables;

// Feature configurations
std::shared_ptr<EspConfig> pEspConfig = builder.xenonConfig->g_pEspConfig;
std::shared_ptr<AimConfig> pAimConfig = builder.xenonConfig->g_pAimConfig;
std::shared_ptr<RadarConfig> pRadarConfig = builder.xenonConfig->g_pRadarConfig;
```

#### 2. **Event System**
The framework uses an event system to update game data (THATS NECESSARY IF m_pXenonVariables->g_bUpdate IS ENABLED):

```cpp
builder.GameManager->OnEvent("Update", [builder]() {
    // This function is called every frame
    // Here you update targets, player position, etc.
    
    auto gameVars = builder.xenonConfig->g_pGameVariables;
    gameVars->g_vTargets.clear();
    
    // Find and add targets
    for (auto& enemy : GetEnemyPlayers()) {
        TargetProfile target;
        target.m_vPos3D = enemy.position;
        target.m_strName = enemy.name;
        target.m_fHealth = enemy.health;
        gameVars->g_vTargets.push_back(target);
    }
});
```

#### 3. **Functional Modules**
Each feature is a separate module that you can enable:

```cpp
Cheat cheat = builder.Build();

// UI modules
cheat.UseUICustom(RenderingBackend::DIRECTX11);
cheat.UseUIMenu();
cheat.UseUIRadar();

// Functional modules
cheat.UseESPBox2D();        // ESP for 2D games
cheat.UseESPBox3D();        // ESP for 3D games
cheat.UseESPSnapline();     // Lines to targets
cheat.UseESPSkeleton();     // Skeleton ESP
cheat.UseAimbot();          // Aimbot
cheat.UseRadar();           // Radar/Minimap

cheat.Run(); // or cheat.Run(hModule) for internal DLLs
```

### Data Models

#### TargetProfile
```cpp
struct TargetProfile {
    Vec3 m_vPos3D;              // 3D position
    Vec2 m_vPos2D;              // 2D position
    Vec3 m_vHeadPos3D;          // Head position
    Vec3 m_vFeetPos3D;          // Feet position
    Vec2 m_vVelocity2D;         // Velocity (for prediction)
    
    std::string m_strName;      // Target name
    float m_fHealth;            // Health (0-100)
    float m_fWidth;             // Width for ESP
    
    bool m_bVisible;            // Visible or behind walls
    intptr_t m_pOriginalAddress; // Original memory address
};
```

---

## 📚 Complete Tutorials

### Tutorial 1: Creating an External Cheat for 2D Games

Let's create a cheat for a 2D game like DDNet:

#### Step 1: Project Setup
```cpp
#include <xenon/xenon.hpp>

int main() {
    Builder builder("DDNet ESP Cheat");
    
    // Configure for external 2D game
    builder.xenon->g_pSystem->IsInternal(false);
    builder.xenon->g_pSystem->SetGameDimension(GameDimension::DIM_2D);
    builder.SetConsoleEnabled();
    builder.SetInfoLogLevel();
```

#### Step 2: Game Connection
```cpp
    // Connect to the game process
    try {
        builder.xenon->g_cMemoryService->AttachGame("DDNet.exe");
    } catch (const std::exception& e) {
        spdlog::error("Unable to connect to DDNet: {}", e.what());
        return 1;
    }
    
    // Read static base addresses
    uintptr_t serverAddr = builder.xenon->g_cMemoryService->ReadPointer(0x5B8E80);
    if (!serverAddr) {
        spdlog::error("Unable to find server address");
        return 1;
    }
```

#### Step 3: Feature Configuration
```cpp
    // ESP configuration
    auto espConfig = builder.xenonConfig->g_pEspConfig;
    espConfig->m_nLimitDistance = 10000;
    espConfig->m_bHealthBar = true;
    
    // Radar configuration
    auto radarConfig = builder.xenonConfig->g_pRadarConfig;
    radarConfig->m_fSize = 200.0f;
    radarConfig->m_fDefaultScale = 1000.0f;
```

#### Step 4: Update System
```cpp
    builder.GameManager->OnEvent("Update", [builder, serverAddr]() {
        auto gameVars = builder.xenonConfig->g_pGameVariables;
        auto memService = builder.xenon->g_cMemoryService;
        
        // Clear previous targets
        gameVars->g_vTargets.clear();
        
        // Read local information
        int localPlayerId = memService->Read<int>(serverAddr + 0x2090);
        if (localPlayerId == -1) return; // Not connected
        
        // Read local position
        float localX = memService->Read<float>(serverAddr + 0x20D4 + 0xE8 + (localPlayerId * 0xF8));
        float localY = memService->Read<float>(serverAddr + 0x20D4 + 0xE8 + 0x4 + (localPlayerId * 0xF8));
        gameVars->g_vLocal.m_vPos2D = Vec2(localX - 32, localY - 32);
        
        // Scan other players
        for (int i = 0; i < 64; i++) {
            if (i == localPlayerId) continue;
            
            int gameTick = memService->Read<int>(serverAddr + 0x20D4 + (i * 0xF8));
            if (gameTick <= 0) continue;
            
            float x = memService->Read<float>(serverAddr + 0x20D4 + 0xE8 + (i * 0xF8));
            float y = memService->Read<float>(serverAddr + 0x20D4 + 0xE8 + 0x4 + (i * 0xF8));
            
            if (x == 0 && y == 0) continue;
            
            // Create target profile
            TargetProfile target;
            target.m_vPos2D = Vec2(x, y);
            target.m_vHeadPos2D = Vec2(x, y - 32);
            target.m_vFeetPos2D = Vec2(x, y + 32);
            target.m_strName = "Player " + std::to_string(i);
            target.m_fHealth = 100;
            target.m_fWidth = 64;
            
            gameVars->g_vTargets.push_back(target);
        }
    });
```

#### Step 5: Coordinate Configuration
```cpp
    // Coordinate conversions for 2D game
    auto system = builder.xenon->g_pSystem;
    
    system->m_fnW2S2D = [builder, system](Vec2 pos) {
        auto gameVars = builder.xenonConfig->g_pGameVariables;
        Vec2 localPos = gameVars->g_vLocal.m_vPos2D;
        Vec2 screenCenter = system->GetScreenCenter();
        
        Vec2 relativePos = pos - localPos;
        return screenCenter + relativePos;
    };
    
    system->m_fnS2W2D = [builder, system](Vec2 pos) {
        auto gameVars = builder.xenonConfig->g_pGameVariables;
        Vec2 localPos = gameVars->g_vLocal.m_vPos2D;
        Vec2 screenCenter = system->GetScreenCenter();
        
        Vec2 relativePos = pos - screenCenter;
        return localPos + relativePos;
    };
```

#### Step 6: Finalization
```cpp
    // Build and configure the cheat
    Cheat cheat = builder.Build();
    cheat.UseUICustom();
    cheat.UseUIMenu();
    cheat.UseESPBox2D();
    cheat.UseESPSnapline();
    cheat.UseUIRadar();
    
    // Run the cheat
    cheat.Run();
    return 0;
}
```

### Tutorial 2: Creating an Internal Cheat for Unreal Engine

#### Step 1: DLL Setup
```cpp
#include <Windows.h>
#include "basic_ue.hpp"  // Game SDK
#include <xenon/xenon.hpp>

DWORD WINAPI MainThread(LPVOID lpReserved) {
    Builder builder("UE4 Internal Cheat");
    
    // Configuration for internal UE4
    auto system = builder.xenon->g_pSystem;
    system->IsInternal(true);
    system->IsUnrealEngine(UnrealEngineVersion::UE4);
    system->SetGameDimension(GameDimension::DIM_3D);
    system->SetRenderingType(RenderingType::DX11);
    
    builder.SetInfoLogLevel();
    builder.SetConsoleEnabled();
```

#### Step 2: World-to-Screen Configuration
```cpp
    // UE-specific 3D conversion function
    system->m_fnW2S3D = [](Vec3 pos) {
        SDK::FVector2D screenPos;
        SDK::FVector unrealPos(pos.x, pos.z, pos.y); // UE uses inverted Y and Z
        
        if (UE::m_pMyController->ProjectWorldLocationToScreen(unrealPos, &screenPos, false)) {
            return Vec2(screenPos.X, screenPos.Y);
        }
        return Vec2(-99, -99); // Off screen
    };
```

#### Step 3: Advanced ESP Configuration
```cpp
    auto espConfig = builder.xenonConfig->g_pEspConfig;
    espConfig->m_nLimitDistance = 100000;
    espConfig->m_fHealthBarWidth = 40;
    
    // Skeleton configuration (for FPS games)
    espConfig->m_fnGetBoneScreenPosFromIndex3D = [](int index) {
        SDK::FVector bonePos = UE::m_pMyCharacter->Mesh->GetSocketLocation(
            UE::m_pMyCharacter->Mesh->GetBoneName(index)
        );
        return Vec3(bonePos.X, bonePos.Z, bonePos.Y);
    };
    
    // Bone connection definitions for skeleton
    espConfig->m_tBonePairs = {
        {1, 2},   // pelvis -> spine_01
        {2, 3},   // spine_01 -> spine_02  
        {3, 4},   // spine_02 -> spine_03
        {4, 47},  // spine_03 -> neck_01
        {47, 48}, // neck_01 -> head
        // ... other connections
    };
```

#### Step 4: Target Detection System
```cpp
    builder.GameManager->OnEvent("Update", [builder]() {
        auto gameVars = builder.xenonConfig->g_pGameVariables;
        
        if (!UE::FetchSDK()) return; // Verify SDK available
        
        gameVars->g_vTargets.clear();
        
        // Get local position
        SDK::FVector myPos = UE::m_pMyController->K2_GetActorLocation();
        gameVars->g_vLocal.m_vPos3D = Vec3(myPos.X, myPos.Z, myPos.Y);
        
        // Scan all UE objects
        for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
            SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);
            
            if (!obj || obj->IsDefaultObject()) continue;
            if (!obj->IsA(SDK::ACharacter::StaticClass())) continue;
            
            SDK::ACharacter* character = static_cast<SDK::ACharacter*>(obj);
            if (!character->Controller || character->Controller->IsLocalPlayerController()) continue;
            
            SDK::FVector targetPos = character->K2_GetActorLocation();
            if (targetPos.IsZero()) continue;
            
            // Create target profile
            TargetProfile target;
            target.m_vPos3D = Vec3(targetPos.X, targetPos.Z, targetPos.Y);
            target.m_vHeadPos3D = Vec3(targetPos.X, targetPos.Z + 62, targetPos.Y);
            target.m_vFeetPos3D = Vec3(targetPos.X, targetPos.Z - 102, targetPos.Y);
            target.m_strName = character->GetName();
            target.m_fHealth = character->GetHealth();
            target.m_fWidth = 160000; // Game dependent
            
            // Visibility check
            target.m_bVisible = UE::m_pMyController->LineOfSightTo(
                character, 
                UE::m_pMyController->PlayerCameraManager->CameraCachePrivate.POV.Location,
                false
            );
            
            gameVars->g_vTargets.push_back(target);
        }
    });
```

#### Step 5: Aimbot Configuration
```cpp
    auto aimConfig = builder.xenonConfig->g_pAimConfig;
    aimConfig->m_nLimitDistance = 100000;
    aimConfig->m_bPredictPosition = true;
    aimConfig->m_fPredictionTime = 0.016f; // 60 FPS
    aimConfig->m_nAimTo = 1; // Aim to head
```

#### Step 6: Debug UI and Finalization
```cpp
    // Debug UI
    auto uiConfig = builder.xenonConfig->g_pUIConfig;
    uiConfig->m_vFnOverlays.push_back([gameVars]() {
        ImGui::Begin("Debug Info");
        ImGui::Text("Engine: 0x%llx", UE::m_pEngine);
        ImGui::Text("World: 0x%llx", UE::m_pWorld);
        ImGui::Text("LocalPlayer: %s", gameVars->g_vLocal.m_strName.c_str());
        ImGui::Text("Targets: %d", gameVars->g_vTargets.size());
        ImGui::End();
    });
    
    // Build and run
    Cheat cheat = builder.Build();
    cheat.UseUICustom(RenderingBackend::DIRECTX11);
    cheat.UseUIMenu();
    cheat.UseESPBox3D();
    cheat.UseESPSkeleton();
    cheat.UseAimbot();
    
    HMODULE hModule = static_cast<HMODULE>(lpReserved);
    cheat.Run(hModule);
    
    return TRUE;
}

// DLL Entry point
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    }
    return TRUE;
}
```

---

## 🎯 Practical Examples

### Advanced Configurations

#### Custom ESP
```cpp
auto espConfig = builder.xenonConfig->g_pEspConfig;

// Color configuration
espConfig->m_colorBox = ImColor(255, 255, 255, 255);
espConfig->m_colorBoxVisible = ImColor(0, 255, 0, 255);
espConfig->m_colorHealthBar = ImColor(255, 0, 0, 255);

// Distance and size configuration
espConfig->m_nLimitDistance = 50000;
espConfig->m_fHealthBarWidth = 30;
espConfig->m_fHealthBarHeight = 4;

// Target filters
espConfig->m_fnTargetFilter = [](const TargetProfile& target) {
    return target.m_fHealth > 0 && target.m_strName != "Spectator";
};
```

#### Advanced Aimbot
```cpp
auto aimConfig = builder.xenonConfig->g_pAimConfig;

// Precision configuration
aimConfig->m_fSmoothness = 2.5f;
aimConfig->m_fFOV = 90.0f;
aimConfig->m_nAimKey = VK_RBUTTON; // Right mouse button

// Movement prediction
aimConfig->m_bPredictPosition = true;
aimConfig->m_fPredictionTime = 0.050f; // 50ms

// Custom aimbot for specific games
aimConfig->m_fnCustomAim = [](const Vec2& targetPos) {
    // Custom implementation for mouse/input control
    SetCursorPos(targetPos.x, targetPos.y);
};
```

#### 3D Radar
```cpp
auto radarConfig = builder.xenonConfig->g_pRadarConfig;

radarConfig->m_nType = 1; // 3D Radar
radarConfig->m_fSize = 250.0f;
radarConfig->m_fDefaultScale = 5000.0f;
radarConfig->m_fZoom = 1.5f;

// Rendering configuration
radarConfig->m_bShowEnemies = true;
radarConfig->m_bShowTeammates = false;
radarConfig->m_bShowNames = true;
radarConfig->m_fLocalSize = 8.0f;
radarConfig->m_fTargetsSize = 6.0f;
```

### Auto-Injection System

```cpp
#include <xenon/components/services/injection_service.hpp>

void AutoInject() {
    Builder builder("Auto Injector");
    builder.SetDebugLogLevel();
    
    std::string dllPath = "C:\\MyCheats\\mycheat.dll";
    std::string gamePath = "C:\\Games\\MyGame\\game.exe";
    std::string launchOptions = "-windowed -noborder";
    
    HANDLE hProcess, hThread;
    if (!builder.xenon->g_cInjectionService->OpenGame(&hProcess, &hThread, gamePath, launchOptions)) {
        spdlog::error("Unable to launch the game");
        return;
    }
    
    // Wait for the game to load
    Sleep(5000);
    
    // Inject the DLL
    if (builder.xenon->g_cInjectionService->Inject(hProcess, dllPath, InjectionType::LoadLibraryDLL)) {
        spdlog::info("Injection completed successfully");
    } else {
        spdlog::error("Injection failed");
    }
    
    ResumeThread(hThread);
    CloseHandle(hProcess);
    CloseHandle(hThread);
}
```

---

## 📖 API Reference

### Main Classes

#### Builder
```cpp
class Builder {
public:
    Builder(const std::string& name);
    
    // Logging configuration
    void SetDebugLogLevel();
    void SetInfoLogLevel(); 
    void SetConsoleEnabled();
    
    // Build the cheat
    Cheat Build();
    
    // Component access
    std::shared_ptr<Xenon> xenon;
    std::shared_ptr<XenonConfig> xenonConfig;
    std::shared_ptr<GameManager> GameManager;
};
```

#### System
```cpp
class System {
public:
    // Game type configuration
    void IsInternal(bool internal);
    void IsUnrealEngine(UnrealEngineVersion version);
    void IsUnityEngine(bool unity);
    void SetGameDimension(GameDimension dimension);
    void SetRenderingType(RenderingType type);
    
    // Coordinate conversion functions
    std::function<Vec2(Vec3)> m_fnW2S3D;  // World to Screen 3D
    std::function<Vec2(Vec2)> m_fnW2S2D;  // World to Screen 2D
    std::function<Vec2(Vec2)> m_fnS2W2D;  // Screen to World 2D
    
    // Configuration
    float m_fDistanceScale;
    Vec2 GetScreenCenter();
};
```

#### GameVariables
```cpp
class GameVariables {
public:
    TargetProfile g_vLocal;                    // Local player
    std::vector<TargetProfile> g_vTargets;     // Target list
    
    // Utility methods
    void ClearTargets();
    void AddTarget(const TargetProfile& target);
    std::vector<TargetProfile> GetVisibleTargets();
    std::vector<TargetProfile> GetTargetsInRange(float maxDistance);
};
```

#### MemoryService
```cpp
class CMemoryService {
public:
    // Process connection
    bool AttachGame(const std::string& processName);
    bool AttachGame(DWORD processId);
    
    // Memory reading
    template<typename T>
    T Read(uintptr_t address);
    
    template<typename T>
    void Write(uintptr_t address, const T& value);
    
    uintptr_t ReadPointer(uintptr_t address);
    std::string ReadString(uintptr_t address, size_t maxLength = 256);
    
    // Utilities
    uintptr_t GetModuleBase(const std::string& moduleName);
};
```

### Configurations

#### EspConfig
```cpp
struct EspConfig {
    // Distances and filters
    int m_nLimitDistance = 10000;
    bool m_bVisible = true;
    bool m_bNotVisible = true;
    
    // Box ESP
    bool m_bBox2D = false;
    bool m_bBox3D = false;
    int m_nBox2DType = 0; // 0=rectangle, 1=corners
    
    // Health bar
    bool m_bHealthBar = false;
    float m_fHealthBarWidth = 30.0f;
    float m_fHealthBarHeight = 4.0f;
    
    // Skeleton
    bool m_bSkeleton = false;
    std::vector<std::pair<int, int>> m_tBonePairs;
    std::function<Vec3(int)> m_fnGetBoneScreenPosFromIndex3D;
    
    // Colors
    ImColor m_colorBox = ImColor(255, 255, 255, 255);
    ImColor m_colorBoxVisible = ImColor(0, 255, 0, 255);
    ImColor m_colorHealthBar = ImColor(255, 0, 0, 255);
    
    // Custom filters
    std::function<bool(const TargetProfile&)> m_fnTargetFilter;
};
```

#### AimConfig
```cpp
struct AimConfig {
    // Activation
    bool m_bEnabled = false;
    int m_nAimKey = VK_RBUTTON;
    
    // Aim configuration
    float m_fFOV = 90.0f;
    float m_fSmoothness = 1.0f;
    int m_nAimTo = 0; // 0=center, 1=head, 2=chest
    
    // Prediction
    bool m_bPredictPosition = false;
    float m_fPredictionTime = 0.016f;
    
    // Distances
    int m_nLimitDistance = 10000;
    
    // Custom functions
    std::function<void(const Vec2&)> m_fnCustomAim;
    std::function<Vec2()> m_fnCustomGetAim;
};
```

---

## 🛠️ Troubleshooting

### Common Issues and Solutions

#### 1. **Compilation Errors**

**Error**: `error C2065: 'spdlog' undefined`
```cpp
// Solution: Add the include
#include <spdlog/spdlog.h>
```

**Error**: `error LNK2019: unresolved external symbol`
```cpp
// Solution: Verify that xenon.lib is linked correctly
// Project Properties -> Linker -> Input -> Additional Dependencies
// Add: xenon.lib
```

**Error**: `error C2679: binary '=': no operator found`
```cpp
// Solution: Check Vec2/Vec3 types
Vec2 pos = Vec2(100.0f, 200.0f); // Use float, not int
```

#### 2. **Runtime Issues**

**Problem**: The cheat connects but doesn't find targets
```cpp
// Debug: Add logging in the Update event
builder.GameManager->OnEvent("Update", [builder]() {
    spdlog::info("Update called - Targets found: {}", 
                 builder.xenonConfig->g_pGameVariables->g_vTargets.size());
    
    // Check if memory addresses are valid
    if (memoryService->Read<int>(baseAddress) == 0) {
        spdlog::error("Invalid base address: 0x{:X}", baseAddress);
    }
});
```

**Problem**: ESP not displayed
```cpp
// Check coordinate conversion functions
system->m_fnW2S2D = [](Vec2 worldPos) {
    Vec2 result = ConvertToScreen(worldPos);
    spdlog::debug("W2S: ({},{}) -> ({},{})", 
                  worldPos.x, worldPos.y, result.x, result.y);
    return result;
};
```

**Problem**: Aimbot not working
```cpp
// Check aimbot configuration
auto aimConfig = builder.xenonConfig->g_pAimConfig;
aimConfig->m_bEnabled = true;  // Make sure it's enabled
aimConfig->m_nAimKey = VK_RBUTTON;  // Correct key

// Test custom aim function
aimConfig->m_fnCustomAim = [](const Vec2& pos) {
    spdlog::info("Aiming to: ({}, {})", pos.x, pos.y);
    // Mouse movement implementation
};
```

#### 3. **Memory Access Issues**

**Problem**: Access violation during memory reading
```cpp
// Solution: Add safety checks
try {
    auto memService = builder.xenon->g_cMemoryService;
    if (!memService->IsValidAddress(address)) {
        spdlog::error("Invalid address: 0x{:X}", address);
        return;
    }
    
    int value = memService->Read<int>(address);
} catch (const std::exception& e) {
    spdlog::error("Memory read error: {}", e.what());
}
```

#### 4. **Injection Problems**

**Problem**: DLL injection fails
```cpp
// Check requirements
HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);
if (!hProcess) {
    DWORD error = GetLastError();
    spdlog::error("Unable to open process: Error {}", error);
    
    // Possible causes:
    // - Process doesn't exist
    // - Insufficient privileges (run as administrator)
    // - Anti-cheat blocking access
}
```

**Problem**: DLL loads but MainThread doesn't execute
```cpp
// Check DllMain
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    spdlog::info("DllMain called with reason: {}", ul_reason_for_call); // Debug
    
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(hModule);
            CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
            break;
    }
    return TRUE;
}
```

### Performance Optimization

#### 1. **Update Loop Optimization**
```cpp
// Limit update frequency
static auto lastUpdate = std::chrono::steady_clock::now();
auto now = std::chrono::steady_clock::now();
auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - lastUpdate);

if (elapsed.count() < 16) return; // Max 60 FPS
lastUpdate = now;

// Your update code here
```

#### 2. **Address Caching**
```cpp
// Cache frequently used addresses
static uintptr_t cachedPlayerList = 0;
if (cachedPlayerList == 0) {
    cachedPlayerList = memService->GetModuleBase("game.exe") + 0x123456;
}
```

#### 3. **Batch Memory Operations**
```cpp
// Instead of many single operations
for (int i = 0; i < playerCount; i++) {
    float x = memService->Read<float>(playerBase + i * playerSize + xOffset);
    float y = memService->Read<float>(playerBase + i * playerSize + yOffset);
}

// Use batch operations
struct PlayerData { float x, y, z, health; };
std::vector<PlayerData> players = memService->ReadArray<PlayerData>(playerBase, playerCount);
```

### Debug Tools

#### 1. **Memory Viewer**
```cpp
// Add memory viewer to UI
uiConfig->m_vFnOverlays.push_back([memService]() {
    static uintptr_t address = 0;
    static char addressInput[32] = "0x";
    
    ImGui::Begin("Memory Viewer");
    ImGui::InputText("Address", addressInput, sizeof(addressInput));
    
    if (ImGui::Button("Read")) {
        address = std::stoull(addressInput, nullptr, 16);
    }
    
    if (address > 0) {
        try {
            int intVal = memService->Read<int>(address);
            float floatVal = memService->Read<float>(address);
            ImGui::Text("Int: %d, Float: %.3f", intVal, floatVal);
        } catch (...) {
            ImGui::Text("Invalid address");
        }
    }
    ImGui::End();
});
```

#### 2. **Target Inspector**
```cpp
// Inspector for target debugging
uiConfig->m_vFnOverlays.push_back([gameVars]() {
    ImGui::Begin("Target Inspector");
    
    ImGui::Text("Local Player:");
    ImGui::Text("  Pos: (%.1f, %.1f, %.1f)", 
                gameVars->g_vLocal.m_vPos3D.x,
                gameVars->g_vLocal.m_vPos3D.y, 
                gameVars->g_vLocal.m_vPos3D.z);
    
    ImGui::Separator();
    ImGui::Text("Targets: %d", gameVars->g_vTargets.size());
    
    for (size_t i = 0; i < gameVars->g_vTargets.size(); i++) {
        const auto& target = gameVars->g_vTargets[i];
        ImGui::Text("[%d] %s", i, target.m_strName.c_str());
        ImGui::Text("  Pos: (%.1f, %.1f, %.1f)", 
                    target.m_vPos3D.x, target.m_vPos3D.y, target.m_vPos3D.z);
        ImGui::Text("  Health: %.1f, Visible: %s", 
                    target.m_fHealth, target.m_bVisible ? "Yes" : "No");
        ImGui::Separator();
    }
    
    ImGui::End();
});
```

---

## 🤝 Contributing

### How to Contribute

1. **Fork** the repository
2. **Create** a branch for your feature (`git checkout -b feature/amazing-feature`)
3. **Commit** your changes (`git commit -m 'Add some amazing feature'`)
4. **Push** to the branch (`git push origin feature/amazing-feature`)
5. **Open** a Pull Request

### Code Guidelines

#### Coding Style
```cpp
// Use camelCase for variables and functions
int playerCount = 0;
void updateTargets() { }

// Use PascalCase for classes
class GameManager { };

// Use SCREAMING_SNAKE_CASE for constants
const int MAX_PLAYERS = 64;

// Use m_ prefix for class members
class MyClass {
private:
    int m_memberVariable;
    std::string m_memberString;
};
```

#### Documentation
```cpp
/**
 * @brief Updates the target list from the game
 * 
 * This function scans the game's memory to find all active players
 * and adds them to the target list for ESP and Aimbot features.
 * 
 * @param gameVars Pointer to shared game variables
 * @param memService Service for game memory access
 * @return true if update succeeded, false otherwise
 * 
 * @example
 * ```cpp
 * if (updateTargetList(gameVars, memService)) {
 *     spdlog::info("Found {} targets", gameVars->g_vTargets.size());
 * }
 * ```
 */
bool updateTargetList(std::shared_ptr<GameVariables> gameVars, 
                     std::shared_ptr<CMemoryService> memService);
```

### Adding Support for New Games

#### New Game Template
```cpp
// example-newgame-internal/dllmain.cpp
#include <Windows.h>
#include <xenon/xenon.hpp>
#include "newgame_sdk.hpp"  // Game-specific SDK

DWORD WINAPI MainThread(LPVOID lpReserved) {
    Builder builder("NewGame Internal Cheat");
    
    // Game-specific configuration
    auto system = builder.xenon->g_pSystem;
    system->IsInternal(true);
    system->SetGameDimension(GameDimension::DIM_3D);
    
    // ESP-specific configurations
    auto espConfig = builder.xenonConfig->g_pEspConfig;
    espConfig->m_nLimitDistance = NEWGAME_MAX_RENDER_DISTANCE;
    
    // Specific World-to-Screen
    system->m_fnW2S3D = [](Vec3 pos) {
        // NewGame-specific implementation
        return NewGameSDK::WorldToScreen(pos);
    };
    
    // Specific update loop
    builder.GameManager->OnEvent("Update", [builder]() {
        // Specific logic to find targets in NewGame
        auto gameVars = builder.xenonConfig->g_pGameVariables;
        gameVars->g_vTargets.clear();
        
        // Specific implementation...
    });
    
    Cheat cheat = builder.Build();
    cheat.UseUICustom(RenderingBackend::DIRECTX11);
    cheat.UseESPBox3D();
    
    HMODULE hModule = static_cast<HMODULE>(lpReserved);
    cheat.Run(hModule);
    
    return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    }
    return TRUE;
}
```

### Testing

#### Unit Tests
```cpp
// test/test_memory_service.cpp
#include <gtest/gtest.h>
#include <xenon/components/services/memory_service.hpp>

TEST(MemoryServiceTest, ReadWriteBasicTypes) {
    CMemoryService memService;
    
    // Test with current process
    ASSERT_TRUE(memService.AttachGame(GetCurrentProcessId()));
    
    // Test read/write
    int testValue = 42;
    int* testPtr = &testValue;
    
    int readValue = memService.Read<int>(reinterpret_cast<uintptr_t>(testPtr));
    EXPECT_EQ(readValue, 42);
}

TEST(MemoryServiceTest, ReadWriteBasicTypes) {
    CMemoryService memService;

    // Attach to the current process
    ASSERT_TRUE(memService.AttachGame(GetCurrentProcessId()));

    // Prepare a test value
    int testValue = 12345;
    int* testPtr = &testValue;

    // Read the value using the memory service
    int readValue = memService.Read<int>(reinterpret_cast<uintptr_t>(testPtr));
    EXPECT_EQ(readValue, 12345);

    // Write a new value
    memService.Write<int>(reinterpret_cast<uintptr_t>(testPtr), 54321);
    EXPECT_EQ(testValue, 54321);
}
```

### Examples of Useful Contributions

1. **Support for new game engines** (Unity 2023, UE5, etc.)
2. **New ESP features** (bone highlighting, distance-based colors)
3. **Improved aimbot algorithms** (advanced prediction, anti-recoil)
4. **Performance optimizations** (memory caching, threading)
5. **Support for new rendering backends** (Vulkan)
6. **Reverse engineering utilities** (signature scanner, structure analyzer)

---

## 📄 License

This project is released under the MIT License. See the [LICENSE.md](LICENSE.md) file for complete details.

```
MIT License

Copyright (c) 2024 Xenon Framework

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

---

## 🔗 Useful Links

- **[GitHub Repository](https://github.com/kiocode/xenon-cheats)** - Source code
- **[Issues](https://github.com/kiocode/xenon-cheats/issues)** - Bug reports and feature requests
- **[Discussions](https://github.com/kiocode/xenon-cheats/discussions)** - Community forum
- **[Wiki](https://github.com/kiocode/xenon-cheats/wiki)** - Extended documentation
- **[Releases](https://github.com/kiocode/xenon-cheats/releases)** - Download stable versions

### Community

- **Discord**: [Xenon Community Server](https://discord.gg/DceN7MuHGu)
- **Reddit**: (will be created if requested)
- **YouTube**: Tutorial videos ([First Video](https://youtu.be/t6bu8GVjp1I?si=8bXNeL3MPiZfinUz), [Second Video](https://youtu.be/N6ny3yoWxlc?si=Ez31x3fczTq_38cI), if you make a video send it on the discord server and tag the staff to be added there)

---

## ⭐ Star History

[![Star History Chart](https://api.star-history.com/svg?repos=kiocode/xenon-cheats&type=Date)](https://star-history.com/#kiocode/xenon-cheats&Date)

---

<div align="center">

**[⬆ Back to top](#-table-of-contents)**

Made with ❤️ by the Xenon Framework Team

</div>
