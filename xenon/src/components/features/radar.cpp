#include "pch.h"
#include <xenon/components/features/radar.hpp>

#include <imgui/imgui.h>
#include <spdlog/spdlog.h>

#include <xenon/core/system.hpp>
#include <xenon/components/features/waypoints.hpp>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void CRadar::Update() {
    if (g_pXenonVariables->g_bRadar) {
        Render();
    }
}

void CRadar::Render() {
    
    if (g_pXenonConfigs->g_pRadarConfig->m_fnCustomRadar) {
        g_pXenonConfigs->g_pRadarConfig->m_fnCustomRadar();
        return;
    }

    switch (g_pXenonConfigs->g_pRadarConfig->m_nType) {
        case 0: RenderRadarBase(RadarShape::CIRCULAR, g_pXenon->g_pSystem->Is3DGame()); break;
        case 1: RenderRadarBase(RadarShape::RECTANGULAR, g_pXenon->g_pSystem->Is3DGame()); break;
        default:
            spdlog::error("Invalid radar type: {}", g_pXenonConfigs->g_pRadarConfig->m_nType);
            break;
    }
}

void CRadar::RenderRadarBase(RadarShape shape, bool is3D) {
    ImGui::Begin("Radar", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
    {
        ImDrawList* drawlist = ImGui::GetWindowDrawList();
        ImVec2 pos = ImGui::GetWindowPos();

        const float radarSize = g_pXenonConfigs->g_pRadarConfig->m_fSize;
        const float centerOffset = radarSize / 2.0f;
        const ImVec2 radarCenter = ImVec2(pos.x + centerOffset, pos.y + centerOffset);
        const float rr = centerOffset - 5.f;

        ImGui::SetWindowSize(ImVec2(radarSize, radarSize));

        // New visual style — matches the live preview
        const ImU32 C_BG     = IM_COL32(11,  15,  20,  220);
        const ImU32 C_RING   = IM_COL32(43,  58,  53,  255);
        const ImU32 C_GRID   = IM_COL32(30,  44,  40,  255);
        const ImU32 C_ACCENT = IM_COL32(43,  228, 160, 255);
        const ImU32 C_BORDER = IM_COL32(30,  38,  48,  255);
        const ImU32 C_DANGER = IM_COL32(255, 93,  122, 255);
        const ImU32 C_TEXT   = IM_COL32(230, 237, 243, 255);

        switch (shape) {
            case RadarShape::CIRCULAR:
                drawlist->AddCircleFilled(radarCenter, rr, C_BG, 64);
                drawlist->AddCircle(radarCenter, rr, C_RING, 64, 1.5f);
                drawlist->AddCircle(radarCenter, rr * 0.6f, C_GRID, 64);
                drawlist->AddCircle(radarCenter, rr * 0.3f, C_GRID, 64);
                break;
            case RadarShape::RECTANGULAR:
                drawlist->AddRectFilled(ImVec2(pos.x + 5, pos.y + 5),
                    ImVec2(pos.x + radarSize - 5, pos.y + radarSize - 5),
                    C_BG, 12.f);
                drawlist->AddRect(ImVec2(pos.x + 5, pos.y + 5),
                    ImVec2(pos.x + radarSize - 5, pos.y + radarSize - 5),
                    C_BORDER, 12.f, 0, 1.5f);
                break;
        }

        // Cross-hair grid lines
        drawlist->AddLine(ImVec2(radarCenter.x, radarCenter.y - rr),
                          ImVec2(radarCenter.x, radarCenter.y + rr), C_GRID);
        drawlist->AddLine(ImVec2(radarCenter.x - rr, radarCenter.y),
                          ImVec2(radarCenter.x + rr, radarCenter.y), C_GRID);

        // Rotating sweep
        float sweep = fmodf((float)ImGui::GetTime() * (float)M_PI / 1.5f, (float)(2.0 * M_PI));
        float arc   = (float)(M_PI * 2.0 * 70.0 / 360.0);
        for (int s = 0; s < 24; s++) {
            float a0 = sweep - arc * (float)s / 24.f;
            float a1 = sweep - arc * (float)(s + 1) / 24.f;
            drawlist->AddTriangleFilled(radarCenter,
                ImVec2(radarCenter.x + cosf(a0) * rr, radarCenter.y + sinf(a0) * rr),
                ImVec2(radarCenter.x + cosf(a1) * rr, radarCenter.y + sinf(a1) * rr),
                IM_COL32(43, 228, 160, (int)((24 - s) / 24.f * 70)));
        }

        // Local player dot
        float localDotR = ImMax(3.f, g_pXenonConfigs->g_pRadarConfig->m_fLocalSize * 0.5f);
        drawlist->AddCircleFilled(radarCenter, localDotR, C_ACCENT);

        auto isPointInRadar = [&](ImVec2 point) -> bool {
            if (shape == RadarShape::CIRCULAR) {
                Vec2 pointConverted = { point.x, point.y };
                Vec2 radarCenterConverted = { radarCenter.x, radarCenter.y };
                float distance = pointConverted.Distance(radarCenterConverted);
                return distance <= (radarSize / 2.0f - 5);
            }
            else if (shape == RadarShape::RECTANGULAR) {
                return point.x >= (pos.x + 5) && point.x <= (pos.x + radarSize - 5) &&
                    point.y >= (pos.y + 5) && point.y <= (pos.y + radarSize - 5);
            }
            return false;
        };

        const float zoomFactor = g_pXenonConfigs->g_pRadarConfig->m_fZoom > 0.0f ? g_pXenonConfigs->g_pRadarConfig->m_fZoom : 1.0f;

        // Blinking alpha for target dots
        float bl = 0.35f + 0.65f * (0.5f + 0.5f * sinf((float)ImGui::GetTime() * (float)(2.0 * M_PI / 1.6)));
        float targetDotR = ImMax(2.f, g_pXenonConfigs->g_pRadarConfig->m_fTargetsSize * 0.5f);

        if (is3D) {
            const Vec3& localPlayerPos = g_pXenonConfigs->g_pGameVariables->g_vLocal.m_vPos3D;
            for (const auto& target : g_pXenonConfigs->g_pGameVariables->g_vTargets) {
                const float relativeX = target.m_vPos3D.x - localPlayerPos.x;
                const float relativeY = target.m_vPos3D.z - localPlayerPos.z;

                const float scaledX = (relativeX / g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale) * radarSize * zoomFactor;
                const float scaledY = (relativeY / g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale) * radarSize * zoomFactor;

                ImVec2 targetPos = ImVec2(radarCenter.x + scaledX, radarCenter.y + scaledY);

                if (isPointInRadar(targetPos)) {
                    drawlist->AddCircleFilled(targetPos, targetDotR,
                        IM_COL32(255, 93, 122, (int)(bl * 255)));

                    if (g_pXenonConfigs->g_pRadarConfig->m_bTargetsName && !target.m_strName.empty()) {
                        drawlist->AddText(
                            ImVec2(targetPos.x + targetDotR + 2.f, targetPos.y - 6.f),
                            C_TEXT, target.m_strName.c_str());
                    }
                }
            }

            if (g_pXenonConfigs->g_pWaypointsConfig->m_bRenderInRadar)
            {
                g_pXenon->g_cWaypoints->RenderInRadar(isPointInRadar, localPlayerPos, g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale, radarSize, zoomFactor, radarCenter);
            }

        } else {
            const Vec2& localPlayerPos = g_pXenonConfigs->g_pGameVariables->g_vLocal.m_vPos2D;
            for (const auto& target : g_pXenonConfigs->g_pGameVariables->g_vTargets) {
                const float relativeX = target.m_vPos2D.x - localPlayerPos.x;
                const float relativeY = target.m_vPos2D.y - localPlayerPos.y;

                const float scaledX = (relativeX / g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale) * radarSize * zoomFactor;
                const float scaledY = (relativeY / g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale) * radarSize * zoomFactor;

                ImVec2 targetPos = ImVec2(radarCenter.x + scaledX, radarCenter.y + scaledY);

                if (isPointInRadar(targetPos)) {
                    drawlist->AddCircleFilled(targetPos, targetDotR,
                        IM_COL32(255, 93, 122, (int)(bl * 255)));

                    if (g_pXenonConfigs->g_pRadarConfig->m_bTargetsName && !target.m_strName.empty()) {
                        drawlist->AddText(
                            ImVec2(targetPos.x + targetDotR + 2.f, targetPos.y - 6.f),
                            C_TEXT, target.m_strName.c_str());
                    }
                }
            }

            if (g_pXenonConfigs->g_pWaypointsConfig->m_bRenderInRadar)
            {
                g_pXenon->g_cWaypoints->RenderInRadar(isPointInRadar, localPlayerPos, g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale, radarSize, zoomFactor, radarCenter);
            }
        }
    }
    ImGui::End();
}
