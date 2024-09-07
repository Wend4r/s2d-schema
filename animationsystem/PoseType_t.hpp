#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class PoseType_t : uint8_t
{
	POSETYPE_STATIC = 0x0,
	POSETYPE_DYNAMIC = 0x1,
	POSETYPE_INVALID = 0xff,
};

