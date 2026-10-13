#include "pch.h"
#include <xenon/components/services/ui_service.hpp>

#include <dwmapi.h>
#include <spdlog/spdlog.h>

#include <imgui/imgui_internal.h>
#include <xenon/utility/fonts.h>

#include <xenon/core/system.hpp>
#include <xenon/components/features/radar.hpp>
#include <xenon/components/features/waypoints.hpp>
#include <xenon/components/services/notification_service.hpp>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void CUIService::Render() {

	if (g_pXenonVariables->g_bCrosshair) {
		RenderCrosshair();
	}

	if (g_pXenonVariables->g_bFov) {
		RenderFov();
	}

	if (g_pXenonVariables->g_bRenderEnabledCheats) {
		RenderEnabledCheats();
	}

	if (g_pXenonVariables->g_bRenderUI) {
		UpdateUI();
	}
}

void CUIService::Update() {
	if (!m_pSystem->IsInternal() && g_pXenonVariables->g_bRenderUI)
		CUIService::Render();
}

//bool CUIService::InitPresent(IDXGISwapChain* pSwapChain) {
//
//	if (!SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&m_pDeviceDX11)))
//	{
//		return false;
//	}
//
//	m_pDeviceDX11->GetImmediateContext(&m_pContextDX11);
//	DXGI_SWAP_CHAIN_DESC sd;
//	pSwapChain->GetDesc(&sd);
//	m_hWindow = sd.OutputWindow;
//	ID3D11Texture2D* pBackBuffer = nullptr;
//	pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
//	m_pDeviceDX11->CreateRenderTargetView(pBackBuffer, NULL, &m_pMainRenderTargetViewDX11);
//	pBackBuffer->Release();
//
//	oWndProc = (WNDPROC)SetWindowLongPtrA(m_hWindow, GWLP_WNDPROC, (LONG_PTR)WndProc);
//
//	return true;
//}

void CUIService::LoadDefaultFonts()
{
	//ImGui::GetIO().Fonts->AddFontDefault();
	//ImFontConfig font_cfg;
	//font_cfg.GlyphExtraSpacing.x = 1.2f;

	m_pMainFont = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(&mainFontBytes, sizeof(mainFontBytes), 14, NULL, ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
	m_pBiggerMainFont = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(&mainFontBytes, sizeof(mainFontBytes), 23, NULL, ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
	ImFont* notiffont = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(&boldFontBytes, sizeof(boldFontBytes), 18, NULL, ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
	ImFont* logo = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(&logoBytes, sizeof(logoBytes), 48, NULL, ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
	//ImFont* logo_bigger = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(&logoBytes, sizeof(logoBytes), 80, NULL, ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());

	g_pXenon->g_cNotificationService->SetFonts(notiffont, logo);//, logo_bigger);

}

void CUIService::RenderDefaultTheme(bool rainbowBorders) {
	ImVec4* colors = ImGui::GetStyle().Colors;

	// Palette: bg #0B0F14, sidebar #0E1319, card #131920, hover #1B222C,
	//          border #1E2630, track #222B36, text #E6EDF3, muted #8B98A8,
	//          accent #2BE4A0
	colors[ImGuiCol_Text]                 = ImVec4(0.902f, 0.929f, 0.953f, 1.00f);
	colors[ImGuiCol_TextDisabled]         = ImVec4(0.545f, 0.596f, 0.659f, 1.00f);
	colors[ImGuiCol_WindowBg]             = ImVec4(0.043f, 0.059f, 0.078f, 0.97f);
	colors[ImGuiCol_ChildBg]              = ImVec4(0.075f, 0.098f, 0.125f, 1.00f);
	colors[ImGuiCol_PopupBg]              = ImVec4(0.055f, 0.075f, 0.098f, 0.98f);
	colors[ImGuiCol_FrameBg]              = ImVec4(0.133f, 0.169f, 0.212f, 1.00f);
	colors[ImGuiCol_FrameBgHovered]       = ImVec4(0.106f, 0.133f, 0.173f, 1.00f);
	colors[ImGuiCol_FrameBgActive]        = ImVec4(0.118f, 0.149f, 0.188f, 1.00f);
	colors[ImGuiCol_TitleBg]              = ImVec4(0.043f, 0.059f, 0.078f, 1.00f);
	colors[ImGuiCol_TitleBgActive]        = ImVec4(0.043f, 0.059f, 0.078f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed]     = ImVec4(0.043f, 0.059f, 0.078f, 0.50f);
	colors[ImGuiCol_MenuBarBg]            = ImVec4(0.055f, 0.075f, 0.098f, 1.00f);
	colors[ImGuiCol_ScrollbarBg]          = ImVec4(0.043f, 0.059f, 0.078f, 0.50f);
	colors[ImGuiCol_ScrollbarGrab]        = ImVec4(0.133f, 0.169f, 0.212f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.169f, 0.894f, 0.627f, 0.50f);
	colors[ImGuiCol_ScrollbarGrabActive]  = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_CheckMark]            = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_SliderGrab]           = ImVec4(0.902f, 0.929f, 0.953f, 1.00f);
	colors[ImGuiCol_SliderGrabActive]     = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_Button]               = ImVec4(0.075f, 0.098f, 0.125f, 1.00f);
	colors[ImGuiCol_ButtonHovered]        = ImVec4(0.106f, 0.133f, 0.173f, 1.00f);
	colors[ImGuiCol_ButtonActive]         = ImVec4(0.118f, 0.149f, 0.188f, 1.00f);
	colors[ImGuiCol_Header]               = ImVec4(0.075f, 0.098f, 0.125f, 1.00f);
	colors[ImGuiCol_HeaderHovered]        = ImVec4(0.106f, 0.133f, 0.173f, 1.00f);
	colors[ImGuiCol_HeaderActive]         = ImVec4(0.118f, 0.149f, 0.188f, 1.00f);
	colors[ImGuiCol_Separator]            = ImVec4(0.118f, 0.149f, 0.188f, 1.00f);
	colors[ImGuiCol_SeparatorHovered]     = ImVec4(0.169f, 0.894f, 0.627f, 0.50f);
	colors[ImGuiCol_SeparatorActive]      = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_ResizeGrip]           = ImVec4(0.118f, 0.149f, 0.188f, 0.50f);
	colors[ImGuiCol_ResizeGripHovered]    = ImVec4(0.169f, 0.894f, 0.627f, 0.50f);
	colors[ImGuiCol_ResizeGripActive]     = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_PlotLines]            = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered]     = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_PlotHistogram]        = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_TextSelectedBg]       = ImVec4(0.106f, 0.133f, 0.173f, 1.00f);
	colors[ImGuiCol_DragDropTarget]       = ImVec4(0.169f, 0.894f, 0.627f, 1.00f);
	colors[ImGuiCol_Border]               = ImVec4(0.118f, 0.149f, 0.188f, 1.00f);
	colors[ImGuiCol_BorderShadow]         = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);

	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding     = ImVec2(0.f, 0.f);
	style.ItemSpacing       = ImVec2(8.f, 6.f);
	style.IndentSpacing     = 16.f;
	style.GrabMinSize       = 14.f;
	style.ChildBorderSize   = 0.f;
	style.PopupBorderSize   = 1.f;
	style.WindowRounding    = 16.f;
	style.ChildRounding     = 14.f;
	style.FrameRounding     = 8.f;
	style.PopupRounding     = 10.f;
	style.ScrollbarRounding = 999.f;
	style.ScrollbarSize     = 6.f;
	style.GrabRounding      = 999.f;
	style.WindowBorderSize  = 0.f;
	style.WindowTitleAlign  = ImVec2(0.5f, 0.5f);
}

