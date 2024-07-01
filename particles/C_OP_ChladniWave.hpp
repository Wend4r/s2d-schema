#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CPerParticleFloatInput;
struct CPerParticleVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x13e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ChladniWave : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "wave minimum"
	CPerParticleFloatInput m_flInputMin; // 0x1c0	
	// MPropertyFriendlyName "wave maximum"
	CPerParticleFloatInput m_flInputMax; // 0x318	
	// MPropertyFriendlyName "output minimum"
	CPerParticleFloatInput m_flOutputMin; // 0x470	
	// MPropertyFriendlyName "output maximum"
	CPerParticleFloatInput m_flOutputMax; // 0x5c8	
	// MPropertyFriendlyName "wave length"
	CPerParticleVecInput m_vecWaveLength; // 0x720	
	// MPropertyFriendlyName "harmonics"
	CPerParticleVecInput m_vecHarmonics; // 0xd78	
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x13d0	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nLocalSpaceControlPoint; // 0x13d4	
	// MPropertyFriendlyName "3D"
	bool m_b3D; // 0x13d8	
};

