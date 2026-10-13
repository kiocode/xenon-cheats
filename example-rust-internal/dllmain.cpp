#include <stdio.h>
#include <windows.h>
#include <iostream>

#include <xenon/xenon.hpp>
#include <spdlog/spdlog.h>

#include <xenon/components/features/waypoints.hpp>
#include <xenon/components/features/aimbot.hpp>
#include <xenon/models/waypoint.hpp>
#include <il2cpp_resolver/il2cpp_resolver.hpp>

#include "RustDump/il2cpp.h"

float head = 0.8f;
float feet = -0.8f;
float width = 300.0f;

bool WorldToScreen(Vec2 screenSize, Vec3 world, Vec2& screen)
{
	Unity::CCamera* cameraMain = Unity::Camera::GetMain();
	if (!cameraMain) {
		return false;
	}

	Unity::Vector3 buffer = cameraMain->CallMethodSafe<Unity::Vector3>("WorldToScreenPoint", Unity::Vector3(world.x, world.y, world.z), Unity::m_eCameraEye::m_eCameraEye_Center);

	if (buffer.x > screenSize.x || buffer.y > screenSize.y || buffer.x < 0 || buffer.y < 0 || buffer.z < 0)
	{
		return false;
	}

	if (buffer.z > 0.0f)
	{
		screen = Vec2(buffer.x, screenSize.y - buffer.y);
	}

	if (screen.x > 0 || screen.y > 0)
	{
		return true;
	}

	return false;
}

std::vector<Unity::il2cppMethodInfo*> DumpMethods(std::string component, std::string classname) {
	std::vector<Unity::il2cppMethodInfo*> methods_to_return;
	Unity::CGameObject* component_obj = Unity::GameObject::Find(component.c_str());
	if (!component_obj) {
		return methods_to_return;
	}

	size_t pos = classname.find("::");
	classname.erase(0, pos + 2);

	Unity::CComponent* ccc = component_obj->GetComponent(classname.c_str());
	if (!ccc) {
		return methods_to_return;
	}

	ccc->FetchMethods(&methods_to_return);

	return methods_to_return;
}

std::vector<std::string> DumpMethodsString(std::string component, std::string classname) {
	std::vector<std::string> methods_to_return;
	std::cout << "\nDumping methods of " << classname.c_str() << "...\n" << std::endl;

	std::vector<Unity::il2cppMethodInfo*> methods = DumpMethods(component, classname);

	for (Unity::il2cppMethodInfo* method : methods) {
		if (!method) {
			return methods_to_return;
		}

		std::string name = method->m_pName;
		methods_to_return.push_back(name);
		std::cout << "--> " << name.c_str() << "\n" << std::endl;
	}

	return methods_to_return;
}

std::vector<Unity::CComponent*> DumpClasses(std::string component) {
	std::vector<Unity::CComponent*> classes_to_return;

	Unity::CGameObject* component_obj = Unity::GameObject::Find(component.c_str());
	if (!component_obj) {
		return classes_to_return;
	}

	auto components = component_obj->GetComponents(UNITY_COMPONENT_CLASS);
	for (int n = 0; n < components->m_uMaxLength; n++)
	{
		if (!components->operator[](n))
			continue;

		classes_to_return.push_back(components->operator[](n));
	}

	return classes_to_return;
}

std::vector<std::string> DumpClassesString(std::string component) {
	std::vector<std::string> classes_to_return;
	std::cout << "\nDumping classes of " << component.c_str() << "...\n" << std::endl;

	std::vector<Unity::CComponent*> classes = DumpClasses(component);
	for (Unity::CComponent* class_obj : classes)
	{
		if (!class_obj)
			continue;

		std::string name = std::string(class_obj->m_Object.m_pClass->m_pNamespace) + "::" + std::string(class_obj->m_Object.m_pClass->m_pName);
		classes_to_return.push_back(name);
		std::cout << "--> " << name.c_str() << "\n" << std::endl;
	}
	return classes_to_return;
}

std::vector<Unity::CComponent*> DumpComponents() {
	std::vector<Unity::CComponent*> compenents_to_return;

	auto list = Unity::Object::FindObjectsOfType<Unity::CComponent>(UNITY_COMPONENT_CLASS);
	for (int i = 0; i < list->m_uMaxLength + 1; i++)
	{
		if (!list->operator[](i))
			continue;

		compenents_to_return.push_back(list->operator[](i));
	}
	return compenents_to_return;
}

