#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CRandomNumberGeneratorParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateWithinBox : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMin; // 0x1c8	
	// MPropertyFriendlyName "max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecMax; // 0x840	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0xeb8	
	// MPropertyFriendlyName "use local space"
	bool m_bLocalSpace; // 0xebc	
private:
	[[maybe_unused]] uint8_t __pad0ebd[0x3]; // 0xebd
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xec0	
};

