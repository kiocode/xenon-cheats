#pragma once

#include <xenon/models/enums/rendering_type.hpp>

namespace HookUtils {
	void SetRenderingBackend(RenderingBackend eRenderingBackend);
	RenderingBackend GetRenderingBackend( );
	const char* RenderingBackendToStr( );

	HWND GetProcessWindow( );
	void UnloadDLL( );
	
	HMODULE GetCurrentImageBase( );

	int GetCorrectDXGIFormat(int eCurrentFormat);
}

namespace U = HookUtils;
