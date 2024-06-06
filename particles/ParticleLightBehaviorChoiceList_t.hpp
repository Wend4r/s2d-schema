#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ParticleLightBehaviorChoiceList_t : uint32_t
{
	// MPropertyFriendlyName "Follow Direction"
	PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION = 0x0,
	// MPropertyFriendlyName "Rope"
	PARTICLE_LIGHT_BEHAVIOR_ROPE = 0x1,
	// MPropertyFriendlyName "Trails"
	PARTICLE_LIGHT_BEHAVIOR_TRAILS = 0x2,
};

