#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class AbilityCastEvent_t : uint32_t
{
	CAST_DELAY_STARTED = 0x0,
	CAST_COMPLETED = 0x1,
	CAST_TOGGLED_ON = 0x2,
	CAST_CHANNEL_STARTED = 0x3,
};

