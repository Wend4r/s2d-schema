#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 5
// Alignment: 4
// Size: 0x4
enum class ParticleCollisionMode_t : uint32_t
{
	// MPropertyFriendlyName "Per-Particle Trace"
	COLLISION_MODE_PER_PARTICLE_TRACE = 0x3,
	// MPropertyFriendlyName "Trace Caching"
	COLLISION_MODE_USE_NEAREST_TRACE = 0x2,
	// MPropertyFriendlyName "Per-Frame Planeset"
	COLLISION_MODE_PER_FRAME_PLANESET = 0x1,
	// MPropertyFriendlyName "Initial Trace Down"
	COLLISION_MODE_INITIAL_TRACE_DOWN = 0x0,
	// MPropertyFriendlyName "Collision Disabled"
	COLLISION_MODE_DISABLED = 0xffffffffffffffff,
};

