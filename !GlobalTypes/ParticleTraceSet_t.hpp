#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ParticleTraceSet_t : uint32_t
{
	// MPropertyFriendlyName "Everything"
	PARTICLE_TRACE_SET_ALL = 0x0,
	// MPropertyFriendlyName "Static World Only"
	PARTICLE_TRACE_SET_STATIC = 0x1,
	// MPropertyFriendlyName "Static World and Kinematic/Keyframed Only"
	PARTICLE_TRACE_SET_STATIC_AND_KEYFRAMED = 0x2,
	// MPropertyFriendlyName "Dynamic Entities Only"
	PARTICLE_TRACE_SET_DYNAMIC = 0x3,
};

