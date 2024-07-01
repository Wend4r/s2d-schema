#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapScalarEndCap : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1b8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc	
	// MPropertyFriendlyName "input minimum"
	float m_flInputMin; // 0x1c0	
	// MPropertyFriendlyName "input maximum"
	float m_flInputMax; // 0x1c4	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1c8	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1cc	
};

