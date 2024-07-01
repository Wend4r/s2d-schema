#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x470
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SDFConstraint : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "min dist to sdf"
	CParticleCollectionFloatInput m_flMinDist; // 0x1b8	
	// MPropertyFriendlyName "max dist to sdf"
	CParticleCollectionFloatInput m_flMaxDist; // 0x310	
	// MPropertyFriendlyName "Max # of iterations"
	int32_t m_nMaxIterations; // 0x468	
};

