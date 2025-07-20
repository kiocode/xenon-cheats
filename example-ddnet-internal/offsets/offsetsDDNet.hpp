#pragma once

#pragma pack(push, 1)

#include <cstddef>
#include <cstdint>

namespace offset {
    constexpr std::ptrdiff_t serverStatic = 0x5D8A00;
    constexpr std::ptrdiff_t clientStatic = 0x5AB4D0;
} 

struct Vector2 {
    float x;
    float y;
};

// Created with ReClass.NET 1.2 by KN4CK3R

enum class Directions : int32_t {
    IDLE = 0,
    LEFT = -1,
    RIGHT = 1
};

enum class JumpStatus : int32_t {
    DOUBLE_JUMP = 2,
    DOUBLE_JUMP2 = 3,
    GROUND = 0,
    JUMP = 1
};

enum class GameStatus : int32_t {
    CHAT = 4,
    GAME = 1,
    HOOKLINE = 17,
    HOOKLINE_CHAT = 20,
    HOOKLINE_MENU = 18,
    MENU = 2
};

enum class HookStatus : int32_t {
    HOOKING = 1,
    NO_HOOK = 0
};

enum class KeyStatus : int32_t {
    HOLDING = 1,
    RELEASED = 0
};

class Server {
public:
    class World* worldPtr; // 0x0000
}; // Size: 0x0008

class Coords {
public:
    int32_t x; // 0x0000
    int32_t y; // 0x0004
}; // Size: 0x0008

class Player {
public:
    int32_t gametick;                // 0x0000
    class Coords playerFixedCoords;  // 0x0004
    class Coords vel;                // 0x000C
    int32_t aimAngle;                // 0x0014
    Directions movementDirection;    // 0x0018
    JumpStatus jump;                 // 0x001C
    char pad_0020[4];                // 0x0020
    int32_t hook;                    // 0x0024
    int32_t timeHooked;              // 0x0028
    class Coords playerFixedCoords2; // 0x002C
    class Coords lastHookCoords;     // 0x0034
    GameStatus gameStatus;           // 0x003C
    char pad_0040[4];                // 0x0040
    int32_t frozenTime;              // 0x0044
    char pad_0048[4];                // 0x0048
    int32_t selectedWeapon;          // 0x004C
    bool frozen;                     // 0x0050
    int32_t lastTickFired;           // 0x0051
    char pad_0055[3];                // 0x0055
}; // Size: 0x0058

class Entity : public Player {
public:
    char pad_0058[120];     // 0x0058
    class Coords aimCoords; // 0x00D0
    char pad_00D8[4];       // 0x00D8
    int32_t tick;           // 0x00DC
    char pad_00E0[8];       // 0x00E0
    Vector2 playerPos;      // 0x00E8
    char pad_00F0[8];       // 0x00F0
}; // Size: 0x00F8

class World {
public:
    char pad_0000[8464];       // 0x0000
    int32_t idLocalPlayer;     // 0x2110
    int32_t onlinePlayers;     // 0x2114
    int32_t onlinePlayers2;    // 0x2118
    char pad_211C[56];         // 0x211C
    class Entity entities[64]; // 0x2154
    char pad_5F54[256];        // 0x5F54
}; // Size: 0x6054

class Client {
public:
    class LocalPlayer* localPlayerPtr; // 0x0000
}; // Size: 0x0008

class LocalPlayerData {
public:
    char pad_0000[40];      // 0x0000
    Directions direction;   // 0x0028
    class Coords aimPos;    // 0x002C
    KeyStatus jump;         // 0x0034
    int32_t fire;           // 0x0038
    HookStatus hook;        // 0x003C
    GameStatus gameStatus;  // 0x0040
    char pad_0044[4];       // 0x0044
    int32_t mouseWheelDown; // 0x0048
    int32_t mouseWheelUp;   // 0x004C
}; // Size: 0x0050

class Dummy {
public:
    Directions direction;   // 0x0000
    class Coords aimPos;    // 0x0004
    KeyStatus jump;         // 0x000C
    int32_t fire;           // 0x0010
    KeyStatus hook;         // 0x0014
    GameStatus gameStatus;  // 0x0018
    char pad_001C[4];       // 0x001C
    int32_t mouseWheelDown; // 0x0020
    int32_t mouseWheelUp;   // 0x0024
}; // Size: 0x0028

class LocalPlayer {
public:
    char pad_0000[16];                      // 0x0000
    Vector2 aimPosScreen;                   // 0x0010
    Vector2 aimPosScreenDummy;              // 0x0018
    char pad_0020[16];                      // 0x0020
    Vector2 aimPosWorld;                    // 0x0030
    class LocalPlayerData localPlayerData;  // 0x0038
    class LocalPlayerData localPlayerData2; // 0x0088
    class Dummy dummy;                      // 0x00D8
    KeyStatus leftDir;                      // 0x0100
    char pad_0104[4];                       // 0x0104
    KeyStatus rightDir;                     // 0x0108
    char pad_010C[4];                       // 0x010C
    KeyStatus hookLine;                     // 0x0110
}; // Size: 0x0114

#pragma pack(pop)
