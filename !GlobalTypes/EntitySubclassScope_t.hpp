#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class EntitySubclassScope_t : uint32_t
{
	SUBCLASS_SCOPE_NONE = 0xffffffffffffffff,
	// MPropertyFriendlyName "Misc"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_MISC = 0x0,
	// MPropertyFriendlyName "Precipitation"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_PRECIPITATION = 0x1,
	// MPropertyFriendlyName "Modifiers"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_MODIFIERS = 0x2,
	// MPropertyFriendlyName "NPCUnit"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_NPC_UNITS = 0x3,
	// MPropertyFriendlyName "Abilities"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_ABILITIES = 0x4,
	// MPropertyFriendlyName "ScaleFunctions"
	// MEntitySubclassScopeFile
	SUBCLASS_SCOPE_SCALE_FUNCTIONS = 0x5,
	SUBCLASS_SCOPE_COUNT = 0x6,
};

