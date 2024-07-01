#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Enumerator count: 9
// Alignment: 1
// Size: 0x1
enum class NmGraphValueType_t : uint8_t
{
	Unknown = 0x0,
	Bool = 0x1,
	ID = 0x2,
	Float = 0x3,
	Vector = 0x4,
	Target = 0x5,
	BoneMask = 0x6,
	Pose = 0x7,
	Special = 0x8,
};

