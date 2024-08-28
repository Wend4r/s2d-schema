#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x338
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1c0	
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x1c4	
	// MPropertyFriendlyName "snapshot control point for count"
	int32_t m_nSnapshotControlPoint; // 0x1c8	
	// MPropertyFriendlyName "decay on lifespan"
	bool m_bLifespanDecay; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x1d0	
	// MPropertyFriendlyName "kill newest instead of oldest"
	bool m_bKillNewest; // 0x330	
};

