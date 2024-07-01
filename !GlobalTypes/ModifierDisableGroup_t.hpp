#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ModifierDisableGroup_t : uint32_t
{
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	MODIFIER_DISABLE_GROUP_MIN = 0x0,
	MODIFIER_DISABLE_GROUP_ACTIVE_WEAPON = 0x1,
	MODIFIER_DISABLE_GROUP_TIME_LOCKED = 0x2,
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	MODIFIER_DISABLE_GROUP_MAX_BIT = 0x1,
	// MPropertySuppressEnumerator
	// MEnumeratorIsNotAFlag
	MODIFIER_DISABLE_GROUP_MAX = 0x2,
};

