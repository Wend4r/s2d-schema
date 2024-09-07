#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class TrooperType_t : uint32_t
{
	TROOPER_INVALID = 0x0,
	TROOPER_NORMAL = 0x1,
	TROOPER_MEDIC = 0x2,
	TROOPER_MELEE = 0x3,
	TROOPER_NANO_BASIC = 0x4,
	TROOPER_NANO_SUPER = 0x5,
	TROOPER_ZIPLINE_CONTAINER = 0x6,
};

