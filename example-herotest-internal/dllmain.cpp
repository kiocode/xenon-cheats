#include <Windows.h>

#include "basic_ue.hpp"
#include <xenon/xenon.hpp>

// test variables
float width = 160000;
float head = 62;
float feet = -102;
float scale = 0.01;


DWORD WINAPI MainThread(LPVOID lpReserved) {
    // going to use xenon there

    Builder builder("Hero Example");

    std::shared_ptr<GameVariables> pGameVariables = builder.xenonConfig->g_pGameVariables;
    std::shared_ptr<EspConfig> pEspConfig= builder.xenonConfig->g_pEspConfig;
    std::shared_ptr<UIConfig> pUIConfig = builder.xenonConfig->g_pUIConfig;
    std::shared_ptr<AimConfig> pAimConfig = builder.xenonConfig->g_pAimConfig;
    std::shared_ptr<RadarConfig> pRadarConfig = builder.xenonConfig->g_pRadarConfig;
    std::shared_ptr<System> pSystem = builder.xenon->g_pSystem;

    pSystem->IsInternal(true);
    pSystem->IsUnrealEngine(UnrealEngineVersion::UE4);
    pSystem->SetGameDimension(GameDimension::DIM_3D);

    builder.SetInfoLogLevel();
    builder.SetConsoleEnabled();

    pSystem->m_fnW2S3D = [](Vec3 pos) {
        SDK::FVector2D screenPos; // <-- result
        SDK::FVector unrealPos(pos.x, pos.z, pos.y);
        if (UE::m_pMyController->ProjectWorldLocationToScreen(unrealPos, &screenPos, false)) {
            return Vec2(screenPos.X, screenPos.Y);
        }
        else {
            return Vec2(-99, -99);
        }
	};

    // set configurations
    pSystem->m_fDistanceScale = 0.06f;
    pAimConfig->m_nLimitDistance = 100000;
    pEspConfig->m_nLimitDistance = 100000;
    pEspConfig->m_fHealthBarWidth = 40;

    // SET DEBUG VALUES
	pUIConfig->m_qActions->AddSlider("Width", &width, 100000, 300000);
    pUIConfig->m_qActions->AddSlider("Head", &head, 0, 900);
    pUIConfig->m_qActions->AddSlider("Feet", &feet, -900, 0);
    pUIConfig->m_qActions->AddSlider("Distance scale", &pSystem->m_fDistanceScale, 0.001, 2);
    pUIConfig->m_qActions->AddSlider("Radar scale", &pRadarConfig->m_fDefaultScale, 0, 100000);
    pUIConfig->m_qActions->AddSlider("Limit Esp Distance", &pEspConfig->m_nLimitDistance, 0, 100000);
    pUIConfig->m_qActions->AddSlider("Limit Aim Distance", &pAimConfig->m_nLimitDistance, 0, 100000);

	pUIConfig->m_qActions->AddButton("Dump", []() {
        for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
            SDK::UObject* pObject = SDK::UObject::GObjects->GetByIndex(i);
            if (!pObject->IsA(SDK::ACharacter::StaticClass())) continue;

        }
	});

    pUIConfig->m_qActions->AddButton("Start", [builder, pGameVariables]() {
        builder.GameManager->OnEvent("Update", [builder, pGameVariables]() {
            if (!UE::FetchSDK()) return;

            pGameVariables->g_vTargets.clear();

            SDK::FVector myPos = UE::m_pMyController->K2_GetActorLocation();
            pGameVariables->g_vLocal.m_vPos3D = Vec3(myPos.X, myPos.Z, myPos.Y); // ue use y and z in reverse

            for (int i = 0; i < SDK::UObject::GObjects->Num(); i++) {
                SDK::UObject* pObject = SDK::UObject::GObjects->GetByIndex(i);
                if (!pObject->IsA(SDK::ACharacter::StaticClass())) continue; // there we can set a specific class that will go to search later

                // using ACharacter for the moment
                SDK::ACharacter* target = static_cast<SDK::ACharacter*>(pObject);
                if (!target || target == nullptr || !target->Controller || target->Controller->IsLocalPlayerController()) continue;
                // maybe later check life

                SDK::FVector targetPos = target->K2_GetActorLocation();

                if (targetPos.X == 0 && targetPos.Y == 0 && targetPos.Z == 0) continue;

                TargetProfile targetProfile;
                // a trick to set a unique id is use the memory address
                //targetProfile.m_pOriginalAddress = reinterpret_cast<int>(target);
                targetProfile.m_fWidth = width;
                targetProfile.m_vHeadPos3D = Vec3(targetPos.X, targetPos.Z + head, targetPos.Y);
                targetProfile.m_vPos3D = Vec3(targetPos.X, targetPos.Z, targetPos.Y);
                targetProfile.m_vFeetPos3D = Vec3(targetPos.X, targetPos.Z + feet, targetPos.Y);
                targetProfile.m_strName = target->GetName();
                targetProfile.m_fHealth = target->GetLifeSpan(); // not working always
                targetProfile.m_bVisible = UE::m_pMyController->LineOfSightTo(target, UE::m_pMyController->PlayerCameraManager->CameraCachePrivate.POV.Location, false);

                pGameVariables->g_vTargets.push_back(targetProfile);

            }

        });
    });
 


    // maybe add overlay to check available targets
    pUIConfig->m_vFnOverlays.push_back([pGameVariables]() {
        ImGui::Begin("Test UI");

        ImGui::Text("Engine: 0x%llx", UE::m_pEngine);
        ImGui::Text("World: 0x%llx", UE::m_pWorld);
        ImGui::Text("MyCharacter: 0x%llx", UE::m_pMyCharacter);

        ImGui::Separator();

        ImGui::Text("LocalPlayer:");
        ImGui::Text("Name: %s", pGameVariables->g_vLocal.m_strName.c_str());
        ImGui::Text("Pos: %f %f %f", pGameVariables->g_vLocal.m_vPos3D.x, pGameVariables->g_vLocal.m_vPos3D.y, pGameVariables->g_vLocal.m_vPos3D.z);

        ImGui::Separator();

        ImGui::Text("Targets: %d", pGameVariables->g_vTargets.size());
        for (auto& target : pGameVariables->g_vTargets) {
            ImGui::Text("Name: %s", target.m_strName.c_str());
            ImGui::Text("Pos: %f %f %f", target.m_vPos3D.x, target.m_vPos3D.y, target.m_vPos3D.z);
        }

        ImGui::End();
    });

    Cheat cheat = builder.Build();
    cheat.UseUICustom(RenderingHookType::KIERO, RenderingBackend::DX11);
    cheat.UseUIMenu();
    cheat.UseUIRenderMouse();
    cheat.UseUIRenderEnabledCheats(); // <-- minecraft style at right top
    cheat.UseUIRenderOverlays(); 
    cheat.UseUIQuickActions(); // testing values of the game like scales

    cheat.Run();

    return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
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

