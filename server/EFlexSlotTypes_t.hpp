#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 2
// Size: 0x2
enum class EFlexSlotTypes_t : uint16_t
{
	// MPropertyFriendlyName "Invalid"
	EFlexSlot_Invalid = 0x0,
	// MPropertyFriendlyName "Kill 2 Tier 1"
	EFlexSlot_Kill2Tier1 = 0x1,
	// MPropertyFriendlyName "Kill 1 Tier 2"
	EFlexSlot_Kill1Tier2 = 0x2,
	// MPropertyFriendlyName "All Tier 2"
	EFlexSlot_AllTier2 = 0x4,
	// MPropertyFriendlyName "1 Generator 1 Set of Base Guardians"
	EFlexSlot_Generator = 0x8,
};

