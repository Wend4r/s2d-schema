#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class EntityPlatformTypes_t : uint8_t
{
	ENTITY_NOT_PLATFORM = 0x0,
	ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 0x1,
	ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 0x2,
};

