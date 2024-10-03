#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 5
// Alignment: 1
// Size: 0x1
enum class NmStateEventTypeCondition_t : uint8_t
{
	Entry = 0x0,
	FullyInState = 0x1,
	Exit = 0x2,
	Timed = 0x3,
	Any = 0x4,
};

