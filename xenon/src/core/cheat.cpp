#include <xenon/core/cheat.hpp>

//#include <kiero/kiero.h>

//#include <il2cpp_resolver/il2cpp_resolver.hpp>

#include <xenon/components/services/ui_service.hpp>

void Cheat::Run(HINSTANCE hinstDLL) {
    if (!m_pXenon->g_pSystem->IsInternal()) {
        //error
        return;
    }

    spdlog::info("Internal cheat initialized");

    //     switch (m_pXenon->g_pSystem->GetRenderingHookType()) {
    //         case RenderingHookType::KIERO: {

    //             bool bInitialized = false;
    //             do
    //             {
    //                 if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
    //                 {
    //                     m_pGame->EnableUpdate();
    //                     bInitialized = true;
    //                 }
    //                 else {
    //                     spdlog::error("Failed to initialize kiero");
    //                     std::this_thread::sleep_for(std::chrono::seconds(3));
    //                 }
    //             } while (!bInitialized);

    //         } break;
    //         case RenderingHookType::DISCORD: {
    //             m_pGame->EnableUpdate();
    //         } break;
    //         case RenderingHookType::STEAM: {
                //	m_pGame->EnableUpdate();
                //} break;
    //     }
    m_pGame->EnableUpdate(hinstDLL);
}

void Cheat::Run() {
    if (m_pXenon->g_pSystem->IsInternal()) {
        spdlog::error("You need to call the method Run passing the parameter HINSTANCE hinstDLL is it's an internal cheat.");
        return;
    }

    spdlog::info("External cheat initialized");

    m_pGame->EnableUpdate();
}

#pragma region Cheat:Private


#pragma endregion
