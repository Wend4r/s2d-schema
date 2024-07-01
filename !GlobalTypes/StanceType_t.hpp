#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class StanceType_t : uint32_t
{
	// MPropertySuppressEnumerator
	STANCE_CURRENT = 0xffffffffffffffff,
	// MPropertyFriendlyName "Default"
	STANCE_DEFAULT = 0x0,
	// MPropertyFriendlyName "Crouching"
	STANCE_CROUCHING = 0x1,
	// MPropertyFriendlyName "Prone"
	STANCE_PRONE = 0x2,
	// MPropertySuppressEnumerator
	NUM_STANCES = 0x3,
};