std::vector<std::string> DumpComponentsString() {
	std::vector<std::string> compenents_to_return;
	std::cout << "\nDumping components...\n" << std::endl;

	std::vector<Unity::CComponent*> components = DumpComponents();
	for (Unity::CComponent* component : components)
	{
		if (!component)
			continue;

		Unity::CGameObject* object = component->GetMemberValue<Unity::CGameObject*>("gameObject");
		std::string name = object->GetName()->ToString();
		compenents_to_return.push_back(name);
	}

	return compenents_to_return;
}

void DrawInspector() {
	ImGui::SetNextWindowSize(ImVec2(600.000f, 1000.000f), ImGuiCond_Once);
	if (!ImGui::Begin("Inspector", nullptr, 2)) {
		ImGui::End();
		return;
	}

	static std::vector<std::string> components;
	static std::vector<std::string> classes;
	static std::vector<std::string> methods;
	static std::string current_comp = "";

	ImGui::Text("Components");
	if (ImGui::Button("Update##comp")) {
		components = DumpComponentsString();
	}
	ImGui::SetNextItemWidth(150.000f);
	static int component_current_idx = 0; 
	static ImGuiTextFilter c_filter;
	c_filter.Draw("Search##compfilter");
	if (ImGui::BeginListBox("##Components", ImVec2(-FLT_MIN, 200)))
	{
		for (size_t n = 0; n < components.size(); n++)
		{
			if (!c_filter.PassFilter(components[n].c_str())) {
				continue;
			}
			const bool comp_is_selected = (component_current_idx == (int)n);
			if (ImGui::Selectable(components[n].c_str(), comp_is_selected))
				component_current_idx = (int)n;

			if (comp_is_selected)
				ImGui::SetItemDefaultFocus();
		}
		ImGui::EndListBox();
	}
	ImGui::Spacing();
	ImGui::Text("Classes");
	if (ImGui::Button("Update##class")) {
		classes = DumpClassesString(components[component_current_idx]);
		current_comp = components[component_current_idx];
	}

	ImGui::SetNextItemWidth(150.000f);
	static int class_current_idx = 0; 
	static ImGuiTextFilter cl_filter;
	cl_filter.Draw("Search##classfilter");
	if (ImGui::BeginListBox("##Class", ImVec2(-FLT_MIN, 200)))
	{
		for (size_t n = 0; n < classes.size(); n++)
		{
			if (!cl_filter.PassFilter(classes[n].c_str())) {
				continue;
			}
			const bool class_is_selected = (class_current_idx == (int)n);
			if (ImGui::Selectable(classes[n].c_str(), class_is_selected)) {
				class_current_idx = (int)n;
			}

			if (class_is_selected)
				ImGui::SetItemDefaultFocus();
		}
		ImGui::EndListBox();
	}

	ImGui::Spacing();
	ImGui::Text("Methods");
	if (ImGui::Button("Update##Methods")) {
		methods = DumpMethodsString(current_comp, classes[class_current_idx]);
	}

	ImGui::SetNextItemWidth(150.000f);
	static int method_current_idx = 0;
	static ImGuiTextFilter me_filter;
	me_filter.Draw("Search##methodfilter");
	if (ImGui::BeginListBox("##Methods", ImVec2(-FLT_MIN, 200)))
	{
		for (size_t n = 0; n < methods.size(); n++)
		{
			if (!me_filter.PassFilter(methods[n].c_str())) {
				continue;
			}
			const bool meth_is_selected = (method_current_idx == (int)n);
			if (ImGui::Selectable(methods[n].c_str(), meth_is_selected))
				method_current_idx = (int)n;

			if (meth_is_selected)
				ImGui::SetItemDefaultFocus();
		}
		ImGui::EndListBox();
	}

	ImGui::End();
}


