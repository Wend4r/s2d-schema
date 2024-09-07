#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleParentSetMode_t : uint32_t
{
	// MPropertyFriendlyName "Set Self and Children"
	PARTICLE_SET_PARENT_NO = 0x0,
	// MPropertyFriendlyName "Set Immediate Parent, Self, and Children"
	PARTICLE_SET_PARENT_IMMEDIATE = 0x1,
	// MPropertyFriendlyName "Set Root of Particle System Downward"
	PARTICLE_SET_PARENT_ROOT = 0x1,
};

