#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xff8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_MidBossVData : public CAI_CitadelNPCVData
{
public:
	int32_t m_iStartingHealth; // 0xe00	
	int32_t m_iHealthGainPerMinute; // 0xe04	
	float m_flAggroTime; // 0xe08	
private:
	[[maybe_unused]] uint8_t __pad0e0c[0x4]; // 0xe0c
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // 0xe10	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // 0xef0	
	float m_flDyingDuration; // 0xfd0	
private:
	[[maybe_unused]] uint8_t __pad0fd4[0x4]; // 0xfd4
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_KnockbackAura; // 0xfd8	
	CEmbeddedSubclass< CCitadelModifier > m_AggroEnemy; // 0xfe8	
};

