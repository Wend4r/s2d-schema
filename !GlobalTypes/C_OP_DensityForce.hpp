#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DensityForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "Radius scale for particle influence"
	float m_flRadiusScale; // 0x1d0	
	// MPropertyFriendlyName "Scale of force"
	float m_flForceScale; // 0x1d4	
	// MPropertyFriendlyName "Target density"
	float m_flTargetDensity; // 0x1d8	
};

