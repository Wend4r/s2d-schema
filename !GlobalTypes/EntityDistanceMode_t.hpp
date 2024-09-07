#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EntityDistanceMode_t : uint32_t
{
	eOriginToOrigin = 0x0,
	eCenterToCenter = 0x1,
	eAxisToAxis = 0x2,
};

