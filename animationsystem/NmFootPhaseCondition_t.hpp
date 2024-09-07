#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 6
// Alignment: 1
// Size: 0x1
enum class NmFootPhaseCondition_t : uint8_t
{
	LeftFootDown = 0x0,
	LeftFootPassing = 0x1,
	LeftPhase = 0x4,
	RightFootDown = 0x2,
	RightFootPassing = 0x3,
	RightPhase = 0x5,
};

