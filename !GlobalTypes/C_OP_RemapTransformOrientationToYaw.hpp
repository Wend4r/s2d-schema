#pragma once

#include <cstdint>

struct CParticleTransformInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0x1b8	
	// MPropertyFriendlyName "rotation field"
	// MPropertyAttributeChoiceName "particlefield_rotation"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x220	
	// MPropertyFriendlyName "rotation offset"
	float m_flRotOffset; // 0x224	
	// MPropertyFriendlyName "spin strength"
	float m_flSpinStrength; // 0x228	
};

