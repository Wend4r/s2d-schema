#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_VectorNoise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "output minimum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMin; // 0x1bc	
	// MPropertyFriendlyName "output maximum"
	// MVectorIsSometimesCoordinate "m_nFieldOutput"
	Vector m_vecOutputMax; // 0x1c8	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1d4	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x1d8	
	// MPropertyFriendlyName "offset instead of accelerate position"
	bool m_bOffset; // 0x1d9	
private:
	[[maybe_unused]] uint8_t __pad01da[0x2]; // 0x1da
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1dc	
};

