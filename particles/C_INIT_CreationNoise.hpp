#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_CreationNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "output field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0	
	// MPropertyFriendlyName "absolute value"
	bool m_bAbsVal; // 0x1c4	
	// MPropertyFriendlyName "invert absolute value"
	bool m_bAbsValInv; // 0x1c5	
private:
	[[maybe_unused]] uint8_t __pad01c6[0x2]; // 0x1c6
public:
	// MPropertyFriendlyName "time coordinate offset"
	float m_flOffset; // 0x1c8	
	// MPropertyFriendlyName "output minimum"
	float m_flOutputMin; // 0x1cc	
	// MPropertyFriendlyName "output maximum"
	float m_flOutputMax; // 0x1d0	
	// MPropertyFriendlyName "time noise coordinate scale"
	float m_flNoiseScale; // 0x1d4	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	float m_flNoiseScaleLoc; // 0x1d8	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	Vector m_vecOffsetLoc; // 0x1dc	
	// MPropertyFriendlyName "world time noise coordinate scale"
	float m_flWorldTimeScale; // 0x1e8	
};

