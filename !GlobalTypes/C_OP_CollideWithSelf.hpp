#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x468
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_CollideWithSelf : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "particle radius scale"
	CPerParticleFloatInput m_flRadiusScale; // 0x1b8	
	// MPropertyFriendlyName "minimum speed for check"
	CPerParticleFloatInput m_flMinimumSpeed; // 0x310	
};

