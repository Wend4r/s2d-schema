#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Enumerator count: 3
// Alignment: 1
// Size: 0x1
enum class DynamicContinuousContactBehavior_t : uint8_t
{
	DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0x0,
	DYNAMIC_CONTINUOUS_ALWAYS = 0x1,
	DYNAMIC_CONTINUOUS_NEVER = 0x2,
};

