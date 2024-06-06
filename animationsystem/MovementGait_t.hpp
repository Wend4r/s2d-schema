#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'modellib')
// Enumerator count: 6
// Alignment: 1
// Size: 0x1
enum class MovementGait_t : uint8_t
{
	// MPropertyFriendlyName "None"
	eInvalid = 0xffffffffffffffff,
	// MPropertyFriendlyName "Slow"
	eSlow = 0x0,
	// MPropertyFriendlyName "Medium"
	eMedium = 0x1,
	// MPropertyFriendlyName "Fast"
	eFast = 0x2,
	// MPropertyFriendlyName "VeryFast"
	eVeryFast = 0x3,
	// MPropertySuppressEnumerator
	eCount = 0x4,
};

