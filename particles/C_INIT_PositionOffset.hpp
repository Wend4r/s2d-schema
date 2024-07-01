#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CParticleTransformInput;
struct CRandomNumberGeneratorParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xee8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x1c0	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x818	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0xe70	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0xed8	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0xed9	
private:
	[[maybe_unused]] uint8_t __pad0eda[0x2]; // 0xeda
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xedc	
};

