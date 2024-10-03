#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class NmTargetWarpAlgorithm_t : uint8_t
{
	Lerp = 0x0,
	Hermite = 0x1,
	HermiteFeaturePreserving = 0x2,
	Bezier = 0x3,
};

