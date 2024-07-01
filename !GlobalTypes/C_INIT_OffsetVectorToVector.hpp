#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CRandomNumberGeneratorParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_OffsetVectorToVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldInput; // 0x1c0	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4	
	// MPropertyFriendlyName "output offset minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1c8	
	// MPropertyFriendlyName "output offset maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1d4	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e0	
};

