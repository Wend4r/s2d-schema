#pragma once

#include <cstdint>

struct CPerParticleVecInput;
struct CPerParticleFloatInput;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1958
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "absolute value"
	// MVectorIsCoordinate
	Vector m_vecAbsVal; // 0x1c0	
	// MPropertyFriendlyName "invert abs value"
	// MVectorIsCoordinate
	Vector m_vecAbsValInv; // 0x1cc	
	// MPropertyFriendlyName "spatial coordinate offset"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecOffsetLoc; // 0x1d8	
	// MPropertyFriendlyName "time coordinate offset"
	CPerParticleFloatInput m_flOffset; // 0x830	
	// MPropertyFriendlyName "output minimum"
	CPerParticleVecInput m_vecOutputMin; // 0x988	
	// MPropertyFriendlyName "output maximum"
	CPerParticleVecInput m_vecOutputMax; // 0xfe0	
	// MPropertyFriendlyName "time noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScale; // 0x1638	
	// MPropertyFriendlyName "spatial noise coordinate scale"
	CPerParticleFloatInput m_flNoiseScaleLoc; // 0x1790	
	// MPropertyFriendlyName "input local space velocity (optional)"
	// MParticleInputOptional
	CParticleTransformInput m_TransformInput; // 0x18e8	
	// MPropertyFriendlyName "ignore delta time"
	bool m_bIgnoreDt; // 0x1950	
};

