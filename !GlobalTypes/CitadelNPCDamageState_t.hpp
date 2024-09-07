#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 8
// Alignment: 4
// Size: 0x4
enum class CitadelNPCDamageState_t : uint32_t
{
	INVALID = 0xffffffffffffffff,
	NONE = 0x0,
	LIGHT = 0x1,
	MEDIUM = 0x2,
	HEAVY = 0x3,
	NEAR_DEATH = 0x4,
	DEAD = 0x5,
	COUNT = 0x6,
};

