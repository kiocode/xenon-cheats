#pragma once

#pragma pack(push, 1)

#include <cstddef>
#include <cstdint>

namespace offset {
    constexpr std::ptrdiff_t serverStatic = 0x6421E0;
    constexpr std::ptrdiff_t clientStatic = 0x611630;
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

class Entity {
public:
    int32_t connected;      // 0x0000
    class Player player;    // 0x0004
    char pad_005C[120];     // 0x005C
    class Coords aimCoords; // 0x00D4
    char pad_00DC[4];       // 0x00DC
    int32_t tick;           // 0x00E0
    char pad_00E4[8];       // 0x00E4
    Vector2 playerPos;      // 0x00EC
    char pad_00F4[4];       // 0x00F4
}; // Size: 0x00F8

class World {
public:
    char pad_0000[8992];       // 0x0000
    int32_t idLocalPlayer;     // 0x2320
    int32_t onlinePlayers;     // 0x2324
    char pad_2328[56];         // 0x2328
    class Entity entities[64]; // 0x2360
    char pad_6160[256];        // 0x6160
}; // Size: 0x6260

class Client {
public:
    class LocalPlayer* localPlayerPtr; // 0x0000
}; // Size: 0x0008

class LocalPlayerData {
public:
    int32_t gametick;        // 0x0000
    int32_t increaseEach10s; // 0x0004
    Directions direction;    // 0x0008
    class Coords aimPos;     // 0x000C
    KeyStatus jump;          // 0x0014
    int32_t fire;            // 0x0018
    HookStatus hook;         // 0x001C
    GameStatus gameStatus;   // 0x0020
    char pad_0024[4];        // 0x0024
    int32_t mouseWheelDown;  // 0x0028
    int32_t mouseWheelUp;    // 0x002C
}; // Size: 0x0030

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
    char pad_0000[16];                     // 0x0000
    Vector2 aimPosScreen;                  // 0x0010
    Vector2 aimPosScreenDummy;             // 0x0018
    char pad_0020[16];                     // 0x0020
    Vector2 aimPosWorld;                   // 0x0030
    Vector2 aimPosWorldDummy;              // 0x0038
    char pad_0040[24];                     // 0x0040
    class LocalPlayerData localPlayerData; // 0x0058
    class Dummy dummyData;                 // 0x0088
    char pad_00B0[80];                     // 0x00B0
    KeyStatus leftDir;                     // 0x0100
    char pad_0104[4];                      // 0x0104
    KeyStatus rightDir;                    // 0x0108
    char pad_010C[4];                      // 0x010C
    KeyStatus hookLine;                    // 0x0110
    char pad_0114[8];                      // 0x0114
}; // Size: 0x011C

#pragma pack(pop)
