#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleFloatRoundType_t : uint32_t
{
	PF_ROUND_TYPE_INVALID = 0xffffffffffffffff,
	PF_ROUND_TYPE_NEAREST = 0x0,
	PF_ROUND_TYPE_FLOOR = 0x1,
	PF_ROUND_TYPE_CEIL = 0x2,
	PF_ROUND_TYPE_COUNT = 0x3,
};

