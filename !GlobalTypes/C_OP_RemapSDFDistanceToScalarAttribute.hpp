#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa08
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapSDFDistanceToScalarAttribute : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "Output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "Input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nVectorFieldInput; // 0x1c4	
	// MPropertyFriendlyName "Minimum distance"
	CParticleCollectionFloatInput m_flMinDistance; // 0x1c8	
	// MPropertyFriendlyName "Maximum distance"
	CParticleCollectionFloatInput m_flMaxDistance; // 0x328	
	// MPropertyFriendlyName "Value for dist<min"
	CParticleCollectionFloatInput m_flValueBelowMin; // 0x488	
	// MPropertyFriendlyName "Value for dist=min"
	CParticleCollectionFloatInput m_flValueAtMin; // 0x5e8	
	// MPropertyFriendlyName "Value for dist=max"
	CParticleCollectionFloatInput m_flValueAtMax; // 0x748	
	// MPropertyFriendlyName "Value for dist>max"
	CParticleCollectionFloatInput m_flValueAboveMax; // 0x8a8	
};

