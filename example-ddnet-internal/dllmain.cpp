#include <windows.h>
#include <cmath>
#include <minhook/include/MinHook.h>
#include <imgui/imgui.h>
#include <xenon/components/features/waypoints.hpp>
#include <xenon/components/features/aimbot.hpp>
#include <xenon/models/waypoint.hpp>
#include <xenon/xenon.hpp>
#include <spdlog/spdlog.h>
#include "configs.hpp"

// ─── SDL mouse-capture fix ────────────────────────────────────────────────────
// DDNet keeps SDL in SDL_SetRelativeMouseMode(SDL_TRUE) while in-game, which
// locks the cursor to the window center and hides it. ImGui can't track the
// mouse in that state. We hook SDL_SetRelativeMouseMode so DDNet can't
// re-enable it while our menu is open.

using fnSDL_SetRelMouse = int(*)(int);
static fnSDL_SetRelMouse g_oSetRelMouse = nullptr;
static bool g_menuOpen = false;

static int hk_SDL_SetRelativeMouseMode(int enabled)
{
    // Block the game from re-enabling relative mode while our menu is open
    if (g_menuOpen && enabled) return 0;
    return g_oSetRelMouse(enabled);
}

static void HookSDLMouse()
{
    HMODULE hSDL = GetModuleHandleA("SDL2.dll");
    if (!hSDL) return;
    void* fn = reinterpret_cast<void*>(GetProcAddress(hSDL, "SDL_SetRelativeMouseMode"));
    if (!fn) return;
    MH_Initialize(); // safe to call again — xenon already called it
    if (MH_CreateHook(fn, hk_SDL_SetRelativeMouseMode,
                      reinterpret_cast<void**>(&g_oSetRelMouse)) == MH_OK)
        MH_EnableHook(fn);
}

static void SetMouseMode(bool menuOpen)
{
    if (menuOpen == g_menuOpen) return;
    g_menuOpen = menuOpen;
    if (!g_oSetRelMouse) return;
    if (menuOpen) {
        g_oSetRelMouse(0); // SDL_FALSE — release cursor
        ClipCursor(nullptr);
    } else {
        g_oSetRelMouse(1); // SDL_TRUE — restore game capture
    }
}

// ─── Game state reading ───────────────────────────────────────────────────────

