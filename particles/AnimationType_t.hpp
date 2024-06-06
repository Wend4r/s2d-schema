#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimationType_t : uint32_t
{
	// MPropertyFriendlyName "Fixed Rate"
	ANIMATION_TYPE_FIXED_RATE = 0x0,
	// MPropertyFriendlyName "Fit Lifetime"
	ANIMATION_TYPE_FIT_LIFETIME = 0x1,
	// MPropertyFriendlyName "Set Frames Manually"
	ANIMATION_TYPE_MANUAL_FRAMES = 0x2,
};

