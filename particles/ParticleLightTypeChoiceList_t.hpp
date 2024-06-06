#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleLightTypeChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Omni Light"
	PARTICLE_LIGHT_TYPE_POINT = 0x0,
	// MPropertyFriendlyName "Spot Light"
	PARTICLE_LIGHT_TYPE_SPOT = 0x1,
	// MPropertyFriendlyName "FX Light"
	PARTICLE_LIGHT_TYPE_FX = 0x2,
	// MPropertyFriendlyName "Capsule Light"
	PARTICLE_LIGHT_TYPE_CAPSULE = 0x3,
};

