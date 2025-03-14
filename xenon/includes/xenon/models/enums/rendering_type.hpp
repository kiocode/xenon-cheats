#pragma once

enum RenderingBackend {
	REND_NONE = 0,

	DX9,
	DX10,
	DX11,
	DX12,

	OPENGL,
	VULKAN,
};