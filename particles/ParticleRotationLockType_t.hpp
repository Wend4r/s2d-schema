#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleRotationLockType_t : uint32_t
{
	// MPropertyFriendlyName "Don't Set"
	PARTICLE_ROTATION_LOCK_NONE = 0x0,
	// MPropertyFriendlyName "Set Rotations"
	PARTICLE_ROTATION_LOCK_ROTATIONS = 0x1,
	// MPropertyFriendlyName "Set Normal"
	PARTICLE_ROTATION_LOCK_NORMAL = 0x2,
};

