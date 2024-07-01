#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 9
// Alignment: 4
// Size: 0x4
enum class Navigation_t : uint32_t
{
	AI_NAV_NONE = 0xffffffffffffffff,
	AI_NAV_GROUND = 0x0,
	AI_NAV_JUMP = 0x1,
	AI_NAV_FLY = 0x2,
	AI_NAV_CLIMB = 0x3,
	AI_NAV_LINK = 0x5,
	AI_NAV_NAVLINK = 0x5,
	AI_NAV_TRANSITION = 0x6,
	AI_NAV_ORIENTED = 0x7,
};

