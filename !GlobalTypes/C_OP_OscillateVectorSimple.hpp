#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateVectorSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	// MVectorIsSometimesCoordinate "m_nField"
	Vector m_Rate; // 0x1c0	
	// MPropertyFriendlyName "oscillation frequency"
	Vector m_Frequency; // 0x1cc	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nField; // 0x1d8	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1dc	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1e0	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1e4	
};