static bool TryReadState(DDNet::GameState& out)
{
    __try {
        return DDNet::GetGameState(out) && out.valid && out.localId >= 0;
    }
    __except(EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

static void UpdateGameVariables(GameVariables* gv)
{
    DDNet::GameState state{};
    if (!TryReadState(state)) return;

    int localTeam = -1;
    if (state.players[state.localId].active)
        localTeam = state.players[state.localId].team;

    gv->g_vTargets.clear();

    for (int i = 0; i < 128; ++i)
    {
        const DDNet::Player& p = state.players[i];
        if (!p.active) continue;

        TargetProfile tp;
        tp.m_pOriginalAddress = static_cast<intptr_t>(i);

        tp.m_vPos2D      = Vec2(p.x, p.y);
        tp.m_vHeadPos2D  = Vec2(p.x, p.y - DDNet_TeeRadius);
        tp.m_vFeetPos2D  = Vec2(p.x, p.y + DDNet_TeeRadius);
        tp.m_vVelocity2D = Vec2(p.velX, p.velY);

        tp.m_vPos3D      = Vec3(p.x, p.y, 0.f);
        tp.m_vHeadPos3D  = Vec3(p.x, p.y - DDNet_TeeRadius, 0.f);
        tp.m_vFeetPos3D  = Vec3(p.x, p.y + DDNet_TeeRadius, 0.f);
        tp.m_vVelocity3D = Vec3(p.velX, p.velY, 0.f);

        tp.m_fHealth    = static_cast<float>(p.health) * 10.f;
        tp.m_fMaxHealth = 100.f;
        tp.m_fWidth     = DDNet_TeeRadius * 2.f;

        tp.m_strName  = p.name;
        tp.m_strTag   = p.clan;
        tp.m_bTemmate = (localTeam >= 0 && p.team == localTeam);
        tp.m_bVisible = true;

        if (p.isLocal)
            gv->g_vLocal = tp;
        else
            gv->g_vTargets.push_back(tp);
    }

    gv->g_vNearestTarget = nullptr;
    float bestDist = FLT_MAX;
    for (auto& t : gv->g_vTargets)
    {
        float d = gv->g_vLocal.m_vPos2D.Distance(t.m_vPos2D);
        if (d < bestDist) { bestDist = d; gv->g_vNearestTarget = &t; }
    }
}

// ─── Custom data window ─────────────────────────────────────────────────────
// Registered into UIConfig::m_vFnWindows, so it shows when the menu is open and
// "Render UI Windows" is on. Reads the DDNet SDK live each frame.

static const char* WeaponName(int w)
{
    switch (w) {
        case 0: return "hammer";
        case 1: return "gun";
        case 2: return "shotgun";
        case 3: return "grenade";
        case 4: return "laser";
        case 5: return "ninja";
        default: return "?";
    }
}

static const char* TileName(unsigned char idx)
{
    using namespace DDNet::TileType;
    switch (idx) {
        case AIR:         return "air";
        case SOLID:       return "solid";
        case DEATH:       return "death";
        case NOHOOK:      return "nohook";
        case NOLASER:     return "nolaser";
        case THROUGH:     return "through";
        case FREEZE:      return "freeze";
        case UNFREEZE:    return "unfreeze";
        case DEEP_FREEZE: return "deepfreeze";
        case STOP:        return "stop";
        default:          return "other";
    }
}

static void RenderDataWindow()
{
    ImGui::SetNextWindowSize(ImVec2(680.f, 540.f), ImGuiCond_FirstUseEver);
    if (!ImGui::Begin("DDNet - Live Data"))
    {
        ImGui::End();
        return;
    }

    static DDNet::GameState st;
    if (!TryReadState(st))
    {
        ImGui::TextColored(ImVec4(1.f, 0.4f, 0.4f, 1.f), "GameClient not found / read failed");
        ImGui::End();
        return;
    }

    int activeCount = 0;
    for (int i = 0; i < 128; ++i)
        if (st.players[i].active) ++activeCount;

    ImGui::Text("Local ID: %d", st.localId);
    ImGui::SameLine(0.f, 24.f); ImGui::Text("Players online: %d", st.numPlayers);
    ImGui::SameLine(0.f, 24.f); ImGui::Text("Active chars: %d", activeCount);

    if (st.localId >= 0 && st.localId < 128 && st.players[st.localId].active)
    {
        const DDNet::Player& me = st.players[st.localId];
        ImGui::TextColored(ImVec4(1.f, 0.85f, 0.2f, 1.f),
            "Me: %.15s  pos(%.0f, %.0f)  vel(%.1f, %.1f)  HP %d  AP %d  %s%s",
            me.name, me.x, me.y, me.velX, me.velY, me.health, me.armor,
            WeaponName(me.weapon), me.frozen ? "  [FROZEN]" : "");
    }

    ImGui::Separator();

    const ImGuiTableFlags tflags =
        ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg |
        ImGuiTableFlags_ScrollY | ImGuiTableFlags_Resizable |
        ImGuiTableFlags_SizingStretchProp;

    if (ImGui::BeginTable("##players", 10, tflags, ImVec2(0.f, 300.f)))
    {
        ImGui::TableSetupScrollFreeze(0, 1);
        ImGui::TableSetupColumn("ID",     ImGuiTableColumnFlags_WidthFixed, 32.f);
        ImGui::TableSetupColumn("Name",   ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableSetupColumn("Clan",   ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableSetupColumn("Team",   ImGuiTableColumnFlags_WidthFixed, 42.f);
        ImGui::TableSetupColumn("HP",     ImGuiTableColumnFlags_WidthFixed, 34.f);
        ImGui::TableSetupColumn("AP",     ImGuiTableColumnFlags_WidthFixed, 34.f);
        ImGui::TableSetupColumn("Weapon", ImGuiTableColumnFlags_WidthFixed, 66.f);
        ImGui::TableSetupColumn("Pos",    ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableSetupColumn("Vel",    ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableSetupColumn("State",  ImGuiTableColumnFlags_WidthFixed, 60.f);
        ImGui::TableHeadersRow();

        for (int i = 0; i < 128; ++i)
        {
            const DDNet::Player& p = st.players[i];
            if (!p.active) continue;

            ImGui::TableNextRow();

            ImVec4 col = ImVec4(0.90f, 0.93f, 0.95f, 1.f);
            if (p.isLocal)      col = ImVec4(1.f, 0.85f, 0.2f, 1.f);
            else if (p.frozen)  col = ImVec4(0.4f, 0.8f, 1.f, 1.f);

            ImGui::TableSetColumnIndex(0); ImGui::TextColored(col, "%d", p.id);
            ImGui::TableSetColumnIndex(1); ImGui::TextColored(col, "%.15s", p.name);
            ImGui::TableSetColumnIndex(2); ImGui::Text("%.11s", p.clan);
            ImGui::TableSetColumnIndex(3); ImGui::Text("%d", p.team);
            ImGui::TableSetColumnIndex(4); ImGui::Text("%d", p.health);
            ImGui::TableSetColumnIndex(5); ImGui::Text("%d", p.armor);
            ImGui::TableSetColumnIndex(6); ImGui::TextUnformatted(WeaponName(p.weapon));
            ImGui::TableSetColumnIndex(7); ImGui::Text("%.0f, %.0f", p.x, p.y);
            ImGui::TableSetColumnIndex(8); ImGui::Text("%.1f, %.1f", p.velX, p.velY);
            ImGui::TableSetColumnIndex(9); ImGui::TextUnformatted(p.frozen ? "frozen" : (p.isLocal ? "local" : "ok"));
        }

        ImGui::EndTable();
    }

    if (ImGui::CollapsingHeader("Map / Collision"))
    {
        if (DDNet::Collision* c = DDNet::GetCollision())
        {
            ImGui::Text("Map size: %d x %d tiles", c->width, c->height);
            if (st.localId >= 0 && st.localId < 128 && st.players[st.localId].active)
            {
                const DDNet::Player& me = st.players[st.localId];
                // Player x,y are tile units (snapshot/32) -> native px = *32
                unsigned char t = DDNet::TileAtWorld(c, me.x * 32.f, me.y * 32.f);
                ImGui::Text("Tile under local: %s (%u)", TileName(t), t);
            }
        }
        else
        {
            ImGui::TextDisabled("collision not available");
        }
    }

    if (ImGui::CollapsingHeader("Server tuning"))
    {
        DDNet::TuningParams t{};
        if (DDNet::GetTuning(t))
        {
            ImGui::Text("Gravity: %.2f", t.gravity / 100.f);
            ImGui::Text("Hook length: %.0f   fire speed: %.0f   drag: %.1f",
                t.hookLength / 100.f, t.hookFireSpeed / 100.f, t.hookDragSpeed / 100.f);
            ImGui::Text("Ground speed: %.1f   air speed: %.1f",
                t.groundControlSpeed / 100.f, t.airControlSpeed / 100.f);
        }
        else
        {
            ImGui::TextDisabled("tuning not available");
        }
    }

    if (ImGui::CollapsingHeader("Local input"))
    {
        DDNet::NetPlayerInput in{};
        if (DDNet::GetLocalInput(in))
        {
            ImGui::Text("Target: (%d, %d)", in.targetX, in.targetY);
            ImGui::Text("Dir: %d   Jump: %d   Fire: %d   Hook: %d   Weapon: %s",
                in.direction, in.jump, in.fire, in.hook, WeaponName(in.wantedWeapon));
        }
        else
        {
            ImGui::TextDisabled("input not available");
        }
    }

    ImGui::End();
}

// Radar drawn on the RENDER thread (background draw list), reading the SDK live.
// The built-in CRadar component renders on the cheat-loop thread, so with the
// OpenGL custom backend its draws are lost — this overlay is the one you see.
static void RenderRadarOverlay()
{
    static DDNet::GameState st;
    if (!TryReadState(st)) return;
    if (st.localId < 0 || st.localId >= 128 || !st.players[st.localId].active) return;

    const DDNet::Player& me = st.players[st.localId];

    ImDrawList* dl   = ImGui::GetBackgroundDrawList();
    const ImVec2 disp = ImGui::GetIO().DisplaySize;
    const float  R    = 120.f;
    const ImVec2 c    = ImVec2(disp.x - R - 24.f, R + 40.f);

    dl->AddCircleFilled(c, R, IM_COL32(11, 15, 20, 210), 64);
    dl->AddCircle(c, R, IM_COL32(43, 228, 160, 255), 64, 1.5f);
    dl->AddCircle(c, R * 0.6f, IM_COL32(30, 44, 40, 255), 64);
    dl->AddCircle(c, R * 0.3f, IM_COL32(30, 44, 40, 255), 64);
    dl->AddLine(ImVec2(c.x, c.y - R), ImVec2(c.x, c.y + R), IM_COL32(30, 44, 40, 255));
    dl->AddLine(ImVec2(c.x - R, c.y), ImVec2(c.x + R, c.y), IM_COL32(30, 44, 40, 255));
    dl->AddText(ImVec2(c.x - R, c.y - R - 18.f), IM_COL32(230, 237, 243, 255), "Radar");

    const float viewTiles = 70.f;          // visible radius, in tiles
    const float k = R / viewTiles;         // pixels per tile

    for (int i = 0; i < 128; ++i)
    {
        const DDNet::Player& p = st.players[i];
        if (!p.active || p.isLocal) continue;

        float dx = (p.x - me.x) * k;
        float dy = (p.y - me.y) * k;
        float dist = std::sqrt(dx * dx + dy * dy);
        if (dist > R - 4.f) { float s = (R - 4.f) / dist; dx *= s; dy *= s; } // clamp to rim

        const ImVec2 dp = ImVec2(c.x + dx, c.y + dy);
        const ImU32 col = p.frozen ? IM_COL32(80, 200, 255, 255) : IM_COL32(255, 93, 122, 255);
        dl->AddCircleFilled(dp, 3.f, col);
    }

    dl->AddCircleFilled(c, 3.5f, IM_COL32(43, 228, 160, 255)); // local
}

// ─── Entry ────────────────────────────────────────────────────────────────────

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    Sleep(4000);
    while (!DDNet::Init()) Sleep(500);
    DDNet::InitFunctions(); // resolves engine fn pointers; no-ops until Func RVAs are researched

    HookSDLMouse();

    Builder builder("DDNet internal");

    std::shared_ptr<GameVariables>  pGameVariables = builder.xenonConfig->g_pGameVariables;
    std::shared_ptr<XenonVariables> pXenonVars     = builder.xenonVariables;
    std::shared_ptr<System>         pSystem        = builder.xenon->g_pSystem;
    pSystem->IsInternal(true);

    builder.SetInfoLogLevel();
    builder.SetConsoleEnabled();
    pSystem->SetGameDimension(GameDimension::DIM_2D);

    // World->Screen stub: keeps Game::Update's per-target loop from throwing
    // ("No world to screen 2D function set") on the cheat-loop thread, which
    // would otherwise kill that thread the moment another player is present.
    // Built-in ESP renders on that thread (invisible with the GL backend), so a
    // precise projection buys nothing here; our radar/data use a render-thread path.
    pSystem->m_fnW2S2D = [pSystem](Vec2 world) -> Vec2 {
        (void)world;
        return pSystem->GetScreenCenter();
    };

    builder.GameManager->OnEvent("Update", [pGameVariables, pXenonVars]()
    {
        // Toggle SDL mouse capture when menu state changes
        SetMouseMode(pXenonVars->g_bShowMenu);
        UpdateGameVariables(pGameVariables.get());
    });

    Cheat cheat = builder.Build();
    cheat.UseUICustom(RenderingBackend::OPENGL);
    cheat.UseUIMenu();
    cheat.UseUIRenderMouse();
    cheat.UseUIRenderWindows();
    cheat.UseUIRenderOverlays();
    cheat.UseUIRenderEnabledCheats();
    cheat.UseUIQuickActions();
    cheat.UseUIRadar();
    cheat.UseESPSnapline();
    cheat.UseESPBox2D();
    cheat.UseESPHealthBar();
    cheat.UseAimbot();

    // Render-thread UI (the only path that is visible with the GL custom backend):
    //  - data window: shows when the menu is open + "Render UI Windows" is on
    //  - radar overlay: always visible while overlays are on
    builder.xenonConfig->g_pUIConfig->m_vFnWindows.push_back(RenderDataWindow);
    builder.xenonConfig->g_pUIConfig->m_vFnOverlays.push_back(RenderRadarOverlay);

    cheat.Run(static_cast<HMODULE>(lpReserved));
    return TRUE;
}

BOOL APIENTRY DllMain(HINSTANCE hModule, DWORD dReasonForCall, LPVOID lpReserved)
{
    switch (dReasonForCall)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
