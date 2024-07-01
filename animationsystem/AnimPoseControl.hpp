#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animationsystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class AnimPoseControl : uint32_t
{
	// MPropertyFriendlyName "None"
	NoPoseControl = 0x0,
	// MPropertyFriendlyName "Absolute"
	AbsolutePoseControl = 0x1,
	// MPropertyFriendlyName "Relative"
	RelativePoseControl = 0x2,
};