void CUIService::RenderLoginScreen() {

	const ImU32 P_BG     = IM_COL32(11,  15,  20,  255);
	const ImU32 P_BORDER = IM_COL32(30,  38,  48,  255);
	const ImU32 P_CARD2  = IM_COL32(17,  22,  29,  235);
	const ImU32 P_TEXT   = IM_COL32(230, 237, 243, 255);
	const ImU32 P_MUTED  = IM_COL32(139, 152, 168, 255);
	const ImU32 P_ACCENT = IM_COL32(43,  228, 160, 255);
	const ImU32 P_GOLD   = IM_COL32(255, 181, 71,  255);
	const ImU32 P_HOVER  = IM_COL32(27,  34,  44,  255);
	const ImU32 P_TRACK  = IM_COL32(34,  43,  54,  255);

	const ImVec4 V4_FIELD  = ImVec4(11.f/255, 15.f/255, 20.f/255, 1.f);
	const ImVec4 V4_BORDER = ImVec4(30.f/255, 38.f/255, 48.f/255, 1.f);
	const ImVec4 V4_TRANSP = ImVec4(0, 0, 0, 0);

	const float W = 480.f, H = 600.f;
	const float CW = 360.f; // inner form width
	const float CX = (W - CW) * 0.5f;

	ImGuiIO& io = ImGui::GetIO();
	ImGui::SetNextWindowPos(ImVec2((io.DisplaySize.x - W - 10.f) * 0.5f,
	                               (io.DisplaySize.y - H - 10.f) * 0.5f));
	ImGui::SetNextWindowSize(ImVec2(W + 10.f, H + 10.f));

	if (!ImGui::Begin("##loginwnd", nullptr,
		ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBackground))
	{
		ImGui::End();
		return;
	}

	ImVec2 wp = ImGui::GetWindowPos();
	ImVec2 p0 = ImVec2(wp.x + 5.f, wp.y + 5.f);
	ImDrawList* dl = ImGui::GetWindowDrawList();
	float t = (float)ImGui::GetTime();

	// Background + border
	dl->AddRectFilled(p0, ImVec2(p0.x + W, p0.y + H), P_BG, 16.f);
	dl->AddRect(p0, ImVec2(p0.x + W, p0.y + H), P_BORDER, 16.f, 0, 1.f);
	dl->AddRectFilledMultiColor(p0, ImVec2(p0.x + W, p0.y + H * 0.5f),
		IM_COL32(43, 228, 160, 18), IM_COL32(43, 228, 160, 8),
		IM_COL32(43, 228, 160, 0),  IM_COL32(43, 228, 160, 0));

	// Inner card bg
	dl->AddRectFilled(ImVec2(p0.x + CX - 4.f, p0.y + 28.f),
	                  ImVec2(p0.x + CX + CW + 4.f, p0.y + H - 38.f), P_CARD2, 18.f);
	dl->AddRect(ImVec2(p0.x + CX - 4.f, p0.y + 28.f),
	            ImVec2(p0.x + CX + CW + 4.f, p0.y + H - 38.f), P_BORDER, 18.f, 0, 1.f);

	// Logo (floating animation)
	float floatY = sinf(t * 0.8f) * 5.f;
	ImVec2 logoC = ImVec2(p0.x + W * 0.5f, p0.y + 70.f + floatY);

	float pRaw = fmodf(t / 2.4f, 1.f);
	dl->AddCircle(logoC, 26.f * (0.8f + pRaw * 0.8f),
		IM_COL32(43, 228, 160, (int)((1.f - pRaw) * 153.f)), 32, 2.f);
	dl->AddNgonFilled(logoC, 15.f, IM_COL32(15, 26, 22, 255), 6);
	dl->AddNgon(logoC, 17.f, P_ACCENT, 6, 2.f);
	dl->AddLine(ImVec2(logoC.x - 5.f, logoC.y),
	            ImVec2(logoC.x - 1.f, logoC.y + 5.f), P_ACCENT, 2.2f);
	dl->AddLine(ImVec2(logoC.x - 1.f, logoC.y + 5.f),
	            ImVec2(logoC.x + 6.f,  logoC.y - 4.f), P_ACCENT, 2.2f);

	// Title: stacked — "kiocode" centered, app name centered below
	{
		float tw1 = m_pBiggerMainFont->CalcTextSizeA(22.f, FLT_MAX, 0.f, "kiocode").x;
		dl->AddText(m_pBiggerMainFont, 22.f, ImVec2(p0.x + (W - tw1) * 0.5f, p0.y + 92.f), P_TEXT, "kiocode");
		const char* appTitle = g_pXenon->g_pSystem->GetAppTitle()->c_str();
		float tw2 = m_pBiggerMainFont->CalcTextSizeA(14.f, FLT_MAX, 0.f, appTitle).x;
		dl->AddText(m_pBiggerMainFont, 14.f, ImVec2(p0.x + (W - tw2) * 0.5f, p0.y + 117.f), P_ACCENT, appTitle);
	}

	// Subtitle
	const char* subtitle = (m_nLoginPhase == 0) ? "Sign in to continue" : "Preparing...";
	{
		float stw = m_pMainFont->CalcTextSizeA(13.f, FLT_MAX, 0.f, subtitle).x;
		dl->AddText(m_pMainFont, 13.f, ImVec2(p0.x + (W - stw) * 0.5f, p0.y + 136.f), P_MUTED, subtitle);
	}

	// Form child window
	ImGui::SetCursorPos(ImVec2(5.f + CX, 5.f + 158.f));
	ImGui::PushStyleColor(ImGuiCol_ChildBg, V4_TRANSP);
	ImGui::BeginChild("##lf", ImVec2(CW, H - 158.f - 50.f), false,
		ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
	{
		ImDrawList* lf = ImGui::GetWindowDrawList();
		ImVec2 lp = ImGui::GetWindowPos();

		if (m_nLoginPhase == 0) {
			// Segmented switch
			lf->AddRectFilled(ImVec2(lp.x, lp.y), ImVec2(lp.x + CW, lp.y + 44.f), P_BG, 10.f);
			lf->AddRect(ImVec2(lp.x, lp.y), ImVec2(lp.x + CW, lp.y + 44.f), P_BORDER, 10.f, 0, 1.f);

			const char* segLabels[] = { "Account", "License key" };
			float sw = (CW - 8.f) * 0.5f;
			for (int i = 0; i < 2; i++) {
				ImVec2 bMin = ImVec2(lp.x + 4.f + i * (sw + 0.f), lp.y + 4.f);
				ImVec2 bMax = ImVec2(bMin.x + sw, bMin.y + 36.f);
				if (m_nLoginMode == i) lf->AddRectFilled(bMin, bMax, P_HOVER, 8.f);

				ImGui::SetCursorPos(ImVec2(4.f + i * sw, 4.f));
				if (ImGui::InvisibleButton(i == 0 ? "##sa" : "##sb", ImVec2(sw, 36.f)))
					m_nLoginMode = i;

				ImU32 lc = (m_nLoginMode == i) ? P_TEXT : P_MUTED;
				float tw = m_pMainFont->CalcTextSizeA(13.f, FLT_MAX, 0.f, segLabels[i]).x;
				lf->AddText(m_pMainFont, 13.f,
					ImVec2(bMin.x + (sw - tw) * 0.5f, bMin.y + 10.f), lc, segLabels[i]);
			}

			// Input fields
			float fieldY = 54.f;
			ImGui::PushStyleColor(ImGuiCol_FrameBg,        V4_FIELD);
			ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, V4_FIELD);
			ImGui::PushStyleColor(ImGuiCol_FrameBgActive,  V4_FIELD);
			ImGui::PushStyleColor(ImGuiCol_Border,         V4_BORDER);
			ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding,  10.f);
			ImGui::PushStyleVar(ImGuiStyleVar_FramePadding,   ImVec2(42.f, 13.f));
			ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.f);

			if (m_nLoginMode == 0) {
				// Username
				ImGui::SetCursorPos(ImVec2(0.f, fieldY));
				ImGui::SetNextItemWidth(CW);
				ImGui::InputText("##ln_u", m_sUsername, sizeof(m_sUsername));
				lf->AddCircle(ImVec2(lp.x + 23.f, lp.y + fieldY + 13.f), 5.f, P_MUTED, 12, 1.5f);
				lf->AddLine(ImVec2(lp.x + 14.f, lp.y + fieldY + 29.f),
				            ImVec2(lp.x + 32.f, lp.y + fieldY + 29.f), P_MUTED, 1.5f);
				if (m_sUsername[0] == '\0' && !ImGui::IsItemActive())
					lf->AddText(m_pMainFont, 14.f, ImVec2(lp.x + 44.f, lp.y + fieldY + 11.f),
						IM_COL32(107, 120, 137, 255), "Username");
				fieldY += 52.f;

				// Password
				ImGui::SetCursorPos(ImVec2(0.f, fieldY));
				ImGui::SetNextItemWidth(CW);
				ImGui::InputText("##ln_p", m_sPassword, sizeof(m_sPassword), ImGuiInputTextFlags_Password);
				lf->AddRect(ImVec2(lp.x + 16.f, lp.y + fieldY + 15.f),
				            ImVec2(lp.x + 30.f, lp.y + fieldY + 26.f), P_MUTED, 2.f, 0, 1.5f);
				lf->AddLine(ImVec2(lp.x + 20.f, lp.y + fieldY + 15.f),
				            ImVec2(lp.x + 20.f, lp.y + fieldY + 10.f), P_MUTED, 1.5f);
				lf->AddLine(ImVec2(lp.x + 26.f, lp.y + fieldY + 15.f),
				            ImVec2(lp.x + 26.f, lp.y + fieldY + 10.f), P_MUTED, 1.5f);
				lf->AddLine(ImVec2(lp.x + 20.f, lp.y + fieldY + 10.f),
				            ImVec2(lp.x + 26.f, lp.y + fieldY + 10.f), P_MUTED, 1.5f);
				if (m_sPassword[0] == '\0' && !ImGui::IsItemActive())
					lf->AddText(m_pMainFont, 14.f, ImVec2(lp.x + 44.f, lp.y + fieldY + 11.f),
						IM_COL32(107, 120, 137, 255), "Password");
				fieldY += 52.f;
			} else {
				// License key
				ImGui::SetCursorPos(ImVec2(0.f, fieldY));
				ImGui::SetNextItemWidth(CW);
				ImGui::InputText("##ln_k", m_sLicenseKey, sizeof(m_sLicenseKey));
				lf->AddCircle(ImVec2(lp.x + 19.f, lp.y + fieldY + 19.f), 5.f, P_MUTED, 12, 1.5f);
				lf->AddLine(ImVec2(lp.x + 24.f, lp.y + fieldY + 19.f),
				            ImVec2(lp.x + 34.f, lp.y + fieldY + 19.f), P_MUTED, 1.5f);
				lf->AddLine(ImVec2(lp.x + 32.f, lp.y + fieldY + 19.f),
				            ImVec2(lp.x + 32.f, lp.y + fieldY + 16.f), P_MUTED, 1.5f);
				lf->AddLine(ImVec2(lp.x + 29.f, lp.y + fieldY + 19.f),
				            ImVec2(lp.x + 29.f, lp.y + fieldY + 16.f), P_MUTED, 1.5f);
				if (m_sLicenseKey[0] == '\0' && !ImGui::IsItemActive())
					lf->AddText(m_pMainFont, 14.f, ImVec2(lp.x + 44.f, lp.y + fieldY + 11.f),
						IM_COL32(107, 120, 137, 255), "XXXX-XXXX-XXXX-XXXX");
				fieldY += 52.f;
			}

			ImGui::PopStyleVar(3);
			ImGui::PopStyleColor(4);

			// Remember me checkbox (full row)
			fieldY += 4.f;
			static bool s_remember = true;
			ImGui::SetCursorPos(ImVec2(2.f, fieldY));
			ImGui::Checkbox("Remember me", &s_remember,
				IM_COL32(30, 38, 48, 255), P_ACCENT, IM_COL32(139, 152, 168, 255));
			fieldY += 22.f;

			// "Forgot access?" right-aligned on its own row
			float raTw = m_pMainFont->CalcTextSizeA(13.f, FLT_MAX, 0.f, "Forgot access?").x;
			lf->AddText(m_pMainFont, 13.f,
				ImVec2(lp.x + CW - raTw, lp.y + fieldY + 2.f), P_ACCENT, "Forgot access?");
			fieldY += 20.f;

			// LOGIN button
			ImVec2 btnMin = ImVec2(lp.x, lp.y + fieldY);
			ImVec2 btnMax = ImVec2(lp.x + CW, btnMin.y + 48.f);
			lf->AddRectFilled(btnMin, btnMax, P_ACCENT, 10.f);
			lf->AddRectFilled(ImVec2(btnMin.x + 10.f, btnMax.y),
			                  ImVec2(btnMax.x - 10.f, btnMax.y + 12.f),
			                  IM_COL32(43, 228, 160, 28), 4.f);

			float shinePhase = fmodf(t / 2.8f, 1.f);
			float shineX = btnMin.x - 60.f + (CW + 120.f) * shinePhase;
			lf->PushClipRect(btnMin, btnMax, true);
			lf->AddRectFilledMultiColor(
				ImVec2(shineX, btnMin.y), ImVec2(shineX + 80.f, btnMax.y),
				IM_COL32(255,255,255,0), IM_COL32(255,255,255,80),
				IM_COL32(255,255,255,0), IM_COL32(255,255,255,0));
			lf->PopClipRect();

			float btw = m_pMainFont->CalcTextSizeA(15.f, FLT_MAX, 0.f, "LOGIN").x;
			lf->AddText(m_pMainFont, 15.f,
				ImVec2(btnMin.x + (CW - btw) * 0.5f, btnMin.y + 15.f),
				IM_COL32(6, 17, 12, 255), "LOGIN");

			ImGui::SetCursorPos(ImVec2(0.f, fieldY));
			if (ImGui::InvisibleButton("##lbtn", ImVec2(CW, 48.f))) {
				if (m_nLoginMode == 1 && m_sUsername[0] == '\0')
					strcpy_s(m_sUsername, "User");
				m_nLoginPhase = 1;
				m_nLoginStep  = 0;
				m_fLoginTimer = 0.f;
			}

		} else {
			// Loading / done phase
			if (m_fLoginTimer < 5.f)
				m_fLoginTimer += io.DeltaTime;

			int newStep = (int)(m_fLoginTimer / 0.7f);
			if (newStep > m_nLoginStep) m_nLoginStep = newStep;
			if (m_nLoginStep > 3) m_nLoginStep = 3;
			if (m_nLoginPhase == 1 && m_nLoginStep >= 3) m_nLoginPhase = 2;

			const char* stepLabels[] = { "Authentication", "HWID Verification", "Loading modules" };
			float stepY = 0.f;
			for (int s = 0; s < 3; s++) {
				bool done = (m_nLoginStep > s);
				bool cur  = (m_nLoginStep == s);

				ImVec2 cc = ImVec2(lp.x + 9.f, lp.y + stepY + 9.f);
				if (done) {
					lf->AddCircleFilled(cc, 9.f, P_ACCENT, 16);
					lf->AddLine(ImVec2(cc.x - 4.f, cc.y), ImVec2(cc.x - 1.f, cc.y + 3.f), IM_COL32(6,17,12,255), 1.8f);
					lf->AddLine(ImVec2(cc.x - 1.f, cc.y + 3.f), ImVec2(cc.x + 5.f, cc.y - 3.f), IM_COL32(6,17,12,255), 1.8f);
				} else {
					lf->AddCircleFilled(cc, 9.f, cur ? IM_COL32(58,70,86,255) : IM_COL32(30,38,48,255), 16);
				}
				char lbuf[80];
				snprintf(lbuf, sizeof(lbuf), "%s%s", stepLabels[s], cur ? "..." : "");
				lf->AddText(m_pMainFont, 14.f, ImVec2(lp.x + 24.f, lp.y + stepY + 2.f),
					(done || cur) ? P_TEXT : P_MUTED, lbuf);
				stepY += 28.f;
			}

			// Progress bar
			float pct = ImMin((float)m_nLoginStep / 3.f, 1.f);
			float barY = stepY + 8.f;
			lf->AddRectFilled(ImVec2(lp.x, lp.y + barY),
			                  ImVec2(lp.x + CW, lp.y + barY + 6.f), P_BORDER, 6.f);
			if (pct > 0.f)
				lf->AddRectFilled(ImVec2(lp.x, lp.y + barY),
				                  ImVec2(lp.x + CW * pct, lp.y + barY + 6.f), P_ACCENT, 6.f);

			if (m_nLoginPhase == 2) {
				float welY = barY + 22.f;
				char welBuf[96];
				snprintf(welBuf, sizeof(welBuf), "WELCOME BACK, %s",
					m_sUsername[0] ? m_sUsername : "USER");
				float welW = m_pMainFont->CalcTextSizeA(16.f, FLT_MAX, 0.f, welBuf).x;
				lf->AddText(m_pMainFont, 16.f,
					ImVec2(lp.x + (CW - welW) * 0.5f, lp.y + welY), P_ACCENT, welBuf);

				const char* xpTxt = "+50 XP daily login  ·  7 day streak";
				float xpW = m_pMainFont->CalcTextSizeA(13.f, FLT_MAX, 0.f, xpTxt).x;
				lf->AddText(m_pMainFont, 13.f,
					ImVec2(lp.x + (CW - xpW) * 0.5f, lp.y + welY + 22.f), P_GOLD, xpTxt);

				// Auto-continue after 1.5s from welcome appearing (timer > 3.6s total)
				if (m_fLoginTimer > 3.6f)
					m_bLoggedIn = true;

				// Manual continue button
				float conY = welY + 60.f;
				ImVec2 conMin = ImVec2(lp.x + (CW - 160.f) * 0.5f, lp.y + conY);
				ImVec2 conMax = ImVec2(conMin.x + 160.f, conMin.y + 40.f);
				bool conHov = ImGui::IsMouseHoveringRect(conMin, conMax);
				lf->AddRectFilled(conMin, conMax, conHov ? P_HOVER : P_TRACK, 10.f);
				lf->AddRect(conMin, conMax, P_BORDER, 10.f, 0, 1.f);
				float ctw = m_pMainFont->CalcTextSizeA(13.f, FLT_MAX, 0.f, "Continue").x;
				lf->AddText(m_pMainFont, 13.f,
					ImVec2(conMin.x + (160.f - ctw) * 0.5f, conMin.y + 12.f), P_MUTED, "Continue");

				ImGui::SetCursorPos(ImVec2((CW - 160.f) * 0.5f, conY));
				if (ImGui::InvisibleButton("##lcon", ImVec2(160.f, 40.f)))
					m_bLoggedIn = true;
			} else {
				// Phase 1: add a dummy to satisfy ImGui (no items in loading phase)
				ImGui::Dummy(ImVec2(CW, stepY + 20.f));
			}
		}
	}
	ImGui::EndChild();
	ImGui::PopStyleColor();

	// Footer
	float footerY = p0.y + H - 42.f;
	dl->AddLine(ImVec2(p0.x + 20.f, footerY), ImVec2(p0.x + W - 20.f, footerY), P_BORDER, 1.f);
	float blink = 0.35f + 0.65f * (0.5f + 0.5f * sinf(t * (float)(2.0 * M_PI / 1.6)));
	dl->AddCircleFilled(ImVec2(p0.x + 26.f, footerY + 14.f),
		3.5f, IM_COL32(43, 228, 160, (int)(blink * 255)));
	dl->AddText(m_pMainFont, 12.f, ImVec2(p0.x + 34.f, footerY + 7.f), P_MUTED, "Server online · 24 ms");
	dl->AddText(m_pMainFont, 12.f, ImVec2(p0.x + W - 52.f, footerY + 7.f), P_MUTED, g_pXenon->g_pSystem->GetAppVersion()->c_str());

	ImGui::End();
}

