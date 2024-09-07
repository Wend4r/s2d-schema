#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class StepPhase : uint32_t
{
	// MPropertyFriendlyName "On Ground"
	StepPhase_OnGround = 0x0,
	// MPropertyFriendlyName "In the Air"
	StepPhase_InAir = 0x1,
};

