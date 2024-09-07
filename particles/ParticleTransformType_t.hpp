#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particleslib')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleTransformType_t : uint32_t
{
	PT_TYPE_INVALID = 0x0,
	PT_TYPE_NAMED_VALUE = 0x1,
	PT_TYPE_CONTROL_POINT = 0x2,
	PT_TYPE_CONTROL_POINT_RANGE = 0x3,
	PT_TYPE_COUNT = 0x4,
};

