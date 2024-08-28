#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CRandomNumberGeneratorParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RandomVector : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecMin; // 0x1c8	
	// MPropertyFriendlyName "max"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecMax; // 0x1d4	
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0	
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e4	
};

