#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ObserverInterpState_t : uint32_t
{
	OBSERVER_INTERP_NONE = 0x0,
	OBSERVER_INTERP_TRAVELING = 0x1,
	OBSERVER_INTERP_SETTLING = 0x2,
};

