#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class NmTransitionRule_t : uint8_t
{
	// MPropertyFriendlyName "Fully Allowed"
	AllowTransition = 0x0,
	// MPropertyFriendlyName "Conditionally Allowed"
	ConditionallyAllowTransition = 0x1,
	// MPropertyFriendlyName "Blocked"
	BlockTransition = 0x2,
};