DWORD WINAPI MainThread(LPVOID lpReserved)
{

	Builder builder("Rust internal");

	std::shared_ptr<RadarConfig> pRadarConfig = builder.xenonConfig->g_pRadarConfig;
	std::shared_ptr<UIConfig> pUIConfig = builder.xenonConfig->g_pUIConfig;
	std::shared_ptr<CWaypoints> pWaypoints = builder.xenon->g_cWaypoints;
	std::shared_ptr<GameVariables> pGameVariables = builder.xenonConfig->g_pGameVariables;
	std::shared_ptr<System> pSystem = builder.xenon->g_pSystem;

	pSystem->IsInternal(true);
	pSystem->IsUnityEngine(UnityEngineType::IL2CPP);

	builder.SetInfoLogLevel();
	builder.SetConsoleEnabled();

	pSystem->SetGameDimension(GameDimension::DIM_3D);
	pSystem->m_fnW2S3D = [pSystem, pGameVariables](Vec3 pos) {	
		Vec2 screenPos;
		WorldToScreen(pSystem->GetScreenResolution(), pos, screenPos);

		return screenPos;
	};

	pUIConfig->m_vFnOverlays.push_back([builder, pWaypoints, pGameVariables, pSystem]() {
		ImGui::Begin("Rust internal");

		ImGui::Text("Base: 0x%llx", pSystem->g_pUnityBase);
		ImGui::Text("GameAssembly: 0x%llx", pSystem->g_pUnityGameAssembly);
		ImGui::Text("UnityPlayer: 0x%llx", pSystem->g_pUnityPlayer);

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

	//pUIConfig->m_vFnOverlays.push_back([builder, pWaypoints, pGameVariables, pSystem]() {
	//	DrawInspector();
	//});

	builder.xenon->g_pSystem->m_fDistanceScale = 0.6f;
	builder.xenonConfig->g_pEspConfig->m_fHealthBarWidth = 35;

	pUIConfig->m_qActions->AddSlider("Head", &head, -10.0f, 10.0f);
	pUIConfig->m_qActions->AddSlider("Feet", &feet, -10.0f, 10.0f);
	pUIConfig->m_qActions->AddSlider("Width", &width, 0.0f, 300.0f);
	pUIConfig->m_qActions->AddSlider("Distance Scale", &builder.xenon->g_pSystem->m_fDistanceScale, 0.0f, 100.0f);

	builder.GameManager->OnEvent("Update", [builder, pGameVariables]() {
		while(true) {
			void* m_pThisThread = IL2CPP::Thread::Attach(IL2CPP::Domain::Get());
			if (!m_pThisThread) return;

			pGameVariables->g_vTargets.clear();

			Unity::il2cppArray<Unity::CComponent*>* pTargets = nullptr;
			try {
				pTargets = Unity::Object::FindObjectsOfType<Unity::CComponent>("BasePlayer");
			}
			catch (std::exception e) {
				spdlog::error("Error: {}", e.what());
				return;
			}
			if (!pTargets) return;

			for (int i = 0; i < pTargets->m_uMaxLength; i++) {
				BasePlayer_o* current = reinterpret_cast<BasePlayer_o*>(pTargets->operator[](i));
				if (!current) continue;

				Unity::CTransform* currTargetTransform = pTargets->operator[](i)->GetTransform();
				if (!currTargetTransform) continue;

				Unity::Vector3 currTargetPos = currTargetTransform->GetPosition();
				if(currTargetPos.x == 0 && currTargetPos.y == 0 && currTargetPos.z == 0) continue;

				TargetProfile targetProfile;
				targetProfile.m_pOriginalAddress = reinterpret_cast<intptr_t>(current);
				targetProfile.m_fWidth = width;
				targetProfile.m_bTemmate = false;
				targetProfile.m_fHealth = 100.f;
				targetProfile.m_fMaxHealth = 100.f;		
				targetProfile.m_vHeadPos3D = Vec3(currTargetPos.x, currTargetPos.y + head, currTargetPos.z);
				targetProfile.m_vFeetPos3D = Vec3(currTargetPos.x, currTargetPos.y + feet, currTargetPos.z);
				targetProfile.m_vPos3D = Vec3(currTargetPos.x, currTargetPos.y, currTargetPos.z);

				char buffer[64];
				sprintf_s(buffer, "Player %d", i);
				targetProfile.m_strName = buffer;

				if(current == reinterpret_cast<BasePlayer_o*>(pTargets->operator[](pTargets->m_uMaxLength-1)))
					pGameVariables->g_vLocal = targetProfile;
				else
					pGameVariables->g_vTargets.push_back(targetProfile);
			
			}

			IL2CPP::Thread::Detach(m_pThisThread);

			Sleep(1);
		}
	});

	Cheat cheat = builder.Build();
	cheat.UseUICustom(RenderingBackend::DIRECTX11);
	cheat.UseUIMenu();
	cheat.UseUpdate();
	cheat.UseESPSnapline();
	cheat.UseUIRenderOverlays();
	cheat.UseUIRenderEnabledCheats();
	cheat.UseUIRenderMouse();

	HMODULE hModule = static_cast<HMODULE>(lpReserved);
	cheat.Run(hModule);

	if (IL2CPP::Initialize(true)) {
		spdlog::info("Il2Cpp initialize success.");
	}
	else {
		spdlog::error("Il2Cpp initialize failed.");
		Sleep(300);
		exit(0);
	}
	if (!cheat.FetchSDK()) return FALSE;

	return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dReasonForCall, LPVOID lpReserved)
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

