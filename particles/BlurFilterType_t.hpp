#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class BlurFilterType_t : uint32_t
{
	// MPropertyFriendlyName "Gaussian"
	BLURFILTER_GAUSSIAN = 0x0,
	// MPropertyFriendlyName "Box"
	BLURFILTER_BOX = 0x1,
};

