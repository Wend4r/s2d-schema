#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 4
// Alignment: 1
// Size: 0x1
enum class NmRootMotionBlendMode_t : uint8_t
{
	Blend = 0x0,
	Additive = 0x1,
	IgnoreSource = 0x2,
	IgnoreTarget = 0x3,
};

