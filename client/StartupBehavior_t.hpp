#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class StartupBehavior_t : uint32_t
{
	UNIT_STARTUP_BEHAVIOR_DEFAULT = 0x0,
	UNIT_STARTUP_BEHAVIOR_TAUNT = 0x1,
};

