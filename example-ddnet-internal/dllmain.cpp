#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <xenon/components/features/waypoints.hpp>
#include <xenon/components/features/aimbot.hpp>
#include <xenon/models/waypoint.hpp>
#include <xenon/xenon.hpp>
#include <spdlog/spdlog.h>

DWORD WINAPI MainThread(LPVOID lpReserved)
{

	Builder builder("DDNet internal");

	std::shared_ptr<RadarConfig> pRadarConfig = builder.xenonConfig->g_pRadarConfig;
	std::shared_ptr<UIConfig> pUIConfig = builder.xenonConfig->g_pUIConfig;
	std::shared_ptr<CWaypoints> pWaypoints = builder.xenon->g_cWaypoints;
	std::shared_ptr<GameVariables> pGameVariables = builder.xenonConfig->g_pGameVariables;
	std::shared_ptr<System> pSystem = builder.xenon->g_pSystem;
	pSystem->IsInternal(true);

	builder.SetInfoLogLevel();
	builder.SetConsoleEnabled();

	pSystem->SetGameDimension(GameDimension::DIM_3D);

	builder.xenon->g_pSystem->m_fDistanceScale = 0.08;
	builder.xenonConfig->g_pEspConfig->m_fHealthBarWidth = 35;

	pUIConfig->m_qActions->AddSlider("Radar Zoom", &pRadarConfig->m_fZoom, 0.3, 5);
	pUIConfig->m_qActions->AddButton("Reset Radar Zoom", [pRadarConfig]() { pRadarConfig->m_fZoom = 1; });
	pUIConfig->m_qActions->AddSlider("Radar Type", &pRadarConfig->m_nType, 0, 1);

	pUIConfig->m_qActions->AddButton("Set Waypoint", [pGameVariables, pWaypoints]() {
		pWaypoints->SetWaypoint("test", pGameVariables->g_vLocal.m_vPos3D, ImColor(255, 255, 255));
	});

	Cheat cheat = builder.Build();
	cheat.UseUICustom(RenderingBackend::OPENGL);
	cheat.UseUIMenu();
	cheat.UseUIRenderMouse();
	/*cheat.UseUIRadar();
	cheat.UseESPSnapline();
	cheat.UseESPBox2D();
	cheat.UseESPHealthBar();
	cheat.UseUIRenderOverlays();*/
	cheat.UseUIRenderEnabledCheats();
	cheat.UseUIQuickActions();
	//cheat.UseAimbot();

	HMODULE hModule = static_cast<HMODULE>(lpReserved);

	cheat.Run(hModule);

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

