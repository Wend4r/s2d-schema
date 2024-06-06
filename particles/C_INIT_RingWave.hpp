#pragma once

#include <cstdint>

struct CParticleTransformInput;
struct CParticleCollectionFloatInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1c0	
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x228	
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x380	
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x4d8	
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x630	
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x788	
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x8e0	
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0xa38	
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0xb90	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0xce8	
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0xce9	
};

