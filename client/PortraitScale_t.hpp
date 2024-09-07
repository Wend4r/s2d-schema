#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class PortraitScale_t : uint32_t
{
	PORTRAIT_SCALE_INVALID = 0xffffffffffffffff,
	PORTRAIT_SCALE_LOADOUT = 0x0,
	PORTRAIT_SCALE_ALTERNATE_LOADOUT = 0x1,
	PORTRAIT_SCALE_WORLD = 0x2,
	PORTRAIT_SCALE_SPECTATOR_LOADOUT = 0x3,
	PORTRAIT_SCALE_VERSUS_LOADOUT = 0x4,
};

