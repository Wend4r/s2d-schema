#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class RequestPause_t : uint32_t
{
	RP_PAUSE = 0x0,
	RP_UNPAUSE = 0x1,
	RP_TOGGLEPAUSE = 0x2,
};

