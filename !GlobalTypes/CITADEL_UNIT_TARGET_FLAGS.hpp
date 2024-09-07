#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class CITADEL_UNIT_TARGET_FLAGS : uint32_t
{
	CITADEL_UNIT_TARGET_FLAG_NONE = 0x0,
	CITADEL_UNIT_TARGET_FLAG_PENETRATE_INVULNERABLE = 0x2,
	CITADEL_UNIT_TARGET_FLAG_NO_INVIS = 0x4,
	CITADEL_UNIT_TARGET_FLAG_NO_DORMANT_NEUTRALS = 0x8,
};

