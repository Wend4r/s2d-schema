#pragma once

#include <cstdint>

struct CParticleTransformInput;
struct CParticleCollectionFloatInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_RingWave : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input transform"
	CParticleTransformInput m_TransformInput; // 0x1c8	
	// MPropertyFriendlyName "even distribution count"
	CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x230	
	// MPropertyFriendlyName "initial radius"
	CPerParticleFloatInput m_flInitialRadius; // 0x390	
	// MPropertyFriendlyName "thickness"
	CPerParticleFloatInput m_flThickness; // 0x4f0	
	// MPropertyFriendlyName "min initial speed"
	CPerParticleFloatInput m_flInitialSpeedMin; // 0x650	
	// MPropertyFriendlyName "max initial speed"
	CPerParticleFloatInput m_flInitialSpeedMax; // 0x7b0	
	// MPropertyFriendlyName "roll"
	CPerParticleFloatInput m_flRoll; // 0x910	
	// MPropertyFriendlyName "pitch"
	CPerParticleFloatInput m_flPitch; // 0xa70	
	// MPropertyFriendlyName "yaw"
	CPerParticleFloatInput m_flYaw; // 0xbd0	
	// MPropertyFriendlyName "even distribution"
	bool m_bEvenDistribution; // 0xd30	
	// MPropertyFriendlyName "XY velocity only"
	bool m_bXYVelocityOnly; // 0xd31	
};

