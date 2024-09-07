#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ECitadelRandomRollTypes : uint32_t
{
	ECitadelRandomRoll_BulletCritChance = 0x0,
	ECitadelRandomRoll_BulletCritDebuffChance = 0x1,
	ECitadelRandomRoll_BreakableGoldPickup = 0x2,
	ECitadelRandomRoll_BreakablePowerupPickup = 0x3,
	ECitadelRandomRoll_LastEnum = 0x4,
};

