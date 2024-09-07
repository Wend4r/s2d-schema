#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class eRollType : uint32_t
{
	ROLL_NONE = 0xffffffffffffffff,
	ROLL_STATS = 0x0,
	ROLL_CREDITS = 0x1,
	ROLL_LATE_JOIN_LOGO = 0x2,
	ROLL_OUTTRO = 0x3,
};