void CUIService::RenderDefaultMenu() {

	// --- Palette (U32 for DrawList, vec4 for StyleColor) ---
	const ImU32 P_BG       = IM_COL32(11,  15,  20,  255);
	const ImU32 P_SIDEBAR  = IM_COL32(14,  19,  25,  255);
	const ImU32 P_CARD     = IM_COL32(19,  25,  32,  255);
	const ImU32 P_HOVER    = IM_COL32(27,  34,  44,  255);
	const ImU32 P_BORDER   = IM_COL32(30,  38,  48,  255);
	const ImU32 P_TRACK    = IM_COL32(34,  43,  54,  255);
	const ImU32 P_TEXT     = IM_COL32(230, 237, 243, 255);
	const ImU32 P_MUTED    = IM_COL32(139, 152, 168, 255);
	const ImU32 P_ACCENT   = IM_COL32(43,  228, 160, 255);
	const ImU32 P_GOLD     = IM_COL32(255, 181, 71,  255);
	const ImU32 P_DANGER   = IM_COL32(255, 93,  122, 255);

	const ImVec4 V_CARD    = ImVec4(19.f/255,  25.f/255,  32.f/255,  1.f);
	const ImVec4 V_HOVER   = ImVec4(27.f/255,  34.f/255,  44.f/255,  1.f);
	const ImVec4 V_SIDEBAR = ImVec4(14.f/255,  19.f/255,  25.f/255,  1.f);
	const ImVec4 V_ACCENT  = ImVec4(43.f/255,  228.f/255, 160.f/255, 1.f);
	const ImVec4 V_TEXT    = ImVec4(230.f/255, 237.f/255, 243.f/255, 1.f);
	const ImVec4 V_MUTED   = ImVec4(139.f/255, 152.f/255, 168.f/255, 1.f);
	const ImVec4 V_TRANSP  = ImVec4(0.f, 0.f, 0.f, 0.f);

	const float W = 900.f, H = 600.f;
	const float SIDEBAR_W = 210.f;
	const float HEADER_H  = 64.f;
	const float FOOTER_H  = 50.f;
	const float MAIN_W    = W - SIDEBAR_W;
	const float CONTENT_H = H - HEADER_H - FOOTER_H;

	// count nav items
	int navCount = m_bDevTab ? 6 : 5;

	ImGui::SetNextWindowSize(ImVec2(W + 10.f, H + 10.f));

	if (!ImGui::Begin("Default Menu", nullptr,
		ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBackground))
	{
		ImGui::End();
		return;
	}

	ImVec2 wp  = ImGui::GetWindowPos();
	ImVec2 p0  = ImVec2(wp.x + 5.f, wp.y + 5.f);
	ImDrawList* dl = ImGui::GetWindowDrawList();

	// Main bg + border
	dl->AddRectFilled(p0, ImVec2(p0.x + W, p0.y + H), P_BG, 16.f);
	dl->AddRect(p0, ImVec2(p0.x + W, p0.y + H), P_BORDER, 16.f, 0, 1.f);

	// Sidebar bg (left rounded corners only)
	dl->AddRectFilled(p0, ImVec2(p0.x + SIDEBAR_W, p0.y + H), P_SIDEBAR, 16.f, ImDrawFlags_RoundCornersLeft);
	dl->AddLine(ImVec2(p0.x + SIDEBAR_W, p0.y), ImVec2(p0.x + SIDEBAR_W, p0.y + H), P_BORDER, 1.f);

	// ========================================================
	// SIDEBAR child
	// ========================================================
	ImGui::SetCursorPos(ImVec2(5.f, 5.f));
	ImGui::PushStyleColor(ImGuiCol_ChildBg, V_TRANSP);
	ImGui::BeginChild("##sb", ImVec2(SIDEBAR_W, H), false,
		ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
	{
		ImDrawList* sdl = ImGui::GetWindowDrawList();
		ImVec2 sp = ImGui::GetWindowPos();

		// Logo checkmark icon
		sdl->AddNgon(ImVec2(sp.x + 31.f, sp.y + 31.f), 14.f, P_ACCENT, 6, 2.f);
		sdl->AddLine(ImVec2(sp.x + 26.f, sp.y + 31.f), ImVec2(sp.x + 29.f, sp.y + 35.f), P_ACCENT, 2.2f);
		sdl->AddLine(ImVec2(sp.x + 29.f, sp.y + 35.f), ImVec2(sp.x + 36.f, sp.y + 27.f), P_ACCENT, 2.2f);

		sdl->AddText(m_pMainFont, 15.f, ImVec2(sp.x + 52.f, sp.y + 14.f), P_TEXT,   "kiocode");
		sdl->AddText(m_pMainFont, 11.f, ImVec2(sp.x + 52.f, sp.y + 31.f), P_ACCENT, g_pXenon->g_pSystem->GetAppTitle()->c_str());

		// Nav items
		const char* navLabels[] = { "Aim", "Visuals", "Radar", "Misc", "Configs", "Dev" };
		const float NAV_Y0 = 64.f, NAV_H = 40.f, NAV_GAP = 4.f;

		for (int i = 0; i < navCount; i++) {
			float yOff = NAV_Y0 + i * (NAV_H + NAV_GAP);
			ImVec2 bMin = ImVec2(sp.x + 14.f, sp.y + yOff);
			ImVec2 bMax = ImVec2(sp.x + SIDEBAR_W - 14.f, bMin.y + NAV_H);

			bool active  = (m_nSelectedTab == i);
			bool hovered = ImGui::IsMouseHoveringRect(bMin, bMax);

			if (active) {
				sdl->AddRectFilledMultiColor(bMin, bMax,
					IM_COL32(43, 228, 160, 36), IM_COL32(43, 228, 160, 0),
					IM_COL32(43, 228, 160, 0),  IM_COL32(43, 228, 160, 36));
				sdl->AddRectFilled(
					ImVec2(bMin.x - 14.f, bMin.y + 10.f),
					ImVec2(bMin.x - 11.f, bMin.y + 30.f),
					P_ACCENT, 3.f);
			} else if (hovered) {
				sdl->AddRectFilled(bMin, bMax, P_HOVER, 8.f);
			}

			ImGui::SetCursorPos(ImVec2(14.f, yOff));
			if (ImGui::InvisibleButton(("##nav" + std::to_string(i)).c_str(),
				ImVec2(SIDEBAR_W - 28.f, NAV_H)))
			{
				m_nSelectedTab = i;
			}

			ImU32 labelCol = active ? P_ACCENT : (hovered ? P_TEXT : P_MUTED);
			sdl->AddText(m_pMainFont, 14.f, ImVec2(bMin.x + 10.f, bMin.y + 13.f), labelCol, navLabels[i]);
		}

		// User card at bottom
		float cardTop = H - 98.f;
		ImVec2 cMin = ImVec2(sp.x + 12.f, sp.y + cardTop);
		ImVec2 cMax = ImVec2(sp.x + SIDEBAR_W - 12.f, sp.y + H - 12.f);
		sdl->AddRectFilled(cMin, cMax, P_CARD, 12.f);
		sdl->AddRect(cMin, cMax, P_BORDER, 12.f, 0, 1.f);

		sdl->AddRectFilled(ImVec2(cMin.x + 10.f, cMin.y + 10.f),
			ImVec2(cMin.x + 42.f, cMin.y + 42.f), IM_COL32(27, 42, 36, 255), 8.f);
		sdl->AddText(m_pMainFont, 13.f, ImVec2(cMin.x + 18.f, cMin.y + 16.f), P_ACCENT, "CS");

		sdl->AddText(m_pMainFont, 14.f, ImVec2(cMin.x + 52.f, cMin.y + 12.f), P_TEXT,  m_sUsername[0] ? m_sUsername : "guest");
		sdl->AddText(m_pMainFont, 11.f, ImVec2(cMin.x + 52.f, cMin.y + 28.f), P_GOLD,  "LV 12 - Veteran");

		float bX = cMin.x + 10.f, bY = cMin.y + 56.f;
		float bW = SIDEBAR_W - 44.f;
		sdl->AddRectFilled(ImVec2(bX, bY), ImVec2(bX + bW, bY + 5.f), P_BORDER, 3.f);
		sdl->AddRectFilled(ImVec2(bX, bY), ImVec2(bX + bW * 0.68f, bY + 5.f), P_GOLD, 3.f);
		sdl->AddText(m_pMainFont, 11.f, ImVec2(bX, bY + 9.f), P_MUTED, "1 360 / 2 000 XP");
	}
	ImGui::EndChild();
	ImGui::PopStyleColor();

	// ========================================================
	// HEADER child
	// ========================================================
	float mainX = SIDEBAR_W + 5.f;
	ImGui::SetCursorPos(ImVec2(mainX, 5.f));
	ImGui::PushStyleColor(ImGuiCol_ChildBg, V_TRANSP);
	ImGui::BeginChild("##hdr", ImVec2(MAIN_W, HEADER_H), false, ImGuiWindowFlags_NoScrollbar);
	{
		ImDrawList* hdl = ImGui::GetWindowDrawList();
		ImVec2 hp = ImGui::GetWindowPos();

		const char* pageTitles[]   = { "Aim", "Visuals", "Radar", "Misc", "Configs", "Dev" };
		const char* pageSubs[]     = {
			"Aim assistance and weapon",
			"ESP, colors and preview",
			"Mini-map and targets",
			"Overlay and tools",
			"Save and load profiles",
			"Developer tools"
		};
		int ti = (m_nSelectedTab < navCount) ? m_nSelectedTab : 0;

		hdl->AddText(m_pBiggerMainFont, 20.f, ImVec2(hp.x + 24.f, hp.y + 10.f), P_TEXT,  pageTitles[ti]);
		hdl->AddText(m_pMainFont,       12.f, ImVec2(hp.x + 24.f, hp.y + 40.f), P_MUTED, pageSubs[ti]);

		// Attached badge
		bool bAttached = g_pXenon->g_pSystem->IsAttached();
		float blink = 0.35f + 0.65f * (0.5f + 0.5f * sinf((float)ImGui::GetTime() * (float)(2.0 * M_PI / 1.6)));
		ImU32 attAccent  = bAttached ? IM_COL32(43, 228, 160, 255) : IM_COL32(139, 152, 168, 255);
		ImU32 attBg      = bAttached ? IM_COL32(43, 228, 160, 20)  : IM_COL32(30, 38, 48, 40);
		ImU32 attBorder  = bAttached ? IM_COL32(43, 228, 160, 64)  : IM_COL32(30, 38, 48, 128);
		ImU32 dotColor   = bAttached ? IM_COL32(43, 228, 160, (int)(blink * 255)) : IM_COL32(139, 152, 168, 180);
		const char* attLabel = bAttached ? "Attached" : "Detached";
		float attLabelW  = m_pMainFont->CalcTextSizeA(12.f, FLT_MAX, 0.f, attLabel).x;
		float attBadgeW  = attLabelW + 38.f;
		// compute profile badge right edge first (mirrors the badge block below)
		float _profLabelW = m_pMainFont->CalcTextSizeA(12.f, FLT_MAX, 0.f, g_pXenon->g_pSystem->GetProfile()->c_str()).x;
		float _profBadgeW = _profLabelW + 62.f;
		float _prLeft     = (hp.x + MAIN_W - 36.f - 8.f) - _profBadgeW;
		ImVec2 attMax = ImVec2(_prLeft - 8.f,              hp.y + 48.f);
		ImVec2 attMin = ImVec2(attMax.x - attBadgeW,       hp.y + 16.f);
		hdl->AddRectFilled(attMin, attMax, attBg, 8.f);
		hdl->AddRect(attMin, attMax, attBorder, 8.f, 0, 1.f);
		hdl->AddCircleFilled(ImVec2(attMin.x + 14.f, (attMin.y + attMax.y) * 0.5f), 3.5f, dotColor);
		hdl->AddText(m_pMainFont, 12.f, ImVec2(attMin.x + 25.f, attMin.y + 10.f), attAccent, attLabel);

		// Profile badge — right-anchored, capped before the X button
		const char* profStr = g_pXenon->g_pSystem->GetProfile()->c_str();
		float profLabelW = m_pMainFont->CalcTextSizeA(12.f, FLT_MAX, 0.f, profStr).x;
		float profBadgeW = profLabelW + 62.f;
		float xBtnLeft   = hp.x + MAIN_W - 36.f - 8.f; // 8px gap before X
		ImVec2 prMax = ImVec2(xBtnLeft, hp.y + 48.f);
		ImVec2 prMin = ImVec2(prMax.x - profBadgeW, hp.y + 16.f);
		hdl->AddRectFilled(prMin, prMax, P_CARD, 8.f);
		hdl->AddRect(prMin, prMax, P_BORDER, 8.f, 0, 1.f);
		hdl->AddText(m_pMainFont, 12.f, ImVec2(prMin.x + 8.f,  prMin.y + 10.f), P_MUTED, "Profile: ");
		hdl->AddText(m_pMainFont, 12.f, ImVec2(prMin.x + 56.f, prMin.y + 10.f), P_TEXT,  profStr);

		// Close button (X) — fixed at right edge
		const float xBtnW = 26.f, xBtnH = 28.f;
		ImVec2 xMin = ImVec2(hp.x + MAIN_W - 36.f, hp.y + 18.f);
		ImVec2 xMax = ImVec2(xMin.x + xBtnW,        xMin.y + xBtnH);
		bool xHov = ImGui::IsMouseHoveringRect(xMin, xMax);
		hdl->AddRectFilled(xMin, xMax, xHov ? IM_COL32(255, 75, 75, 50) : IM_COL32(0,0,0,0), 6.f);
		hdl->AddText(m_pMainFont, 14.f, ImVec2(xMin.x + 7.f, xMin.y + 5.f),
			xHov ? IM_COL32(255,100,100,255) : P_MUTED, "x");
		// CursorPos is relative to the child window, NOT the parent
		ImGui::SetCursorPos(ImVec2(MAIN_W - 36.f, 18.f));
		if (ImGui::InvisibleButton("##close", ImVec2(xBtnW, xBtnH))) {
			*m_bShowMenu = false;
			SetMenuClose();
		}

		hdl->AddLine(ImVec2(hp.x, hp.y + HEADER_H - 1.f),
			ImVec2(hp.x + MAIN_W, hp.y + HEADER_H - 1.f), P_BORDER, 1.f);
	}
	ImGui::EndChild();
	ImGui::PopStyleColor();

	// ========================================================
	// CONTENT child
	// ========================================================
	ImGui::SetCursorPos(ImVec2(mainX, 5.f + HEADER_H));
	ImGui::PushStyleColor(ImGuiCol_ChildBg, V_TRANSP);
	ImGui::BeginChild("##cnt", ImVec2(MAIN_W, CONTENT_H), false,
		ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
	{
		// padding: 24 left/right, 16 top, 16 gap between cols
		float colW = (MAIN_W - 48.f - 16.f) * 0.5f;
		float colH = CONTENT_H - 32.f;

		auto BeginCard = [&](const char* id, float x, float y, float w, float h) {
			ImGui::SetCursorPos(ImVec2(x, y));
			ImGui::PushStyleColor(ImGuiCol_ChildBg, V_CARD);
			ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 14.f);
			ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(12.f, 12.f));
			ImGui::BeginChild(id, ImVec2(w, h), false);
		};
		auto EndCard = [&]() {
			ImGui::EndChild();
			ImGui::PopStyleVar(2);
			ImGui::PopStyleColor();
		};
		auto CardHeader = [&](const char* label) {
			ImGui::GetWindowDrawList()->AddText(m_pMainFont, 12.f,
				ImGui::GetWindowPos() + ImVec2(18.f, 14.f), P_MUTED, label);
			ImGui::SetCursorPosY(44.f);
		};
		auto CB = [&](const char* lbl, bool* val) {
			ImGui::Checkbox(lbl, val,
				g_pXenonConfigs->g_pUIConfig->m_cMenuBg,
				g_pXenonConfigs->g_pUIConfig->m_cMenuAccent,
				g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
		};

		switch (m_nSelectedTab) {

		// ---- AIM ------------------------------------------------
		case 0: {
			BeginCard("##ac1", 24.f, 16.f, colW, colH);
				CardHeader("AIM ASSIST");
				CB("Aimbot", &g_pXenonVariables->g_bAimbot);
				if (g_pXenonVariables->g_bAimbot) {
					ImGui::Indent(10.f);
					CB("Trigger With Key", &g_pXenonConfigs->g_pAimConfig->m_bTriggerWithKey);
					CB("Only Visible",     &g_pXenonConfigs->g_pAimConfig->m_bOnlyVisible);
					CB("Humanize",         &g_pXenonVariables->g_bHumanize);
					CB("Smooth",           &g_pXenonVariables->g_bSmooth);
					ImGui::Unindent(10.f);
				}
				ImGui::AlignTextToFramePadding();
				ImGui::PushStyleColor(ImGuiCol_Text, V_MUTED);
				ImGui::Text("FOV");
				ImGui::PopStyleColor();
				ImGui::SameLine();
				ImGui::SetNextItemWidth(-1.f);
				ImGui::SliderFloat("##fov", &g_pXenonConfigs->g_pAimConfig->m_fFov, 30.f, 300.f, "%.0f");
				ImGui::AlignTextToFramePadding();
				ImGui::PushStyleColor(ImGuiCol_Text, V_MUTED);
				ImGui::Text("Smooth");
				ImGui::PopStyleColor();
				ImGui::SameLine();
				ImGui::SetNextItemWidth(-1.f);
				ImGui::SliderFloat("##smt", &g_pXenonConfigs->g_pAimConfig->m_fSmooth, 5.f, 50.f, "%.1f");
			EndCard();

			float rH = (colH - 16.f) * 0.5f;
			BeginCard("##ac2", 24.f + colW + 16.f, 16.f, colW, rH);
				CardHeader("WEAPON");
				CB("Crosshair", &g_pXenonVariables->g_bCrosshair);
				CB("No Recoil", &g_pXenonVariables->g_bNoRecoil);
			EndCard();

			BeginCard("##ac3", 24.f + colW + 16.f, 16.f + rH + 16.f, colW, rH);
				CardHeader("MOVEMENT");
				CB("Spinbot 2D", &g_pXenonVariables->g_bSpinbot2D);
				CB("Spinbot 3D", &g_pXenonVariables->g_bSpinbot3D);
			EndCard();
		} break;

		// ---- VISUALS --------------------------------------------
		case 1: {
			BeginCard("##vc1", 24.f, 16.f, colW, colH);
				CardHeader("ESP");
				CB("Box 2D",    &g_pXenonVariables->g_bBox2D);
				CB("Snapline",  &g_pXenonVariables->g_bSnapline);
				CB("Names",     &g_pXenonConfigs->g_pEspConfig->m_bNameInBox);
				CB("Health Bar",&g_pXenonVariables->g_bHealthBar);
				CB("Skeleton",  &g_pXenonVariables->g_bSkeleton);
			EndCard();

			BeginCard("##vc2", 24.f + colW + 16.f, 16.f, colW, colH);
			{
				CardHeader("PREVIEW");
				ImDrawList* vdl = ImGui::GetWindowDrawList();
				ImVec2 cp = ImGui::GetWindowPos();

				static int s_boxType = 0;

				// Preview viewport
				float pvW = colW - 24.f;
				float pvH = colH - 44.f - 52.f;
				ImVec2 pvBase = ImVec2(cp.x + 12.f, cp.y + 44.f);

				vdl->AddRectFilled(pvBase, ImVec2(pvBase.x + pvW, pvBase.y + pvH), P_BG, 10.f);
				vdl->AddRect(pvBase, ImVec2(pvBase.x + pvW, pvBase.y + pvH), P_BORDER, 10.f, 0, 1.f);

				vdl->PushClipRect(pvBase, ImVec2(pvBase.x + pvW, pvBase.y + pvH), true);

				// Figure params (centered)
				float cx  = pvBase.x + pvW * 0.5f;
				float cy  = pvBase.y + pvH * 0.5f;
				float bW  = 56.f, bH = 130.f;
				float bX1 = cx - bW * 0.5f, bX2 = cx + bW * 0.5f;
				float bY1 = cy - bH * 0.5f, bY2 = cy + bH * 0.5f;
				float headR = 11.f;

				const ImU32 C_SKEL = IM_COL32(56, 189, 248, 200);

				// Snapline
				if (g_pXenonVariables->g_bSnapline)
					vdl->AddLine(ImVec2(cx, pvBase.y + pvH), ImVec2(cx, bY2), P_DANGER, 1.f);

				// Skeleton
				if (g_pXenonVariables->g_bSkeleton) {
					vdl->AddLine(ImVec2(cx, bY1 + 22.f),     ImVec2(cx, bY2 - 38.f),           C_SKEL, 1.2f);
					vdl->AddLine(ImVec2(cx - 22.f, bY1 + 32.f), ImVec2(cx + 22.f, bY1 + 32.f), C_SKEL, 1.2f);
					vdl->AddLine(ImVec2(cx - 22.f, bY1 + 32.f), ImVec2(cx - 26.f, bY1 + 70.f), C_SKEL, 1.2f);
					vdl->AddLine(ImVec2(cx + 22.f, bY1 + 32.f), ImVec2(cx + 26.f, bY1 + 70.f), C_SKEL, 1.2f);
					vdl->AddLine(ImVec2(cx - 15.f, bY2 - 38.f), ImVec2(cx + 15.f, bY2 - 38.f), C_SKEL, 1.2f);
					vdl->AddLine(ImVec2(cx - 15.f, bY2 - 38.f), ImVec2(cx - 10.f, bY2),         C_SKEL, 1.2f);
					vdl->AddLine(ImVec2(cx + 15.f, bY2 - 38.f), ImVec2(cx + 10.f, bY2),         C_SKEL, 1.2f);
				}

				// Box 2D
				if (g_pXenonVariables->g_bBox2D) {
					if (s_boxType == 0) {
						vdl->AddRect(ImVec2(bX1, bY1), ImVec2(bX2, bY2), P_ACCENT, 0.f, 0, 1.5f);
					} else if (s_boxType == 1) {
						float cL = 12.f;
						vdl->AddLine(ImVec2(bX1, bY1 + cL), ImVec2(bX1, bY1), P_ACCENT, 1.5f);
						vdl->AddLine(ImVec2(bX1, bY1), ImVec2(bX1 + cL, bY1), P_ACCENT, 1.5f);
						vdl->AddLine(ImVec2(bX2 - cL, bY1), ImVec2(bX2, bY1), P_ACCENT, 1.5f);
						vdl->AddLine(ImVec2(bX2, bY1), ImVec2(bX2, bY1 + cL), P_ACCENT, 1.5f);
						vdl->AddLine(ImVec2(bX1, bY2 - cL), ImVec2(bX1, bY2), P_ACCENT, 1.5f);
						vdl->AddLine(ImVec2(bX1, bY2), ImVec2(bX1 + cL, bY2), P_ACCENT, 1.5f);
						vdl->AddLine(ImVec2(bX2 - cL, bY2), ImVec2(bX2, bY2), P_ACCENT, 1.5f);
						vdl->AddLine(ImVec2(bX2, bY2 - cL), ImVec2(bX2, bY2), P_ACCENT, 1.5f);
					}
				}

				// Head
				vdl->AddCircle(ImVec2(cx, bY1 + headR), headR,
					g_pXenonVariables->g_bBox2D ? P_ACCENT : P_MUTED, 16, 1.2f);

				// Name
				if (g_pXenonConfigs->g_pEspConfig->m_bNameInBox) {
					const char* pName = "Player_042";
					float nw = m_pMainFont->CalcTextSizeA(11.f, FLT_MAX, 0.f, pName).x;
					vdl->AddText(m_pMainFont, 11.f, ImVec2(cx - nw * 0.5f, bY1 - 14.f), P_TEXT, pName);
				}

				// Health bar (left side, vertical, static 70% for preview)
				if (g_pXenonVariables->g_bHealthBar) {
					float hbX = bX1 - 6.f;
					const float hbPct = 0.7f;
					vdl->AddRectFilled(ImVec2(hbX - 3.f, bY1), ImVec2(hbX, bY2),
						IM_COL32(20, 32, 24, 255), 2.f);
					vdl->AddRectFilled(ImVec2(hbX - 3.f, bY1 + bH * (1.f - hbPct)),
						ImVec2(hbX, bY2), IM_COL32(43, 200, 90, 255), 2.f);
				}

				vdl->PopClipRect();

				// Box type buttons
				ImGui::SetCursorPosY(44.f + pvH + 8.f);
				const char* btypes[] = { "Full box", "Corner", "3D" };
				for (int b = 0; b < 3; b++) {
					bool sel = (s_boxType == b);
					ImVec4 bc = sel ? ImVec4(43.f/255, 228.f/255, 160.f/255, 0.12f) : V_CARD;
					ImGui::PushStyleColor(ImGuiCol_Button,        bc);
					ImGui::PushStyleColor(ImGuiCol_ButtonHovered, V_HOVER);
					ImGui::PushStyleColor(ImGuiCol_Text, sel ? V_ACCENT : V_MUTED);
					ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 8.f);
					if (ImGui::Button(btypes[b], ImVec2(0.f, 28.f))) s_boxType = b;
					ImGui::PopStyleVar();
					ImGui::PopStyleColor(3);
					if (b < 2) ImGui::SameLine();
				}
			}
			EndCard();
		} break;

		// ---- RADAR ----------------------------------------------
		case 2: {
			BeginCard("##rc1", 24.f, 16.f, colW, colH);
				CardHeader("RADAR");
				CB("Radar",             &g_pXenonVariables->g_bRadar);
				CB("Show Targets Name", &g_pXenonConfigs->g_pRadarConfig->m_bTargetsName);
				ImGui::AlignTextToFramePadding(); ImGui::PushStyleColor(ImGuiCol_Text, V_MUTED); ImGui::Text("Size");    ImGui::PopStyleColor(); ImGui::SameLine(); ImGui::SetNextItemWidth(-1.f); ImGui::SliderFloat("##rs",  &g_pXenonConfigs->g_pRadarConfig->m_fSize,        0.f,   500.f, "%.0f");
				ImGui::AlignTextToFramePadding(); ImGui::PushStyleColor(ImGuiCol_Text, V_MUTED); ImGui::Text("Zoom");    ImGui::PopStyleColor(); ImGui::SameLine(); ImGui::SetNextItemWidth(-1.f); ImGui::SliderFloat("##rz",  &g_pXenonConfigs->g_pRadarConfig->m_fZoom,        0.3f,  50.f,  "%.1f");
				ImGui::AlignTextToFramePadding(); ImGui::PushStyleColor(ImGuiCol_Text, V_MUTED); ImGui::Text("Tgt Size");ImGui::PopStyleColor(); ImGui::SameLine(); ImGui::SetNextItemWidth(-1.f); ImGui::SliderFloat("##rts", &g_pXenonConfigs->g_pRadarConfig->m_fTargetsSize, 0.f,   100.f, "%.0f");
				ImGui::AlignTextToFramePadding(); ImGui::PushStyleColor(ImGuiCol_Text, V_MUTED); ImGui::Text("Loc Size");ImGui::PopStyleColor(); ImGui::SameLine(); ImGui::SetNextItemWidth(-1.f); ImGui::SliderFloat("##rls", &g_pXenonConfigs->g_pRadarConfig->m_fLocalSize,   0.f,   100.f, "%.0f");
			EndCard();

			BeginCard("##rc2", 24.f + colW + 16.f, 16.f, colW, colH);
			{
				CardHeader("LIVE PREVIEW");
				ImDrawList* rdl = ImGui::GetWindowDrawList();
				ImVec2 rp  = ImGui::GetWindowPos();
				const float rr = 110.f;
				ImVec2 rc  = ImVec2(rp.x + colW * 0.5f, rp.y + 34.f + rr + 8.f);

				// Read live config values
				float cfgZoom    = ImClamp(g_pXenonConfigs->g_pRadarConfig->m_fZoom,        0.3f,  20.f);
				float cfgTgtSize = ImClamp(g_pXenonConfigs->g_pRadarConfig->m_fTargetsSize, 0.f,   100.f);
				float cfgLocSize = ImClamp(g_pXenonConfigs->g_pRadarConfig->m_fLocalSize,   0.f,   100.f);
				bool  cfgNames   = g_pXenonConfigs->g_pRadarConfig->m_bTargetsName;

				float tDot = ImMax(2.f, cfgTgtSize * 0.35f);
				float lDot = ImMax(3.f, cfgLocSize * 0.4f);

				// Zoom drives how far from center the preview targets appear
				float normZoom = ImSaturate((cfgZoom - 0.3f) / 19.7f);
				float d1 = rr * (0.25f + normZoom * 0.65f);

				rdl->AddCircleFilled(rc, rr, P_BG);
				rdl->AddCircle(rc, rr, IM_COL32(43, 58, 53, 255), 64);
				rdl->AddCircle(rc, rr * 0.6f, IM_COL32(30, 44, 40, 255), 64);
				rdl->AddCircle(rc, rr * 0.3f, IM_COL32(30, 44, 40, 255), 64);
				rdl->AddLine(ImVec2(rc.x, rc.y - rr), ImVec2(rc.x, rc.y + rr), IM_COL32(30, 44, 40, 255));
				rdl->AddLine(ImVec2(rc.x - rr, rc.y), ImVec2(rc.x + rr, rc.y), IM_COL32(30, 44, 40, 255));

				float sweep = fmodf((float)ImGui::GetTime() * (float)M_PI / 1.5f, (float)(2.0 * M_PI));
				float arc   = (float)(M_PI * 2.0 * 70.0 / 360.0);
				for (int s = 0; s < 24; s++) {
					float a0 = sweep - arc * s / 24.f;
					float a1 = sweep - arc * (s + 1) / 24.f;
					rdl->AddTriangleFilled(rc,
						ImVec2(rc.x + cosf(a0) * rr, rc.y + sinf(a0) * rr),
						ImVec2(rc.x + cosf(a1) * rr, rc.y + sinf(a1) * rr),
						IM_COL32(43, 228, 160, (int)((24 - s) / 24.f * 80)));
				}
				rdl->AddCircleFilled(rc, lDot, P_ACCENT);

				float bl = 0.35f + 0.65f * (0.5f + 0.5f * sinf((float)ImGui::GetTime() * (float)(2.0 * M_PI / 1.6)));
				ImVec2 t1 = ImVec2(rc.x + d1 * 0.86f, rc.y - d1 * 0.55f);
				ImVec2 t2 = ImVec2(rc.x - d1 * 0.72f, rc.y + d1 * 0.42f);
				rdl->AddCircleFilled(t1, tDot, IM_COL32(255, 93, 122, (int)(bl*255)));
				rdl->AddCircleFilled(t2, tDot, IM_COL32(255, 93, 122, (int)(bl*255)));
				if (cfgNames) {
					rdl->AddText(m_pMainFont, 10.f, ImVec2(t1.x + tDot + 2.f, t1.y - 6.f), P_TEXT, "Enemy_7");
					rdl->AddText(m_pMainFont, 10.f, ImVec2(t2.x + tDot + 2.f, t2.y - 6.f), P_TEXT, "Enemy_3");
				}
				ImGui::Dummy(ImVec2(colW - 24.f, rr * 2.f + 24.f));
			}
			EndCard();
		} break;

		// ---- MISC -----------------------------------------------
		case 3: {
			BeginCard("##mc1", 24.f, 16.f, colW, colH);
				CardHeader("OVERLAY");
				CB("Watermark",         &g_pXenonVariables->g_bWatermark);
				CB("Render Notifications",&g_pXenonVariables->g_bNotifications);
				CB("Render Mouse",      &g_pXenonVariables->g_bRenderMouse);
				CB("Render UI Windows", &g_pXenonVariables->g_bRenderWindows);
				CB("Render UI Overlays",&g_pXenonVariables->g_bRenderOverlays);
			EndCard();

			float rH1 = colH * 0.56f, rH2 = colH - rH1 - 16.f;

			BeginCard("##mc2", 24.f + colW + 16.f, 16.f, colW, rH1);
				CardHeader("TOOLS");
				ImGui::PushStyleColor(ImGuiCol_Button,        ImVec4(43.f/255,228.f/255,160.f/255,0.1f));
				ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(43.f/255,228.f/255,160.f/255,0.2f));
				ImGui::PushStyleColor(ImGuiCol_ButtonActive,  ImVec4(43.f/255,228.f/255,160.f/255,0.3f));
				ImGui::PushStyleColor(ImGuiCol_Text, V_ACCENT);
				ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.f);
				if (ImGui::Button("Set Waypoint", ImVec2(colW - 24.f, 40.f))) {
					if (g_pXenon->g_pSystem->Is3DGame())
						g_pXenon->g_cWaypoints->SetWaypoint("Waypoint", g_pXenonConfigs->g_pGameVariables->g_vLocal.m_vPos3D, ImColor(255,255,255));
					else
						g_pXenon->g_cWaypoints->SetWaypoint("Waypoint", g_pXenonConfigs->g_pGameVariables->g_vLocal.m_vPos2D, ImColor(255,255,255));
				}
				ImGui::PopStyleVar();
				ImGui::PopStyleColor(4);
				CB("Developer Tab", &m_bDevTab);
			EndCard();

			BeginCard("##mc3", 24.f + colW + 16.f, 16.f + rH1 + 16.f, colW, rH2);
			{
				CardHeader("MENU KEY");
				ImGui::Keybind("Show / Hide", &g_pXenonVariables->g_nToggleUIKey);
			}
			EndCard();
		} break;

		// ---- CONFIGS --------------------------------------------
		case 4: {
			float cfgCardW = MAIN_W - 48.f;
			float cfgHalf  = (cfgCardW - 16.f) * 0.5f;

			// ---- Save / Load ----
			BeginCard("##cfgsl", 24.f, 16.f, cfgCardW, colH);
			{
				CardHeader("PROFILES");

				static char s_profName[64] = {};
				// Pre-fill with current profile name on first open
				if (s_profName[0] == '\0') {
					strncpy_s(s_profName, g_pXenon->g_pSystem->GetProfile()->c_str(), sizeof(s_profName) - 1);
				}

				ImGui::SetNextItemWidth(cfgCardW - 48.f - 130.f);
				ImGui::InputText("##profname", s_profName, sizeof(s_profName));
				ImGui::SameLine();

				auto SaveCfg = [&](const char* name) {
					std::string path = std::string(name) + ".xcfg";
					FILE* f = nullptr;
					if (fopen_s(&f, path.c_str(), "w") != 0 || !f) return;
					auto* a = g_pXenonConfigs->g_pAimConfig.get();
					auto* e = g_pXenonConfigs->g_pEspConfig.get();
					auto* r = g_pXenonConfigs->g_pRadarConfig.get();
					fprintf(f, "profile=%s\n", name);
					// Aim
					fprintf(f, "aim.smooth=%f\n",       a->m_fSmooth);
					fprintf(f, "aim.fov=%f\n",           a->m_fFov);
					fprintf(f, "aim.nearest=%d\n",       a->m_nNearest);
					fprintf(f, "aim.aimkey=%d\n",        a->m_nAimKey);
					fprintf(f, "aim.predict=%d\n",       (int)a->m_bPredictPosition);
					fprintf(f, "aim.predtime=%f\n",      a->m_fPredictionTime);
					fprintf(f, "aim.onlyvis=%d\n",       (int)a->m_bOnlyVisible);
					fprintf(f, "aim.withkey=%d\n",       (int)a->m_bTriggerWithKey);
					fprintf(f, "aim.mouseinput=%d\n",    a->m_nMouseInputMode);
					fprintf(f, "aim.aimto=%d\n",         a->m_nAimTo);
					// ESP
					fprintf(f, "esp.healthbar=%d\n",     (int)e->m_bHealthBar);
					fprintf(f, "esp.nameinbox=%d\n",     (int)e->m_bNameInBox);
					fprintf(f, "esp.box2dtype=%d\n",     e->m_nBox2DType);
					fprintf(f, "esp.onlyvis=%d\n",       (int)e->m_bOnlyVisible);
					fprintf(f, "esp.distinbox=%d\n",     (int)e->m_bDistanceInBox);
					// Radar
					fprintf(f, "radar.zoom=%f\n",        r->m_fZoom);
					fprintf(f, "radar.tgtsize=%f\n",     r->m_fTargetsSize);
					fprintf(f, "radar.locsize=%f\n",     r->m_fLocalSize);
					fprintf(f, "radar.names=%d\n",       (int)r->m_bTargetsName);
					fclose(f);
					g_pXenon->g_pSystem->SetProfile(name);
				};

				auto LoadCfg = [&](const char* name) {
					std::string path = std::string(name) + ".xcfg";
					FILE* f = nullptr;
					if (fopen_s(&f, path.c_str(), "r") != 0 || !f) return;
					auto* a = g_pXenonConfigs->g_pAimConfig.get();
					auto* e = g_pXenonConfigs->g_pEspConfig.get();
					auto* r = g_pXenonConfigs->g_pRadarConfig.get();
					char line[128];
					while (fgets(line, sizeof(line), f)) {
						char key[64] = {}, val[64] = {};
						if (sscanf_s(line, "%63[^=]=%63s", key, (unsigned)sizeof(key), val, (unsigned)sizeof(val)) != 2) continue;
						auto fv = [&]{ return (float)atof(val); };
						auto iv = [&]{ return atoi(val); };
						if      (!strcmp(key,"profile"))       { g_pXenon->g_pSystem->SetProfile(val); strncpy_s(s_profName, val, sizeof(s_profName)-1); }
						else if (!strcmp(key,"aim.smooth"))    a->m_fSmooth          = fv();
						else if (!strcmp(key,"aim.fov"))       a->m_fFov             = fv();
						else if (!strcmp(key,"aim.nearest"))   a->m_nNearest         = iv();
						else if (!strcmp(key,"aim.aimkey"))    a->m_nAimKey          = iv();
						else if (!strcmp(key,"aim.predict"))   a->m_bPredictPosition = iv() != 0;
						else if (!strcmp(key,"aim.predtime"))  a->m_fPredictionTime  = fv();
						else if (!strcmp(key,"aim.onlyvis"))   a->m_bOnlyVisible     = iv() != 0;
						else if (!strcmp(key,"aim.withkey"))   a->m_bTriggerWithKey  = iv() != 0;
						else if (!strcmp(key,"aim.mouseinput"))a->m_nMouseInputMode  = iv();
						else if (!strcmp(key,"aim.aimto"))     a->m_nAimTo           = iv();
						else if (!strcmp(key,"esp.healthbar")) e->m_bHealthBar        = iv() != 0;
						else if (!strcmp(key,"esp.nameinbox")) e->m_bNameInBox        = iv() != 0;
						else if (!strcmp(key,"esp.box2dtype")) e->m_nBox2DType        = iv();
						else if (!strcmp(key,"esp.onlyvis"))   e->m_bOnlyVisible      = iv() != 0;
						else if (!strcmp(key,"esp.distinbox")) e->m_bDistanceInBox    = iv() != 0;
						else if (!strcmp(key,"radar.zoom"))    r->m_fZoom             = fv();
						else if (!strcmp(key,"radar.tgtsize")) r->m_fTargetsSize      = fv();
						else if (!strcmp(key,"radar.locsize")) r->m_fLocalSize        = fv();
						else if (!strcmp(key,"radar.names"))   r->m_bTargetsName      = iv() != 0;
					}
					fclose(f);
				};

				if (ImGui::Button("Save", ImVec2(60.f, 0.f)) && s_profName[0] != '\0')
					SaveCfg(s_profName);
				ImGui::SameLine();
				if (ImGui::Button("Load", ImVec2(60.f, 0.f)) && s_profName[0] != '\0')
					LoadCfg(s_profName);

				ImGui::Spacing();
				ImGui::PushStyleColor(ImGuiCol_Text, V_MUTED);
				ImGui::TextWrapped("Profiles are saved as <name>.xcfg next to the executable.");
				ImGui::PopStyleColor();
			}
			EndCard();
		} break;

		// ---- DEV (shown when m_bDevTab is on) -------------------
		case 5: {
			BeginCard("##dvc", 24.f, 16.f, MAIN_W - 48.f, colH);
				CardHeader("DEVELOPER");
				ImGui::Combo("Mouse Input", &g_pXenonConfigs->g_pAimConfig->m_nMouseInputMode,
					"SendInput\0SetCursorPos\0PostMessage\0MoveMouse");
				ImGui::SliderFloat("Radar Scale", &g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale, 0.f, 10000.f, "%.0f");
				CB("Lua Editor",            &g_pXenonVariables->g_bLuaEditor);
				CB("Render Quick Actions",  &g_pXenonVariables->g_bRenderQuickActions);
			EndCard();
		} break;

		} // switch
	}
	ImGui::EndChild();
	ImGui::PopStyleColor();

	// ========================================================
	// FOOTER child
	// ========================================================
	ImGui::SetCursorPos(ImVec2(mainX, 5.f + H - FOOTER_H));
	ImGui::PushStyleColor(ImGuiCol_ChildBg, V_TRANSP);
	ImGui::BeginChild("##ftr", ImVec2(MAIN_W, FOOTER_H), false, ImGuiWindowFlags_NoScrollbar);
	{
		ImDrawList* fdl = ImGui::GetWindowDrawList();
		ImVec2 fp = ImGui::GetWindowPos();
		fdl->AddLine(ImVec2(fp.x, fp.y + 1.f), ImVec2(fp.x + MAIN_W, fp.y + 1.f), P_BORDER, 1.f);

		char fpsTxt[32];
		snprintf(fpsTxt, sizeof(fpsTxt), "%.0f FPS", ImGui::GetIO().Framerate);

		char keyName[32] = "?";
		{
			int vk = g_pXenonVariables->g_nToggleUIKey;
			UINT sc = MapVirtualKey((UINT)vk, MAPVK_VK_TO_VSC);
			LONG lp = (LONG)(sc << 16);
			// Mark extended keys so GetKeyNameTextA returns the correct name
			if (vk == VK_INSERT || vk == VK_DELETE || vk == VK_HOME || vk == VK_END ||
			    vk == VK_PRIOR  || vk == VK_NEXT   ||
			    (vk >= VK_LEFT && vk <= VK_DOWN))
				lp |= (1 << 24);
			GetKeyNameTextA(lp, keyName, sizeof(keyName));
		}
		char keyHint[48];
		snprintf(keyHint, sizeof(keyHint), "%s to hide", keyName);

		fdl->AddText(m_pMainFont, 12.f, ImVec2(fp.x + 24.f, fp.y + 19.f),             P_MUTED, g_pXenon->g_pSystem->GetAppVersion()->c_str());
		fdl->AddText(m_pMainFont, 12.f, ImVec2(fp.x + MAIN_W * 0.5f - 20.f, fp.y + 19.f), P_MUTED, fpsTxt);
		fdl->AddText(m_pMainFont, 12.f, ImVec2(fp.x + MAIN_W - 118.f, fp.y + 19.f),   P_MUTED, keyHint);
	}
	ImGui::EndChild();
	ImGui::PopStyleColor();

	ImGui::End();

}

