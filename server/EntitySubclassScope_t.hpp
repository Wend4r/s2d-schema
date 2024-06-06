#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	// MPropertyFriendlyName "Precipitation"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_PRECIPITATION = 0x0,
	// MPropertyFriendlyName "PlayerWeapon"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_PLAYER_WEAPONS = 0x1,
	SUBCLASS_SCOPE_COUNT = 0x2,
};

