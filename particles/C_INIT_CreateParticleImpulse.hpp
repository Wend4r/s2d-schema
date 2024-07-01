#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_InputRadius; // 0x1c0	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_InputMagnitude; // 0x318	
	// MPropertyFriendlyName "force falloff function"
	ParticleFalloffFunction_t m_nFalloffFunction; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0474[0x4]; // 0x474
public:
	// MPropertyFriendlyName "exponential falloff exponent"
	CPerParticleFloatInput m_InputFalloffExp; // 0x478	
	// MPropertyFriendlyName "impulse type"
	ParticleImpulseType_t m_nImpulseType; // 0x5d0	
};

