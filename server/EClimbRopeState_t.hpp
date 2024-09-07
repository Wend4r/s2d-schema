#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class EClimbRopeState_t : uint32_t
{
	ERopeClimb_None = 0x0,
	ERopeClimb_Latching = 0x1,
	ERopeClimb_Attached = 0x2,
	ERopeClimb_Count = 0x3,
};

