#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4a0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSDFDistanceToVectorAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "Input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1bc	
	// MPropertyFriendlyName "Minimum distance"
	CParticleCollectionFloatInput m_flMinDistance; // 0x1c0	
	// MPropertyFriendlyName "Maximum distance"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x318	
	// MPropertyFriendlyName "Value for dist<min"
	Vector m_vValueBelowMin; // 0x470	
	// MPropertyFriendlyName "Value for dist=min"
	Vector m_vValueAtMin; // 0x47c	
	// MPropertyFriendlyName "Value for dist=max"
	Vector m_vValueAtMax; // 0x488	
	// MPropertyFriendlyName "Value for dist>max"
	Vector m_vValueAboveMax; // 0x494	
};

