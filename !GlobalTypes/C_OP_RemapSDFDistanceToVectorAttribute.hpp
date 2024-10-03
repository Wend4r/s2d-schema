#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSDFDistanceToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "Input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4	
	// MPropertyFriendlyName "Minimum distance"
	CParticleCollectionFloatInput m_flMinDistance; // 0x1c8	
	// MPropertyFriendlyName "Maximum distance"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x328	
	// MPropertyFriendlyName "Value for dist<min"
	Vector m_vValueBelowMin; // 0x488	
	// MPropertyFriendlyName "Value for dist=min"
	Vector m_vValueAtMin; // 0x494	
	// MPropertyFriendlyName "Value for dist=max"
	Vector m_vValueAtMax; // 0x4a0	
	// MPropertyFriendlyName "Value for dist>max"
	Vector m_vValueAboveMax; // 0x4ac	
};

