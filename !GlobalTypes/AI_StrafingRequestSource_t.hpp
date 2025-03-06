#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 7
// Alignment: 4
// Size: 0x4
enum class AI_StrafingRequestSource_t : uint32_t
{
	eMotor = 0x0,
	eNPCLocomotion = 0x1,
	eLevelScript = 0x2,
	eSmartGoal = 0x3,
	eSchedule = 0x4,
	eDefault = 0x5,
	eCount = 0x6,
};

