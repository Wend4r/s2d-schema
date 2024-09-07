#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class VelocityMetricMode : uint8_t
{
	// MPropertyFriendlyName "Direction Only"
	DirectionOnly = 0x0,
	// MPropertyFriendlyName "Magnitude Only"
	MagnitudeOnly = 0x1,
	// MPropertyFriendlyName "Direction and Magnitude"
	DirectionAndMagnitude = 0x2,
};

