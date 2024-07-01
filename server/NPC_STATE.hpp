#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 10
// Alignment: 4
// Size: 0x4
enum class NPC_STATE : uint32_t
{
	// MPropertySuppressEnumerator
	NPC_STATE_INVALID = 0xffffffffffffffff,
	// MPropertySuppressEnumerator
	NPC_STATE_INIT = 0x0,
	// MPropertyFriendlyName "Idle"
	NPC_STATE_IDLE = 0x1,
	// MPropertyFriendlyName "Alert"
	NPC_STATE_ALERT = 0x2,
	// MPropertyFriendlyName "Combat"
	NPC_STATE_COMBAT = 0x3,
	// MPropertySuppressEnumerator
	NPC_STATE_SCRIPT = 0x4,
	// MPropertyFriendlyName "Dead"
	NPC_STATE_DEAD = 0x5,
	// MPropertyFriendlyName "Inert"
	NPC_STATE_INERT = 0x6,
	// MPropertySuppressEnumerator
	NPC_STATE_SYNCHRONIZED_SECONDARY = 0x7,
	// MPropertySuppressEnumerator
	NUM_NPC_STATES = 0x8,
};

