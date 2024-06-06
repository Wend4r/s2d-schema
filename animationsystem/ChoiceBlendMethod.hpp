#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ChoiceBlendMethod : uint32_t
{
	// MPropertyFriendlyName "Single Blend Time"
	SingleBlendTime = 0x0,
	// MPropertyFriendlyName "Per-Choice Blend Times"
	PerChoiceBlendTimes = 0x1,
};

