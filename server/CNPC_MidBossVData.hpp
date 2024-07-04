#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1010
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_MidBossVData : public CAI_CitadelNPCVData
{
public:
	int32_t m_iStartingHealth; // 0xe18	
	int32_t m_iHealthGainPerMinute; // 0xe1c	
	float m_flAggroTime; // 0xe20	
private:
	[[maybe_unused]] uint8_t __pad0e24[0x4]; // 0xe24
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // 0xe28	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // 0xf08	
	float m_flDyingDuration; // 0xfe8	
private:
	[[maybe_unused]] uint8_t __pad0fec[0x4]; // 0xfec
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_KnockbackAura; // 0xff0	
	CEmbeddedSubclass< CCitadelModifier > m_AggroEnemy; // 0x1000	
};

