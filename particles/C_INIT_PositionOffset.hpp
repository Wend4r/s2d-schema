#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CParticleTransformInput;
struct CRandomNumberGeneratorParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xf30
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_PositionOffset : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "offset min"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMin; // 0x1c8	
	// MPropertyFriendlyName "offset max"
	// MVectorIsCoordinate
	CPerParticleVecInput m_OffsetMax; // 0x840	
	// MPropertyFriendlyName "transform input"
	CParticleTransformInput m_TransformInput; // 0xeb8	
	// MPropertyFriendlyName "offset in local space 0/1"
	bool m_bLocalCoords; // 0xf20	
	// MPropertyFriendlyName "offset proportional to radius 0/1"
	bool m_bProportional; // 0xf21	
private:
	[[maybe_unused]] uint8_t __pad0f22[0x2]; // 0xf22
public:
	// MPropertyFriendlyName "Random number generator controls"
	CRandomNumberGeneratorParameters m_randomnessParameters; // 0xf24	
};

