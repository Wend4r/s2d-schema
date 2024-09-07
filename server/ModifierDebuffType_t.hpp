#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ModifierDebuffType_t : uint32_t
{
	// MPropertyFriendlyName "If from enemy"
	// MPropertyDescription "Is considered a debuff if from an enemy"
	MODIFIER_DEBUFF_ENEMY_TEAM_ONLY = 0x0,
	// MPropertyFriendlyName "Debuff"
	MODIFIER_DEBUFF_YES = 0x1,
	// MPropertyFriendlyName "Not Debuff"
	MODIFIER_DEBUFF_NO = 0x2,
};

