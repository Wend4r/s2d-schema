#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class OnFrame : uint8_t
{
	ONFRAME_UNKNOWN = 0x0,
	ONFRAME_TRUE = 0x1,
	ONFRAME_FALSE = 0x2,
};

