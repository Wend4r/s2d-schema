#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleHitboxBiasType_t : uint32_t
{
	// MPropertyFriendlyName "Bias relative to Entity"
	PARTICLE_HITBOX_BIAS_ENTITY = 0x0,
	// MPropertyFriendlyName "Bias relative to Hitbox"
	PARTICLE_HITBOX_BIAS_HITBOX = 0x1,
};

