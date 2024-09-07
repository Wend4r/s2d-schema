#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ModifierRemoveTargets_t : uint32_t
{
	MODIFIER_REMOVE_ALL = 0x0,
	MODIFIER_REMOVE_ENEMY = 0x1,
	MODIFIER_REMOVE_ALLY = 0x2,
	MODIFIER_REMOVE_INTRINSIC = 0x3,
};

