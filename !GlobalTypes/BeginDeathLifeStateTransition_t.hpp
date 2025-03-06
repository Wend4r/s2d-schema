#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 1
// Size: 0x1
enum class BeginDeathLifeStateTransition_t : uint8_t
{
	TRANSITION_TO_LIFESTATE_DYING = 0x0,
	TRANSITION_TO_LIFESTATE_DEAD = 0x1,
};

