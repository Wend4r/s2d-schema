#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class HintPriority_t : uint32_t
{
	HINT_PRIORITY_LOW = 0x0,
	HINT_PRIORITY_MEDIUM = 0x1,
	HINT_PRIORITY_HIGH = 0x2,
	HINT_PRIORITY_CRITICAL = 0x3,
};

