#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CPerParticleVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x980
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_PerParticleForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1c8	
	// MPropertyFriendlyName "force to apply"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vForce; // 0x320	
	// MPropertyFriendlyName "local space control point"
	int32_t m_nCP; // 0x978	
};

