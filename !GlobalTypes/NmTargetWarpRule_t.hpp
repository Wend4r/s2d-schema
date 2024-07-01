#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class NmTargetWarpRule_t : uint8_t
{
	WarpXY = 0x0,
	WarpZ = 0x1,
	WarpXYZ = 0x2,
	RotationOnly = 0x3,
};

