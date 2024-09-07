#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class PerformanceMode_t : uint32_t
{
	PM_NORMAL = 0x0,
	PM_NO_GIBS = 0x1,
	PM_FULL_GIBS = 0x2,
	PM_REDUCED_GIBS = 0x3,
};

