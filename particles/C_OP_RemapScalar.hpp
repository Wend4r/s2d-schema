#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c8	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1cc	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1d0	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d4	
	// MPropertyFriendlyName "use old code"
	bool m_bOldCode; // 0x1d8	
};

