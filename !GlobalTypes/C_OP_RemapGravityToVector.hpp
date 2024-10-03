#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x8b0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapGravityToVector : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "position input"
	CPerParticleVecInput m_vInput1; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x838	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x83c	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x840	
};

