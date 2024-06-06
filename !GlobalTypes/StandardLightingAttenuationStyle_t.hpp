#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class StandardLightingAttenuationStyle_t : uint32_t
{
	// MPropertyFriendlyName "Quadratic/Linear Bias"
	LIGHT_STYLE_OLD = 0x0,
	// MPropertyFriendlyName "Fifty Percent/Zero Percent Distance"
	LIGHT_STYLE_NEW = 0x1,
};

