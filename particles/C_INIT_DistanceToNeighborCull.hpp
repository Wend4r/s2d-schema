#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x330
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_DistanceToNeighborCull : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "cull distance"
	CPerParticleFloatInput m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "include particle radius"
	bool m_bIncludeRadii; // 0x328	
};

