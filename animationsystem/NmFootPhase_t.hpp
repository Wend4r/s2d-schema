#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class NmFootPhase_t : uint8_t
{
	LeftFootDown = 0x0,
	RightFootPassing = 0x1,
	RightFootDown = 0x2,
	LeftFootPassing = 0x3,
};

