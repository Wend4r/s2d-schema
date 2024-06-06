#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "force scale"
	CPerParticleFloatInput m_flForceScale; // 0x1c8	
	// MPropertyFriendlyName "rope shake"
	bool m_bRopes; // 0x320	
	// MPropertyFriendlyName "limit rope impulses to Z"
	bool m_bRopesZOnly; // 0x321	
	// MPropertyFriendlyName "explosions"
	bool m_bExplosions; // 0x322	
	// MPropertyFriendlyName "particle systems"
	bool m_bParticles; // 0x323	
};

