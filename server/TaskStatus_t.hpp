#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class TaskStatus_t : uint32_t
{
	TASKSTATUS_NEW = 0x0,
	TASKSTATUS_RUN_MOVE_AND_TASK = 0x1,
	TASKSTATUS_RUN_TASK = 0x2,
	TASKSTATUS_COMPLETE = 0x3,
};

