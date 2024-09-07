#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class HitboxLerpType_t : uint32_t
{
	// MPropertyFriendlyName "Lerp from Start/End Time"
	HITBOX_LERP_LIFETIME = 0x0,
	// MPropertyFriendlyName "Constant"
	HITBOX_LERP_CONSTANT = 0x1,
};

