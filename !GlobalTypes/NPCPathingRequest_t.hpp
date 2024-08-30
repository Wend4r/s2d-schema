#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class NPCPathingRequest_t : uint32_t
{
	StopIfNoPath = 0x0,
	TryRandomMovementIfNoPath = 0x1,
};

