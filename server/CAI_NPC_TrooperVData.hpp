#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x14c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData
{
public:
	TrooperType_t m_TrooperType; // 0xe00	
	float m_flTrooperDamageResistPct; // 0xe04	
	float m_flT1BossDamageResistPct; // 0xe08	
	float m_flT2BossDamageResistPct; // 0xe0c	
	float m_flBarrackGuardianDamageResistPct; // 0xe10	
	float m_flNearDeathDuration; // 0xe14	
	float m_flFlySpeed; // 0xe18	
	float m_flFlyHeight; // 0xe1c	
	float m_flMeleeDamage; // 0xe20	
	float m_flMeleeDuration; // 0xe24	
	float m_flMeleeChargeRange; // 0xe28	
	float m_flAttackT1BossMaxRange; // 0xe2c	
	float m_flAttackTrooperMaxRange; // 0xe30	
	float m_flShieldDamageResistPct; // 0xe34	
	float m_flHealthBarOffsetDucking; // 0xe38	
	// MPropertyStartGroup "Trooper DPS"
	// MPropertyDescription "Trooper vs Trooper DPS"
	float m_flTrooperDPS; // 0xe3c	
	// MPropertyDescription "Trooper vs Player DPS"
	float m_flPlayerDPS; // 0xe40	
	// MPropertyDescription "Trooper vs T1 Guardian DPS"
	float m_flT1BossDPS; // 0xe44	
	// MPropertyDescription "Trooper vs T2 Guardian DPS"
	float m_flT2BossDPS; // 0xe48	
	// MPropertyDescription "Trooper vs T3 Guardian DPS"
	float m_flT3BossDPS; // 0xe4c	
	// MPropertyDescription "Trooper vs Barrack Guardian DPS"
	float m_flBarrackBossDPS; // 0xe50	
	// MPropertyDescription "Trooper vs Generator DPS"
	float m_flGeneratorBossDPS; // 0xe54	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // 0xe58	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // 0xf38	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // 0x1018	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // 0x10f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // 0x11d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // 0x12b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // 0x1398	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sPlayerLastHitSound; // 0x1478	
	CSoundEventName m_sCelebrationSound; // 0x1488	
	CSoundEventName m_sZiplineContainerBreakSound; // 0x1498	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x14a8	
	CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // 0x14b8	
};

