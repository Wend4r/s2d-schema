#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 9
// Alignment: 1
// Size: 0x1
enum class NmEventConditionRules_t : uint8_t
{
	LimitSearchToSourceState = 0x0,
	IgnoreInactiveEvents = 0x1,
	PreferHighestWeight = 0x2,
	PreferHighestProgress = 0x3,
	OperatorOr = 0x4,
	OperatorAnd = 0x5,
	SearchOnlyStateEvents = 0x6,
	SearchOnlyAnimEvents = 0x7,
	SearchBothStateAndAnimEvents = 0x8,
};

