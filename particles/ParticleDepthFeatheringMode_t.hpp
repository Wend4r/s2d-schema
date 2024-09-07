#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleDepthFeatheringMode_t : uint32_t
{
	// MPropertyFriendlyName "Off"
	PARTICLE_DEPTH_FEATHERING_OFF = 0x0,
	// MPropertyFriendlyName "On (If Possible)"
	PARTICLE_DEPTH_FEATHERING_ON_OPTIONAL = 0x1,
	// MPropertyFriendlyName "On (Required)"
	PARTICLE_DEPTH_FEATHERING_ON_REQUIRED = 0x2,
};

