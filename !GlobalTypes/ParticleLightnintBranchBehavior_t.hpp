#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class ParticleLightnintBranchBehavior_t : uint32_t
{
	// MPropertyFriendlyName "Branch Towards Current Direction"
	PARTICLE_LIGHTNING_BRANCH_CURRENT_DIR = 0x0,
	// MPropertyFriendlyName "Branch Towards Endpoint"
	PARTICLE_LIGHTNING_BRANCH_ENDPOINT_DIR = 0x1,
};

