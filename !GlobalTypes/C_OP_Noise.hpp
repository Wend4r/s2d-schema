#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_Noise : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1bc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1c0	
	// MPropertyFriendlyName "noise coordinate scale"
	float m_fl4NoiseScale; // 0x1c4	
	// MPropertyFriendlyName "additive"
	bool m_bAdditive; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01c9[0x3]; // 0x1c9
public:
	// MPropertyFriendlyName "Noise animation time scale"
	float m_flNoiseAnimationTimeScale; // 0x1cc	
};

