#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PulseDomainValueType_t : uint32_t
{
	// MPropertyFriendlyName "Invalid"
	INVALID = 0xffffffffffffffff,
	// MPropertyFriendlyName "Parent Map Entity"
	ENTITY_NAME = 0x0,
	// MPropertyFriendlyName "Parent XML Panel"
	PANEL_ID = 0x1,
	COUNT = 0x2,
};

