#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x12d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_MidBossVData : public CAI_CitadelNPCVData
{
public:
	int32_t m_iStartingHealth; // 0x10d8	
	int32_t m_iHealthGainPerMinute; // 0x10dc	
	float m_flAggroTime; // 0x10e0	
private:
	[[maybe_unused]] uint8_t __pad10e4[0x4]; // 0x10e4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingSmallExplosion; // 0x10e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DyingFinalExplosion; // 0x11c8	
	float m_flDyingDuration; // 0x12a8	
private:
	[[maybe_unused]] uint8_t __pad12ac[0x4]; // 0x12ac
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_KnockbackAura; // 0x12b0	
	CEmbeddedSubclass< CCitadelModifier > m_AggroEnemy; // 0x12c0	
};