#if 0 // old menu kept for reference only
	if (ImGui::Begin("Default Menu", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBackground)) {

		//sizing
		float windowWidth = 500;
		ImGui::SetWindowSize(ImVec2(windowWidth, 440));

		//helpers def
		ImVec2 pos = ImGui::GetWindowPos() + ImVec2(5, 5);

		//main rect
		ImGui::GetWindowDrawList()->AddRectFilled(pos, ImVec2(pos.x + windowWidth - 10, pos.y + 430), g_pXenonConfigs->g_pUIConfig->m_cMenuBg, 6.f, ImDrawFlags_RoundCornersAll);

		//title
		ImGui::GetWindowDrawList()->AddRectFilled(pos, ImVec2(pos.x + windowWidth - 10, pos.y + 25), g_pXenonConfigs->g_pUIConfig->m_cMenuBg, 6.f, ImDrawFlags_RoundCornersTop);
		ImGui::GetWindowDrawList()->AddText(ImGuiHelper::CenterText(pos, ImVec2(pos.x + windowWidth - 10, pos.y + 25), g_pXenon->g_pSystem->GetAppTitle()->c_str()), g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenon->g_pSystem->GetAppTitle()->c_str());

		//tabs
		ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
		ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.2f, 0.2f, 0.2f, 1.f));         
		ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.3f, 0.3f, 0.3f, 1.f));  
		ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.4f, 0.4f, 0.4f, 1.f));   

		ImGui::SetCursorPos(ImVec2(5, 35));

		float width = m_bDevTab ? windowWidth / 5 : windowWidth / 4;

		float tabHeight = 20;
		ImGui::BeginGroup();
		{
			if (ImGui::Tabs("Aim", ImVec2(width, tabHeight), m_nSelectedTab == Tabs::AIM, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedTab = Tabs::AIM;
			if (ImGui::Tabs("Visuals", ImVec2(width, tabHeight), m_nSelectedTab == Tabs::VISUALS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedTab = Tabs::VISUALS;
			if (ImGui::Tabs("Radar", ImVec2(width, tabHeight), m_nSelectedTab == Tabs::RADAR, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedTab = Tabs::RADAR;
			if (ImGui::Tabs("Misc", ImVec2(width, tabHeight), m_nSelectedTab == Tabs::MISC, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedTab = Tabs::MISC;

			if (m_bDevTab)
			{
				if (ImGui::Tabs("Dev", ImVec2(width, tabHeight), m_nSelectedTab == Tabs::DEV, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedTab = Tabs::DEV;
			}
		}
		ImGui::EndGroup();

		// handle subtabs
		switch (m_nSelectedTab)
		{
			case Tabs::AIM:
				ImGui::SetCursorPos(ImVec2(5, 55));
				ImGui::BeginGroup();
				{
					if (ImGui::Tabs("Settings", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::SETTINGS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::SETTINGS;
					if (ImGui::Tabs("Colors", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::COLORS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::COLORS;
				}
				ImGui::EndGroup();
				break;
			case Tabs::VISUALS:
				ImGui::SetCursorPos(ImVec2(5, 55));
				ImGui::BeginGroup();
				{
					if (ImGui::Tabs("Settings", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::SETTINGS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::SETTINGS;
					if (ImGui::Tabs("Colors", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::COLORS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::COLORS;
				}
				ImGui::EndGroup();
				break;
			case Tabs::RADAR:
				ImGui::SetCursorPos(ImVec2(5, 55));
				ImGui::BeginGroup();
				{
					if (ImGui::Tabs("Settings", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::SETTINGS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::SETTINGS;
					if (ImGui::Tabs("Colors", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::COLORS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::COLORS;
				}
				ImGui::EndGroup();
				break;
			case Tabs::MISC:
				ImGui::SetCursorPos(ImVec2(5, 55));
				ImGui::BeginGroup();
				{
					if (ImGui::Tabs("Settings", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::SETTINGS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::SETTINGS;
					if (ImGui::Tabs("Colors", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::COLORS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::COLORS;
				}
				ImGui::EndGroup();
				break;
			case Tabs::DEV:
				ImGui::SetCursorPos(ImVec2(5, 55));
				ImGui::BeginGroup();
				{
					if (ImGui::Tabs("Settings", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::SETTINGS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::SETTINGS;
					if (ImGui::Tabs("Colors", ImVec2(windowWidth / 2, tabHeight), m_nSelectedSubTab == SubTabs::COLORS, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor2, 0)) m_nSelectedSubTab = SubTabs::COLORS;
				}
				ImGui::EndGroup();
				break;
		}

		ImGui::PopStyleColor(3);
		ImGui::PopStyleVar(); // this pops the itemspacing push

		ImGui::PushStyleColor(ImGuiCol_ChildBg, g_pXenonConfigs->g_pUIConfig->m_cMenuBgFor.Value);

		switch (m_nSelectedTab) {
			case Tabs::AIM:

				switch (m_nSelectedSubTab) {

					case SubTabs::SETTINGS: {
						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Aim Settings", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
								//ImGui::Checkbox("Silent", &g_pXenonVariables->g_bSilent);
								//ImGui::Checkbox("Visible", &g_pXenonVariables->g_bVisibleCheck);
								//ImGui::Checkbox("Auto scope", &g_pXenonVariables->g_bAutoScope);
								//ImGui::Checkbox("Auto shoot", &g_pXenonVariables->g_bAutoShoot);
								ImGui::Checkbox("Crosshair", &g_pXenonVariables->g_bCrosshair, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								if (g_pXenonVariables->g_bCrosshair) {
									ImGui::Combo("Crossair Type", &g_pXenonConfigs->g_pUIConfig->m_nCrosshairType, "Cross\0Circle");
								}
								ImGui::Checkbox("No recoil", &g_pXenonVariables->g_bNoRecoil, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								ImGui::Checkbox("Spinbot 2D", &g_pXenonVariables->g_bSpinbot2D, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								ImGui::Checkbox("Spinbot 3D", &g_pXenonVariables->g_bSpinbot3D, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								ImGui::Checkbox("Aimbot", &g_pXenonVariables->g_bAimbot, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								if (g_pXenonVariables->g_bAimbot) {
									ImGui::Indent(10);

									ImGui::Checkbox("Use Prediction", &g_pXenonConfigs->g_pAimConfig->m_bPredictPosition, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonConfigs->g_pAimConfig->m_bPredictPosition) {
										ImGui::SliderFloat("Prediction time", &g_pXenonConfigs->g_pAimConfig->m_fPredictionTime, 0.001f, 0.9f, "%.5f");
									}

									ImGui::Checkbox("Trigger Holding A Key", &g_pXenonConfigs->g_pAimConfig->m_bTriggerWithKey, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonConfigs->g_pAimConfig->m_bTriggerWithKey) {
										ImGui::Keybind("Aim Key", &g_pXenonConfigs->g_pAimConfig->m_nAimKey);
									}

									ImGui::Checkbox("Aim Only Visible", &g_pXenonConfigs->g_pAimConfig->m_bOnlyVisible, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									ImGui::Combo("Aim To", &g_pXenonConfigs->g_pAimConfig->m_nAimTo, "Head\0Body\0Feet");

									ImGui::Checkbox("Nearest", &g_pXenonVariables->g_bNearest, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonVariables->g_bNearest) {
										g_pXenonVariables->g_bFov = false;

										ImGui::Indent(10);

										ImGui::SliderInt("Nearest distance", &g_pXenonConfigs->g_pAimConfig->m_nNearest, 1, 5000);

										ImGui::Indent(-10);
									}

									ImGui::Checkbox("Fov", &g_pXenonVariables->g_bFov, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonVariables->g_bFov) {
										g_pXenonVariables->g_bNearest = false;

										ImGui::Indent(10);

										ImGui::SliderFloat("Fov size", &g_pXenonConfigs->g_pAimConfig->m_fFov, 30.f, 300.f, "%.0f");

										ImGui::Indent(-10);
									}
									ImGui::Checkbox("Humanize", &g_pXenonVariables->g_bHumanize, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									//ImGui::Checkbox("No spread", &g_pXenonVariables->g_bNoSpread);

									ImGui::Checkbox("Smooth", &g_pXenonVariables->g_bSmooth, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonVariables->g_bSmooth) {
										ImGui::Indent(10);

										ImGui::SliderFloat("Smooth value", &g_pXenonConfigs->g_pAimConfig->m_fSmooth, 5.f, 50.f, "%.0f");
										
										ImGui::Indent(-10);
									}

									ImGui::Indent(-10);

								}
							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
					case SubTabs::COLORS: {
						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Aim Colors", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
								ImGui::ColorEdit4("Fov Color", (float*)&g_pXenonConfigs->g_pAimConfig->m_cFov, ImGuiColorEditFlags_NoInputs);

							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
				}

				break;
			case Tabs::VISUALS:

				switch (m_nSelectedSubTab) {

					case SubTabs::SETTINGS: {
						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Visuals Settings", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
								ImGui::Checkbox("ESP", &g_pXenonVariables->g_bEsp, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								if (g_pXenonVariables->g_bEsp) {
									ImGui::Indent(10);

									ImGui::Checkbox("Render Only Visible", &g_pXenonConfigs->g_pEspConfig->m_bOnlyVisible, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);

									ImGui::Checkbox("Healthbar", &g_pXenonVariables->g_bHealthBar, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									ImGui::Checkbox("Snapline", &g_pXenonVariables->g_bSnapline, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonVariables->g_bSnapline) {
										ImGui::Indent(10);

										ImGui::Combo("Snapline Start", &g_pXenonConfigs->g_pEspConfig->m_nSnaplineTypeStart, "Center\0Top\0Bottom");
										ImGui::Combo("Snapline End", &g_pXenonConfigs->g_pEspConfig->m_nSnaplineTypeEnd, "Head\0Body\0Feet");

										ImGui::Indent(-10);
									}
									ImGui::Checkbox("Box 2D", &g_pXenonVariables->g_bBox2D, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonVariables->g_bBox2D) {
										ImGui::Indent(10);

										ImGui::Combo("Box 2D Type", &g_pXenonConfigs->g_pEspConfig->m_nBox2DType, "Normal\0Cornered");
										ImGui::Checkbox("Box 2D Distance", &g_pXenonConfigs->g_pEspConfig->m_bDistanceInBox, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
										ImGui::Checkbox("Box 2D Name", &g_pXenonConfigs->g_pEspConfig->m_bNameInBox, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);

										ImGui::Indent(-10);
									}
									ImGui::Checkbox("Box 3D", &g_pXenonVariables->g_bBox3D, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									if (g_pXenonVariables->g_bBox3D) {
										ImGui::Indent(10);

										ImGui::Checkbox("Box 3D Distance", &g_pXenonConfigs->g_pEspConfig->m_bDistanceInBox, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
										ImGui::Checkbox("Box 3D Name", &g_pXenonConfigs->g_pEspConfig->m_bNameInBox, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);

										ImGui::Indent(-10);
									}
									ImGui::Checkbox("Skeleton", &g_pXenonVariables->g_bSkeleton, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);

									ImGui::Indent(-10);
								}

							}
							ImGui::EndGroup();

						}
						ImGui::EndChild();
					} break;
					case SubTabs::COLORS: {
						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Visuals Colors", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{

								ImGui::ColorEdit4("Snapline", (float*)&g_pXenonConfigs->g_pEspConfig->m_cSnapline, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Box2D", (float*)&g_pXenonConfigs->g_pEspConfig->m_cBox2D, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Box2D Distance", (float*)&g_pXenonConfigs->g_pEspConfig->m_cBox2DDistance, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Box2D Name", (float*)&g_pXenonConfigs->g_pEspConfig->m_cBox2DName, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Box3D", (float*)&g_pXenonConfigs->g_pEspConfig->m_cBox3D, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Box3D Distance", (float*)&g_pXenonConfigs->g_pEspConfig->m_cBox3DDistance, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Box3D Name", (float*)&g_pXenonConfigs->g_pEspConfig->m_cBox3DName, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Skeleton", (float*)&g_pXenonConfigs->g_pEspConfig->m_cSkeleton, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Healthbar Background", (float*)&g_pXenonConfigs->g_pEspConfig->m_cHealthBarBg, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Healthbar Foreground", (float*)&g_pXenonConfigs->g_pEspConfig->m_cHealthBarFilled, ImGuiColorEditFlags_NoInputs);
								ImGui::ColorEdit4("Healthbar Text", (float*)&g_pXenonConfigs->g_pEspConfig->m_cHealthBarText, ImGuiColorEditFlags_NoInputs);

							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
				}

				break;
			case Tabs::RADAR:

				switch (m_nSelectedSubTab) {
					case SubTabs::SETTINGS: {

						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Radar Settings", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
								ImGui::Checkbox("Radar", &g_pXenonVariables->g_bRadar, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								if (g_pXenonVariables->g_bRadar) {
									ImGui::Indent(10);

									ImGui::Checkbox("Show Targets Name", &g_pXenonConfigs->g_pRadarConfig->m_bTargetsName, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
									ImGui::SliderFloat("Size", &g_pXenonConfigs->g_pRadarConfig->m_fSize, 0.f, 500.f, "%.0f");
									ImGui::SliderFloat("Zoom", &g_pXenonConfigs->g_pRadarConfig->m_fZoom, 0.3f, 50.f, "%.1f");
									ImGui::SliderFloat("Targets Size", &g_pXenonConfigs->g_pRadarConfig->m_fTargetsSize, 0.f, 100.f, "%.0f");
									ImGui::SliderFloat("Local Size", &g_pXenonConfigs->g_pRadarConfig->m_fLocalSize, 0.f, 100.f, "%.0f");
									
									ImGui::Indent(-10);
								}
							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
					case SubTabs::COLORS: {
						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Radar Colors", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
				}

				break;
			case Tabs::MISC:

				switch (m_nSelectedSubTab) {

					case SubTabs::SETTINGS: {

						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Misc Settings", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
								ImGui::Checkbox("Watermark", &g_pXenonVariables->g_bWatermark, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								if (ImGui::Button("Set Waypoint")) {
									if (g_pXenon->g_pSystem->Is3DGame()) {
										g_pXenon->g_cWaypoints->SetWaypoint("Waypoint", g_pXenonConfigs->g_pGameVariables->g_vLocal.m_vPos3D, ImColor(255,255,255));
									}
									else {
										g_pXenon->g_cWaypoints->SetWaypoint("Waypoint", g_pXenonConfigs->g_pGameVariables->g_vLocal.m_vPos2D, ImColor(255,255,255));
									}
								}								
								ImGui::Checkbox("Render Notifications", &g_pXenonVariables->g_bNotifications, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								ImGui::Checkbox("Render Mouse", &g_pXenonVariables->g_bRenderMouse, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								if (g_pXenonVariables->g_bRenderMouse) {
									ImGui::Combo("Mouse Type", &g_pXenonConfigs->g_pUIConfig->m_nMouseType, "Dot\0Cross");
								}
								ImGui::Checkbox("Render UI Windows", &g_pXenonVariables->g_bRenderWindows, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								ImGui::Checkbox("Render UI Overlays", &g_pXenonVariables->g_bRenderOverlays, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								ImGui::Checkbox("Developer Tab", &m_bDevTab, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
					case SubTabs::COLORS: {
						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Misc Colors", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
								ImGui::ColorEdit4("Crossair", (float*)&g_pXenonConfigs->g_pUIConfig->m_cCrosshair, ImGuiColorEditFlags_NoInputs);
							
								ImGui::ColorEdit4("Mouse", (float*)&g_pXenonConfigs->g_pUIConfig->m_cMouse, ImGuiColorEditFlags_NoInputs);
							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
	
					} break;
				}

				break;
			case Tabs::DEV:
				switch (m_nSelectedSubTab) {

					case SubTabs::SETTINGS: {

						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Dev Settings", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
								ImGui::Combo("Mouse Input Mode", &g_pXenonConfigs->g_pAimConfig->m_nMouseInputMode, "SendInput\0SetCursorPos\0PostMessage\0MoveMouse");
								ImGui::SliderFloat("Radar Default Scale", &g_pXenonConfigs->g_pRadarConfig->m_fDefaultScale, 0.f, 10000.f, "%.0f");
								ImGui::Checkbox("Lua Editor", &g_pXenonVariables->g_bLuaEditor, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
								ImGui::Checkbox("Render UI Quick Actions", &g_pXenonVariables->g_bRenderQuickActions, g_pXenonConfigs->g_pUIConfig->m_cMenuBg, g_pXenonConfigs->g_pUIConfig->m_cMenuAccent, g_pXenonConfigs->g_pUIConfig->m_cMenuOff);
							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
					case SubTabs::COLORS: {
						ImGui::SetCursorPos(ImVec2(10, 80));
						ImGui::BeginChild("Dev Colors", ImVec2(windowWidth - 20, 350));
						{
							//render funcs
							ImGui::SetCursorPos(ImVec2(10, 10));
							ImGui::BeginGroup();
							{
							}
							ImGui::EndGroup();
						}
						ImGui::EndChild();
					} break;
				}

				break;
		}

		ImGui::PopStyleColor();
	}
	ImGui::End();
}
#endif // old menu


LRESULT __stdcall CUIService::WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (*m_bShowMenu && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	if (*m_bShowMenu)
		return true;

	if (!m_pSystem->IsInternal() && uMsg == WM_DESTROY) {
		PostQuitMessage(0);
		return true;
	}

	//if (m_pSystem->IsInternal()) {
	//	return CallWindowProcA(*m_pOWndProc, hWnd, uMsg, wParam, lParam);
	//}
	//else {
		return DefWindowProcA(hWnd, uMsg, wParam, lParam);
	//}
}

//void CUIService::AutoHook() {
//
//	g_hWindow = U::GetProcessWindow();
//
//	switch (m_pXenon->g_pSystem->GetRenderingBackend()) {
//		//case DX9:
//		//	DX9::ExecHook(g_hWindow);
//		//	break;
//		//case DX10:
//		//	DX10::ExecHook(g_hWindow);
//		//	break;
//		//case DX11:
//		//	DX11::ExecHook(g_hWindow);
//		//	break;
//		//case DX12:
//		//	DX12::ExecHook(g_hWindow);
//		//	break;
//	case OPENGL:
//		GL::ExecHook(g_hWindow);
//		break;
//		//case VULKAN:
//		//	VK::ExecHook(g_hWindow);
//		//	break;
//	}
//}

void CUIService::InitExternal() {
	if (CreateWindowUI()) {
		if (CreateDeviceUI()) {
			CreateImGuiUI();
		}
	}
}

void CUIService::RenderEnabledCheats() {

	ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x - 110, 10), ImGuiCond_Always);
	ImGui::SetNextWindowSize(ImVec2(100, 0));

	ImGui::Begin("Enabled Cheats", nullptr,
		ImGuiWindowFlags_NoTitleBar |
		ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoBringToFrontOnFocus |
		ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoScrollWithMouse |
		ImGuiWindowFlags_NoBackground);

	ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
	ImGui::PushFont(m_pBiggerMainFont, m_pBiggerMainFont->LegacySize);

	if (g_pXenonVariables->g_bAimbot) {
		ImGui::Text("Aimbot");
	}
	if (g_pXenonVariables->g_bSpinbot2D || g_pXenonVariables->g_bSpinbot3D) {
		ImGui::Text("Spinbot");
	}
	if (g_pXenonVariables->g_bSnapline) {
		ImGui::Text("Snapline");
	}
	if (g_pXenonVariables->g_bBox2D || g_pXenonVariables->g_bBox3D) {
		ImGui::Text("Box");
	}
	if (g_pXenonVariables->g_bSkeleton) {
		ImGui::Text("Skeleton");
	}
	if (g_pXenonVariables->g_bRadar) {
		ImGui::Text("Radar");
	}
	if (g_pXenonVariables->g_bNoRecoil) {
		ImGui::Text("No Recoil");
	}
	if (g_pXenonVariables->g_bCrosshair) {
		ImGui::Text("Crosshair");
	}

	ImGui::PopFont();
	ImGui::PopStyleColor();
	ImGui::End();
}


void CUIService::RenderCrosshair() {
	switch (g_pXenonConfigs->g_pUIConfig->m_nCrosshairType)
	{
	case 0:
		ImGui::GetForegroundDrawList()->AddLine(ImVec2(g_pXenon->g_pSystem->GetScreenCenter().x - g_pXenonConfigs->g_pUIConfig->m_fCrosshair, g_pXenon->g_pSystem->GetScreenCenter().y), ImVec2((g_pXenon->g_pSystem->GetScreenCenter().x - g_pXenonConfigs->g_pUIConfig->m_fCrosshair) + (g_pXenonConfigs->g_pUIConfig->m_fCrosshair * 2), g_pXenon->g_pSystem->GetScreenCenter().y), g_pXenonConfigs->g_pUIConfig->m_cCrosshair, 1.2f);
		ImGui::GetForegroundDrawList()->AddLine(ImVec2(g_pXenon->g_pSystem->GetScreenCenter().x, g_pXenon->g_pSystem->GetScreenCenter().y - g_pXenonConfigs->g_pUIConfig->m_fCrosshair), ImVec2(g_pXenon->g_pSystem->GetScreenCenter().x, (g_pXenon->g_pSystem->GetScreenCenter().y - g_pXenonConfigs->g_pUIConfig->m_fCrosshair) + (g_pXenonConfigs->g_pUIConfig->m_fCrosshair * 2)), g_pXenonConfigs->g_pUIConfig->m_cCrosshair, 1.2f);
		break;
	case 1:
		ImGui::GetForegroundDrawList()->AddCircle(ImVec2(g_pXenon->g_pSystem->GetScreenCenter().x, g_pXenon->g_pSystem->GetScreenCenter().y), g_pXenonConfigs->g_pUIConfig->m_fCrosshair, g_pXenonConfigs->g_pUIConfig->m_cCrosshair, 100, 1.2f);
		break;
	}
}

void CUIService::RenderFov() {
	if (g_pXenon->g_pSystem->Is3DGame()) {
		ImGui::GetForegroundDrawList()->AddCircle(ImVec2(g_pXenon->g_pSystem->GetScreenCenter().x, g_pXenon->g_pSystem->GetScreenCenter().y), g_pXenonConfigs->g_pAimConfig->m_fFov, g_pXenonConfigs->g_pAimConfig->m_cFov, 360);
	}
	else {
		RenderFovLine(g_pXenonConfigs->g_pAimConfig->m_fFov * 0.01f);
		RenderFovLine(g_pXenonConfigs->g_pAimConfig->m_fFov * -0.01f);
	}
}

void CUIService::RenderFovLine(float offset)
{
	if (g_pXenon->g_pSystem->Is3DGame()) {
		spdlog::error("RenderFovLine is supposed to be called only for 2D games");
		return;
	}

	const Vec2 mousePos = g_pXenonConfigs->g_pAimConfig->m_fnCustomGetAim();
	const float angle = atan2(mousePos.y - 0, mousePos.x - 0) + offset;

	float dirX = cos(angle);
	float dirY = sin(angle);

	float length = std::sqrt(dirX * dirX + dirY * dirY);
	const Vec2 initPos = g_pXenon->g_pSystem->m_fnW2S2D(g_pXenonConfigs->g_pGameVariables->g_vLocal.m_vPos2D) + Vec2(g_pXenonConfigs->g_pGameVariables->g_vLocal.m_fWidth/2, g_pXenonConfigs->g_pGameVariables->g_vLocal.GetHeight2D()/2);
	Vec2 exDirection = (length > 0.0f) ? Vec2{ dirX / length, dirY / length } : Vec2{ 0.0f, 0.0f };

	Vec2 finishPos = initPos + exDirection * 200; 

	ImGui::GetBackgroundDrawList()->AddLine(ImVec2(initPos.x, initPos.y), ImVec2(finishPos.x, finishPos.y), g_pXenonConfigs->g_pAimConfig->m_cFov, 1.2f);
}


void CUIService::RenderMouse() {
	switch (g_pXenonConfigs->g_pUIConfig->m_nMouseType) {
	case 0:
		ImGui::GetForegroundDrawList()->AddCircleFilled(ImGui::GetMousePos(), 4, g_pXenonConfigs->g_pUIConfig->m_cMouse);
		break;
	case 1:
		ImGuiHelper::DrawOutlinedTextForeground(m_pMainFont, ImVec2(g_pXenon->g_pSystem->GetMousePos().x, g_pXenon->g_pSystem->GetMousePos().y), 13.0f, g_pXenonConfigs->g_pUIConfig->m_cMouse, false, "X");
		break;
	case 2:
		if (!ImGui::GetIO().MouseDrawCursor) {
			ImGui::GetIO().MouseDrawCursor = true;
		}
		break;
	}
}

void CUIService::RenderDefaultUIQuickActions() {

	const ImU32 P_BG     = IM_COL32(11,  15,  20,  255);
	const ImU32 P_BORDER = IM_COL32(30,  38,  48,  255);
	const ImU32 P_MUTED  = IM_COL32(139, 152, 168, 255);

	const float W = 300.f;
	int  nItems = (int)g_pXenonConfigs->g_pUIConfig->m_qActions->GetSize();
	const float H = ImMax(80.f, (float)nItems * 44.f + 60.f);

	ImGui::SetNextWindowSize(ImVec2(W + 10.f, H + 10.f));
	if (!ImGui::Begin("##qa", nullptr,
		ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize |
		ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoScrollbar |
		ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBackground))
	{
		ImGui::End();
		return;
	}

	ImVec2 wp = ImGui::GetWindowPos();
	ImVec2 p0 = ImVec2(wp.x + 5.f, wp.y + 5.f);
	ImDrawList* dl = ImGui::GetWindowDrawList();

	dl->AddRectFilled(p0, ImVec2(p0.x + W, p0.y + H), P_BG, 16.f);
	dl->AddRect(p0, ImVec2(p0.x + W, p0.y + H), P_BORDER, 16.f, 0, 1.f);

	dl->AddText(m_pMainFont, 12.f, ImVec2(p0.x + 18.f, p0.y + 14.f), P_MUTED, "QUICK ACTIONS");
	dl->AddLine(ImVec2(p0.x, p0.y + 38.f), ImVec2(p0.x + W, p0.y + 38.f), P_BORDER, 1.f);

	ImGui::SetCursorPos(ImVec2(5.f + 12.f, 5.f + 44.f));
	ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(8.f, 8.f));
	ImGui::BeginGroup();
	for (const auto& action : g_pXenonConfigs->g_pUIConfig->m_qActions->GetComponents()) {
		action->Render();
	}
	ImGui::EndGroup();
	ImGui::PopStyleVar();

	ImGui::End();
}

void CUIService::UpdateUI() {

	if (g_pXenonVariables->g_bShowMenu) {

		if (g_pXenonVariables->g_bRenderMouse) {
			RenderMouse();
		}

		if (g_pXenonConfigs->g_pUIConfig->m_fnCustomTheme)
			g_pXenonConfigs->g_pUIConfig->m_fnCustomTheme();
		else
			RenderDefaultTheme(false);

		if (g_pXenonVariables->g_bMenu) {
			if (!m_bLoggedIn) {
				RenderLoginScreen();
			}
			else if (g_pXenonConfigs->g_pUIConfig->m_fnCustomMenu) {
				g_pXenonConfigs->g_pUIConfig->m_fnCustomMenu();
			}
			else {
				RenderDefaultMenu();
			}
		}

		if (g_pXenonVariables->g_bRenderWindows) {
			ImGui::PushStyleColor(ImGuiCol_WindowBg,      ImVec4(11.f/255.f, 15.f/255.f, 20.f/255.f, 0.97f));
			ImGui::PushStyleColor(ImGuiCol_TitleBg,       ImVec4(19.f/255.f, 25.f/255.f, 32.f/255.f, 1.f));
			ImGui::PushStyleColor(ImGuiCol_TitleBgActive, ImVec4(19.f/255.f, 25.f/255.f, 32.f/255.f, 1.f));
			ImGui::PushStyleColor(ImGuiCol_Border,        ImVec4(30.f/255.f, 38.f/255.f, 48.f/255.f, 1.f));
			ImGui::PushStyleColor(ImGuiCol_Text,          ImVec4(230.f/255.f, 237.f/255.f, 243.f/255.f, 1.f));
			ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding,   14.f);
			ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 1.f);
			ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding,    ImVec2(16.f, 12.f));
			for (auto& fn : g_pXenonConfigs->g_pUIConfig->m_vFnWindows) {
				fn();
			}
			ImGui::PopStyleVar(3);
			ImGui::PopStyleColor(5);
		}

		if (g_pXenonVariables->g_bRenderQuickActions && g_pXenonConfigs->g_pUIConfig->m_qActions->GetSize() > 0) {
			RenderDefaultUIQuickActions();
		}

	}

	if (g_pXenonVariables->g_bRenderOverlays) {
		for (auto& fn : g_pXenonConfigs->g_pUIConfig->m_vFnOverlays) {
			fn();
		}
	}

	if (g_pXenonVariables->g_bWatermark)
	{
		ImColor color = ImColor(255, 255, 255, 255); // or rainbow

		ImGuiHelper::DrawOutlinedText(m_pMainFont, ImVec2(g_pXenon->g_pSystem->GetScreenCenter().x, g_pXenon->g_pSystem->GetScreenResolution().y - 20), 13.0f, color, true, g_pXenon->g_pSystem->GetAppTitle()->c_str());
		ImGuiHelper::DrawOutlinedText(m_pMainFont, ImVec2(g_pXenon->g_pSystem->GetScreenCenter().x, 5), 13.0f, color, true, "[ %.1f FPS ]", ImGui::GetIO().Framerate);
	}

	g_pXenon->g_cNotificationService->RenderNotifications();

}

void CUIService::Destroy() {
	DestroyImGuiUI();
	DestroyDeviceUI();
	DestroyWindowUI();
}

bool CUIService::CreateWindowUI()
{

	m_wClass.cbSize = sizeof(WNDCLASSEX);
	m_wClass.style = CS_CLASSDC;
	m_wClass.lpfnWndProc = WndProc;
	m_wClass.cbClsExtra = 0;
	m_wClass.cbWndExtra = 0;
	m_wClass.hInstance = GetModuleHandle(nullptr);
	m_wClass.hIcon = 0;
	m_wClass.hCursor = 0;
	m_wClass.hbrBackground = 0;
	m_wClass.lpszMenuName = 0;
	m_wClass.lpszClassName = L"overlay";
	m_wClass.hIconSm = 0;

	if (!m_wClass.hInstance) {
		spdlog::error("GetModuleHandle failed with error: {}", GetLastError());
		return false;
	}

	if (!RegisterClassExW(&m_wClass)) {
		spdlog::error("RegisterClassExW failed with error: {}", GetLastError());
		return false;
	}

	std::string appTitle = *g_pXenon->g_pSystem->GetAppTitle();

	int size_needed = MultiByteToWideChar(CP_UTF8, 0, appTitle.c_str(), -1, nullptr, 0);
	if (size_needed <= 0) {
		spdlog::error("MultiByteToWideChar failed with error: {}", GetLastError());
		return false;	
	}

	std::wstring wideWindowTitle(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, appTitle.c_str(), -1, &wideWindowTitle[0], size_needed);

	DWORD exStyle = WS_EX_TOPMOST | WS_EX_TRANSPARENT | WS_EX_LAYERED;
	if (g_pXenonConfigs->g_pUIConfig->m_bHideTaskbar)
		exStyle |= WS_EX_TOOLWINDOW;

	m_hWindow = CreateWindowExW(
		exStyle,
		m_wClass.lpszClassName,
		wideWindowTitle.c_str(),
		WS_POPUP,
		0, 0,
		static_cast<int>(g_pXenon->g_pSystem->GetScreenResolution().x),
		static_cast<int>(g_pXenon->g_pSystem->GetScreenResolution().y),
		nullptr, nullptr, m_wClass.hInstance, nullptr
	);

	if (!m_hWindow) {
		spdlog::error("CreateWindowExW failed with error: {}", GetLastError());
		return false;
	}

	SetLayeredWindowAttributes(m_hWindow, RGB(0, 0, 0), BYTE(255), LWA_ALPHA);
	{
		RECT client_area{};
		GetClientRect(m_hWindow, &client_area);

		RECT window_area{};
		GetWindowRect(m_hWindow, &window_area);

		POINT diff{};
		ClientToScreen(m_hWindow, &diff);

		const MARGINS margins{
			window_area.left + (diff.x - window_area.left),
			window_area.top + (diff.y - window_area.top),
			client_area.right,
			client_area.bottom
		};

		DwmExtendFrameIntoClientArea(m_hWindow, &margins);
	}

	ShowWindow(m_hWindow, SW_SHOWDEFAULT);
	UpdateWindow(m_hWindow);

	SetCursor(LoadCursor(nullptr, IDC_ARROW));

	return true;

}

void CUIService::DestroyWindowUI()
{
	DestroyWindow(m_hWindow);
	UnregisterClassW(m_wClass.lpszClassName, m_wClass.hInstance);
}

bool CUIService::CreateDeviceUI() {
	DXGI_SWAP_CHAIN_DESC sd{};
	sd.BufferDesc.RefreshRate.Numerator = 60U;
	sd.BufferDesc.RefreshRate.Denominator = 1U;
	sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.SampleDesc.Count = 1U;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.BufferCount = 2U;
	sd.OutputWindow = m_hWindow;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
	sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

	constexpr D3D_FEATURE_LEVEL levels[2]{
		D3D_FEATURE_LEVEL_11_0,
		D3D_FEATURE_LEVEL_10_0
	};

	HRESULT hr = D3D11CreateDeviceAndSwapChain(
		nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		0U,
		levels,
		2U,
		D3D11_SDK_VERSION,
		&sd,
		&m_pSwapChain,
		&m_pDeviceDX11,
		&m_dLevel,
		&m_pContextDX11
	);

	if (FAILED(hr)) {
		spdlog::error("D3D11CreateDeviceAndSwapChain failed with HRESULT: {}", hr);
		return false;
	}

	ID3D11Texture2D* back_buffer{ nullptr };
	m_pSwapChain->GetBuffer(0U, IID_PPV_ARGS(&back_buffer));

	if (back_buffer) {
		m_pDeviceDX11->CreateRenderTargetView(back_buffer, nullptr, &m_pMainRenderTargetViewDX11);
		back_buffer->Release();
		return true;
	}
	return false;

}

void CUIService::SetMenuOpen() {

	SetWindowLongW(m_hWindow, GWL_EXSTYLE, WS_EX_TOPMOST | WS_EX_TRANSPARENT);

}

void CUIService::SetMenuClose() {

	SetWindowLongW(m_hWindow, GWL_EXSTYLE, WS_EX_TOPMOST | WS_EX_TRANSPARENT | WS_EX_LAYERED);

}

//void CUIService::ResetDeviceUI()
//{
//
//	switch (g_pXenon->g_pSystem->GetRenderingBackend()) {
//		case RenderingBackend::DX11:
//			ImGui_ImplDX11_InvalidateDeviceObjects();
//			break;		
//		case RenderingBackend::DX12:
//			ImGui_ImplDX12_InvalidateDeviceObjects();
//			break;
//		//case RenderingBackend::OPENGL2:
//		//	ImGui_ImplOpenGL2_DestroyDeviceObjects();
//		//	break;
//		//case RenderingBackend::OPENGL3:
//		//	ImGui_ImplOpenGL3_DestroyDeviceObjects();
//		//	break;
//	}
//
//	DestroyDeviceUI();
//
//	switch (g_pXenon->g_pSystem->GetRenderingBackend()) {
//		case RenderingBackend::DX11:
//			ImGui_ImplDX11_CreateDeviceObjects();
//			break;
//		case RenderingBackend::DX12:
//			ImGui_ImplDX12_CreateDeviceObjects();
//			break;
//		//case RenderingBackend::OPENGL2:
//		//	ImGui_ImplOpenGL2_CreateDeviceObjects();
//		//	break;
//		//case RenderingBackend::OPENGL3:
//		//	ImGui_ImplOpenGL3_CreateDeviceObjects();
//		//	break;
//	}
//
//}
//
void CUIService::DestroyDeviceUI()
{
	if (m_pDeviceDX11)
	{
		m_pDeviceDX11->Release();
		m_pDeviceDX11 = nullptr;
	}

	if (m_pSwapChain)
	{
		m_pSwapChain->Release();
		m_pSwapChain = nullptr;
	}
}

void CUIService::CreateImGuiUI()
{
	InitializeDepthStencilStates();

	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(m_hWindow);

	ImGui_ImplDX11_Init(m_pDeviceDX11, m_pContextDX11);

	LoadDefaultFonts();
	RenderDefaultTheme(false);
}

void CUIService::DestroyImGuiUI()
{

	//switch (g_pXenon->g_pSystem->GetRenderingBackend()) {
	//case RenderingBackend::DX11:
		ImGui_ImplDX11_Shutdown();
	//	break;
	//case RenderingBackend::DX12:
	//	ImGui_ImplDX12_Shutdown();
	//	break;
	//case RenderingBackend::OPENGL2:
	//	ImGui_ImplOpenGL2_Shutdown();
	//	break;
	//case RenderingBackend::OPENGL3:
	//	ImGui_ImplOpenGL3_Shutdown();
	//	break;
	//}

	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	if (m_pSwapChain) {
		m_pSwapChain->Release();
	}

	if (m_pContextDX11) {
		m_pContextDX11->Release();
	}

	if (m_pDeviceDX11) {
		m_pDeviceDX11->Release();
	}

	if (m_pMainRenderTargetViewDX11) {
		m_pMainRenderTargetViewDX11->Release();
	}

}

void CUIService::BeginRenderUI()
{

	MSG msg;
	while (PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE)) {

		TranslateMessage(&msg);
		DispatchMessage(&msg);

		if (msg.message == WM_QUIT)
		{
			//isRunning = !isRunning;
			return;
		}
	}

	ImGui_ImplDX11_NewFrame();

	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	m_pContextDX11->OMSetDepthStencilState(m_pNoDepthStencilStateDX11, 0);

}

void CUIService::InitializeDepthStencilStates() {
	D3D11_DEPTH_STENCIL_DESC noDepthStencilDesc = {};
	noDepthStencilDesc.DepthEnable = FALSE;
	noDepthStencilDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ZERO;
	noDepthStencilDesc.DepthFunc = D3D11_COMPARISON_ALWAYS;
	noDepthStencilDesc.StencilEnable = FALSE;

	HRESULT hr = m_pDeviceDX11->CreateDepthStencilState(&noDepthStencilDesc, &m_pNoDepthStencilStateDX11);
	if (FAILED(hr)) {
		return;
	}

	D3D11_DEPTH_STENCIL_DESC defaultDepthStencilDesc = {};
	defaultDepthStencilDesc.DepthEnable = TRUE;
	defaultDepthStencilDesc.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
	defaultDepthStencilDesc.DepthFunc = D3D11_COMPARISON_LESS;
	defaultDepthStencilDesc.StencilEnable = FALSE;

	hr = m_pDeviceDX11->CreateDepthStencilState(&defaultDepthStencilDesc, &m_pDefaultDepthStencilStateDX11);
	if (FAILED(hr)) {
		return;
	}
}

void CUIService::EndRenderUI()
{

	m_pContextDX11->OMSetDepthStencilState(m_pDefaultDepthStencilStateDX11, 0);

	ImGui::EndFrame();

	ImGui::Render();

	constexpr float color[4] = { 0.f, 0.f, 0.f, 0.f };
	m_pContextDX11->ClearRenderTargetView(m_pMainRenderTargetViewDX11, color);

	m_pContextDX11->OMSetRenderTargets(1U, &m_pMainRenderTargetViewDX11, nullptr);

	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	
	m_pSwapChain->Present(1U, 0U);
}
