#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleReplicationMode_t : uint32_t
{
	// MPropertyFriendlyName "Off"
	PARTICLE_REPLICATIONMODE_NONE = 0x0,
	// MPropertyFriendlyName "Replicate for each parent particle"
	PARTICLE_REPLICATIONMODE_REPLICATE_FOR_EACH_PARENT_PARTICLE = 0x1,
};

