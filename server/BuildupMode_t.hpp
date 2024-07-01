#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class BuildupMode_t : uint32_t
{
	BUILDUP_MODE_ONE_AND_DONE = 0x0,
	BUILDUP_MODE_RESTART_ON_FILL = 0x1,
	BUILDUP_MODE_EXTEND_FILL_DURATION = 0x2,
	BUILDUP_MODE_MAX_FILL_DURATION = 0x3,
	BUILDUP_MODE_ADD_STACK = 0x4,
};

