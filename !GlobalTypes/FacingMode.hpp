#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class FacingMode : uint8_t
{
	// MPropertyFriendlyName "None"
	FacingMode_Invalid = 0x0,
	// MPropertyFriendlyName "Manual Direction"
	FacingMode_Manual = 0x1,
	// MPropertyFriendlyName "Path"
	FacingMode_Path = 0x2,
	// MPropertyFriendlyName "Look Target"
	FacingMode_LookTarget = 0x3,
	// MPropertyFriendlyName "Manual Position"
	FacingMode_ManualPosition = 0x4,
};

