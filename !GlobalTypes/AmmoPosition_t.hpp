#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class AmmoPosition_t : uint32_t
{
	AMMO_POSITION_INVALID = 0xffffffffffffffff,
	AMMO_POSITION_PRIMARY = 0x0,
	AMMO_POSITION_SECONDARY = 0x1,
	AMMO_POSITION_COUNT = 0x2,
};

