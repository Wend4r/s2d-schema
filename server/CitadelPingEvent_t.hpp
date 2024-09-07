#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class CitadelPingEvent_t : uint32_t
{
	CITADEL_PING_EVENT_LOCATION_PING = 0x0,
	CITADEL_PING_MINIMAP_LOCATION_PING = 0x1,
	CITADEL_PING_EVENT_BASE_UNDER_ATTACK = 0x2,
	CITADEL_PING_EVENT_ENTITY_PING = 0x3,
	CITADEL_PING_CRATE_SPAWN = 0x4,
	CITADEL_PING_OBJECTIVE_SPAWN = 0x5,
	CITADEL_PING_NEUTRAL_SPAWN = 0x6,
};

