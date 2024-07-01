#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x728
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01bc[0x4]; // 0x1bc
public:
	// MPropertyFriendlyName "input minimum"
	CParticleCollectionFloatInput m_nInputMin; // 0x1c0	
	// MPropertyFriendlyName "input maximum"
	CParticleCollectionFloatInput m_nInputMax; // 0x318	
	// MPropertyFriendlyName "output minimum"
	CParticleCollectionFloatInput m_flOutputMin; // 0x470	
	// MPropertyFriendlyName "output maximum"
	CParticleCollectionFloatInput m_flOutputMax; // 0x5c8	
	// MPropertyFriendlyName
	bool m_bActiveRange; // 0x720	
private:
	[[maybe_unused]] uint8_t __pad0721[0x3]; // 0x721
public:
	// MPropertyFriendlyName "set value method"
	ParticleSetMethod_t m_nSetMethod; // 0x724	
};

