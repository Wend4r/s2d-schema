#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData
{
public:
	TrooperType_t m_TrooperType; // 0xe18	
	float m_flTrooperDamageResistPct; // 0xe1c	
	float m_flT1BossDamageResistPct; // 0xe20	
	float m_flT2BossDamageResistPct; // 0xe24	
	float m_flBarrackGuardianDamageResistPct; // 0xe28	
	float m_flNearDeathDuration; // 0xe2c	
	float m_flFlySpeed; // 0xe30	
	float m_flFlyHeight; // 0xe34	
	float m_flMeleeDamage; // 0xe38	
	float m_flMeleeDuration; // 0xe3c	
	float m_flMeleeChargeRange; // 0xe40	
	float m_flAttackT1BossMaxRange; // 0xe44	
	float m_flAttackTrooperMaxRange; // 0xe48	
	float m_flShieldDamageResistPct; // 0xe4c	
	float m_flHealthBarOffsetDucking; // 0xe50	
	// MPropertyStartGroup "Trooper DPS"
	// MPropertyDescription "Trooper vs Trooper DPS"
	float m_flTrooperDPS; // 0xe54	
	// MPropertyDescription "Trooper vs Player DPS"
	float m_flPlayerDPS; // 0xe58	
	// MPropertyDescription "Trooper vs T1 Guardian DPS"
	float m_flT1BossDPS; // 0xe5c	
	// MPropertyDescription "Trooper vs T2 Guardian DPS"
	float m_flT2BossDPS; // 0xe60	
	// MPropertyDescription "Trooper vs T3 Guardian DPS"
	float m_flT3BossDPS; // 0xe64	
	// MPropertyDescription "Trooper vs Barrack Guardian DPS"
	float m_flBarrackBossDPS; // 0xe68	
	// MPropertyDescription "Trooper vs Generator DPS"
	float m_flGeneratorBossDPS; // 0xe6c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // 0xe70	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // 0xf50	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // 0x1030	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // 0x1110	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // 0x11f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // 0x12d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // 0x13b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sPlayerLastHitSound; // 0x1490	
	CSoundEventName m_sCelebrationSound; // 0x14a0	
	CSoundEventName m_sZiplineContainerBreakSound; // 0x14b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x14c0	
	CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // 0x14d0	
};

