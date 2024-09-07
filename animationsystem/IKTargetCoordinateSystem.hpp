#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class IKTargetCoordinateSystem : uint32_t
{
	// MPropertyFriendlyName "World Space"
	IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
	// MPropertyFriendlyName "Model Space"
	IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
	IKTARGETCOORDINATESYSTEM_COUNT = 0x2,
};

