#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class NmTransitionRuleCondition_t : uint8_t
{
	// MPropertyFriendlyName "Any Allowed"
	AnyAllowed = 0x0,
	// MPropertyFriendlyName "Fully Allowed"
	FullyAllowed = 0x1,
	// MPropertyFriendlyName "Conditionally Allowed"
	ConditionallyAllowed = 0x2,
	// MPropertyFriendlyName "Blocked"
	Blocked = 0x3,
};

