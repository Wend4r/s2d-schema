#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animgraphlib')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class DampingSpeedFunction : uint32_t
{
	NoDamping = 0x0,
	Constant = 0x1,
	Spring = 0x2,
	AsymmetricSpring = 0x3,
};

