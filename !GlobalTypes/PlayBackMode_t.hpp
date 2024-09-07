#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem_voicecontainers')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class PlayBackMode_t : uint32_t
{
	// MPropertyFriendlyName "Random"
	Random = 0x0,
	// MPropertyFriendlyName "Random No Repeats"
	RandomNoRepeats = 0x1,
	// MPropertyFriendlyName "Random Avoid Last"
	RandomAvoidLast = 0x2,
	// MPropertyFriendlyName "Sequential"
	Sequential = 0x3,
	// MPropertyFriendlyName "Random With Weights"
	RandomWeights = 0x4,
};

