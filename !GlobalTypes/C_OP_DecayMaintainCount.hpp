#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x328
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DecayMaintainCount : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "count to maintain"
	int32_t m_nParticlesToMaintain; // 0x1b8	
	// MPropertyFriendlyName "decay delay"
	float m_flDecayDelay; // 0x1bc	
	// MPropertyFriendlyName "snapshot control point for count"
	int32_t m_nSnapshotControlPoint; // 0x1c0	
	// MPropertyFriendlyName "decay on lifespan"
	bool m_bLifespanDecay; // 0x1c4	
private:
	[[maybe_unused]] uint8_t __pad01c5[0x3]; // 0x1c5
public:
	// MPropertyFriendlyName "total count scale"
	CParticleCollectionFloatInput m_flScale; // 0x1c8	
	// MPropertyFriendlyName "kill newest instead of oldest"
	bool m_bKillNewest; // 0x320	
};

