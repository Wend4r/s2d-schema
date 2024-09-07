#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class AIMotorTransitionState_t : uint32_t
{
	eNone = 0x0,
	eFacingNotStarted = 0x1,
	eFacingStarted = 0x2,
	eFacingSuccessful = 0x3,
	eExecuting = 0x4,
};

