#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x978
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetVec : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "value"
	CPerParticleVecInput m_InputValue; // 0x1b8	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nOutputField; // 0x810	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x814	
	// MPropertyFriendlyName "interpolation"
	CPerParticleFloatInput m_Lerp; // 0x818	
	// MPropertyFriendlyName "normalize result"
	bool m_bNormalizedOutput; // 0x970	
};

