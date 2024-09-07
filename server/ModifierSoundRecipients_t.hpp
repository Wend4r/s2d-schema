#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ModifierSoundRecipients_t : uint32_t
{
	// MPropertyFriendlyName "Always"
	MODIFIER_SOUND_RECIPIENT_ALWAYS = 0x0,
	// MPropertyFriendlyName "Modifer Owner Is Local Player"
	MODIFIER_SOUND_RECIPIENT_PARENT_IS_LOCAL_PLAYER = 0x1,
	// MPropertyFriendlyName "Modifier Owner on same team as Local Player"
	MODIFIER_SOUND_RECIPIENT_PARENT_ON_SAME_TEAM_AS_LOCAL_PLAYER = 0x2,
	// MPropertyFriendlyName "Modifier Owner on opposite team as Local Player"
	MODIFIER_SOUND_RECIPIENT_PARENT_ON_OPPOSITE_TEAM_AS_LOCAL_PLAYER = 0x3,
};

