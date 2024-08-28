#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_OscillateScalarSimple : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "oscillation rate"
	float m_Rate; // 0x1c0	
	// MPropertyFriendlyName "oscillation frequency"
	float m_Frequency; // 0x1c4	
	// MPropertyFriendlyName "oscillation field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nField; // 0x1c8	
	// MPropertyFriendlyName "oscillation multiplier"
	float m_flOscMult; // 0x1cc	
	// MPropertyFriendlyName "oscillation start phase"
	float m_flOscAdd; // 0x1d0	
};

