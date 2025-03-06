#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class AI_NavSetGoalFlags_t : uint32_t
{
	AISG_SET_ARRIVAL_FROM_PREVWP = 0x1,
	AISG_MAINTAIN_SMART_GOAL = 0x2,
	AISG_QUEUE_GOAL = 0x4,
	AISG_DEF_FLAGS = 0x0,
};

