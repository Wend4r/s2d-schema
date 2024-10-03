#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class BreakableContentsType_t : uint32_t
{
	BC_DEFAULT = 0x0,
	BC_EMPTY = 0x1,
	BC_PROP_GROUP_OVERRIDE = 0x2,
	BC_PARTICLE_SYSTEM_OVERRIDE = 0x3,
};

