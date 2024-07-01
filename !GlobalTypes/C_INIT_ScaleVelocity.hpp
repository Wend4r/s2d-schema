#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_ScaleVelocity : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "velocity scale"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecScale; // 0x1c0	
};

