#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class ParticleControlPointAxis_t : uint32_t
{
	// MPropertyFriendlyName "X Axis"
	PARTICLE_CP_AXIS_X = 0x0,
	// MPropertyFriendlyName "Y Axis"
	PARTICLE_CP_AXIS_Y = 0x1,
	// MPropertyFriendlyName "Z Axis"
	PARTICLE_CP_AXIS_Z = 0x2,
	// MPropertyFriendlyName "Negative X Axis"
	PARTICLE_CP_AXIS_NEGATIVE_X = 0x3,
	// MPropertyFriendlyName "Negative Y Axis"
	PARTICLE_CP_AXIS_NEGATIVE_Y = 0x4,
	// MPropertyFriendlyName "Negative Z Axis"
	PARTICLE_CP_AXIS_NEGATIVE_Z = 0x5,
};

