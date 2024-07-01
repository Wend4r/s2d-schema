#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetFloatCollection : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CParticleCollectionFloatInput m_InputValue; // 0x1b8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nOutputField; // 0x310	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x314	
	// MPropertyFriendlyName "interpolation"
	CParticleCollectionFloatInput m_Lerp; // 0x318	
};

