#pragma once

#include <CautionDefinitions.h>
#include <dxgiformat.h>

namespace CautionEngine::Rendering
{
	enum CAUTION_CLASS RenderFormat
	{
		RENDER_FORMAT_UNKOWN = DXGI_FORMAT_UNKNOWN,

		//32 bit per channel
		RENDER_FORMAT_R32G32B32A32_FLOAT = DXGI_FORMAT_R32G32B32A32_FLOAT,
		RENDER_FORMAT_R32G32B32A32_UINT  = DXGI_FORMAT_R32G32B32A32_UINT,
		RENDER_FORMAT_R32G32B32A32_SINT  = DXGI_FORMAT_R32G32B32_SINT,

		RENDER_FORMAT_R32G32B32_FLOAT = DXGI_FORMAT_R32G32B32_FLOAT,
		RENDER_FORMAT_R32G32B32_UINT  = DXGI_FORMAT_R32G32B32_UINT,
		RENDER_FORMAT_R32G32B32_SINT  = DXGI_FORMAT_R32G32B32_SINT,

		RENDER_FORMAT_R32G32_FLOAT = DXGI_FORMAT_R32G32_FLOAT,
		RENDER_FORMAT_R32G32_UINT  = DXGI_FORMAT_R32G32_UINT,
		RENDER_FORMAT_R32G32_SINT  = DXGI_FORMAT_R32G32_SINT,

		RENDER_FORMAT_D32_FLOAT = DXGI_FORMAT_D32_FLOAT,
		RENDER_FORMAT_R32_FLOAT = DXGI_FORMAT_R32_FLOAT,
		RENDER_FORMAT_R32_UINT  = DXGI_FORMAT_R32_UINT,
		RENDER_FORMAT_R32_SINT  = DXGI_FORMAT_R32_SINT,

		//16 bit per channel
		RENDER_FORMAT_R16G16B16A16_FLOAT = DXGI_FORMAT_R16G16B16A16_FLOAT,
		RENDER_FORMAT_R16G16B16A16_UINT  = DXGI_FORMAT_R16G16B16A16_UINT,
		RENDER_FORMAT_R16G16B16A16_SINT  = DXGI_FORMAT_R16G16B16A16_SINT,

		RENDER_FORMAT_R16G16_FLOAT = DXGI_FORMAT_R16G16_FLOAT,
		RENDER_FORMAT_R16G16_UINT  = DXGI_FORMAT_R16G16_UINT,
		RENDER_FORMAT_R16G16_SINT  = DXGI_FORMAT_R16G16_SINT,

		RENDER_FORMAT_R16_FLOAT = DXGI_FORMAT_R16_FLOAT,
		RENDER_FORMAT_R16_UINT  = DXGI_FORMAT_R16_UINT,
		RENDER_FORMAT_R16_SINT  = DXGI_FORMAT_R16_SINT,

		//8bit per channel
		RENDER_FORMAT_R8G8B8A8_UINT  = DXGI_FORMAT_R8G8B8A8_UINT,
		RENDER_FORMAT_R8G8B8A8_SINT  = DXGI_FORMAT_R8G8B8A8_SINT,

		RENDER_FORMAT_R8G8_UINT  = DXGI_FORMAT_R8G8_UINT,
		RENDER_FORMAT_R8G8_SINT  = DXGI_FORMAT_R8G8_SINT,

		//Others
		RENDER_FORMAT_R8G8B8A8_UNORM_SRGB = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB,
	};
}