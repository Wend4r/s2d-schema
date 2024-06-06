#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CRandomNumberGeneratorParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe80
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x1c0	
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x818	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xe70	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xe74	
private:
	[[maybe_unused]] uint8_t __pad0e75[0x3]; // 0xe75
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xe78	
};

