#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'resourcecompiler')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class LayerType_t : uint32_t
{
	LAYER_TYPE_LEVELS = 0x0,
	LAYER_TYPE_VIBRANCE = 0x1,
	LAYER_TYPE_BRIGHTNESS_CONTRAST = 0x2,
	LAYER_TYPE_LUT = 0x3,
	LAYER_TYPE_COLOR_BALANCE = 0x4,
	LAYER_TYPE_COLOR_TINT = 0x5,
	LAYER_TYPE_HUE_SATURATION = 0x6,
	LAYER_TYPE_CURVES = 0x7,
	LAYER_TYPE_TONEMAPPING = 0x8,
	LAYER_TYPE_BLOOM = 0x9,
	LAYER_TYPE_VIGNETTE = 0xa,
	LAYER_TYPE_LOCAL_CONTRAST = 0xb,
	MAX_LAYER_TYPES = 0xc,
};

