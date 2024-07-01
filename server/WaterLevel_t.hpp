#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 1
// Size: 0x1
enum class WaterLevel_t : uint8_t
{
	WL_NotInWater = 0x0,
	WL_Feet = 0x1,
	WL_Waist = 0x2,
	WL_Chest = 0x3,
	WL_FullyUnderwater = 0x4,
	WL_Count = 0x5,
};

