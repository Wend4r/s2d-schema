#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAI_NPC_TrooperVData : public CAI_CitadelNPCVData
{
public:
	TrooperType_t m_TrooperType; // 0x10d8	
	float m_flTrooperDamageResistPct; // 0x10dc	
	float m_flT1BossDamageResistPct; // 0x10e0	
	float m_flT2BossDamageResistPct; // 0x10e4	
	float m_flBarrackGuardianDamageResistPct; // 0x10e8	
	float m_flNearDeathDuration; // 0x10ec	
	float m_flFlySpeed; // 0x10f0	
	float m_flFlyHeight; // 0x10f4	
	float m_flMeleeDamage; // 0x10f8	
	float m_flMeleeDuration; // 0x10fc	
	float m_flMeleeChargeRange; // 0x1100	
	float m_flAttackT1BossMaxRange; // 0x1104	
	float m_flAttackTrooperMaxRange; // 0x1108	
	float m_flShieldDamageResistPct; // 0x110c	
	float m_flHealthBarOffsetDucking; // 0x1110	
	// MPropertyStartGroup "Trooper DPS"
	// MPropertyDescription "Trooper vs Trooper DPS"
	float m_flTrooperDPS; // 0x1114	
	// MPropertyDescription "Trooper vs Player DPS"
	float m_flPlayerDPS; // 0x1118	
	// MPropertyDescription "Trooper vs T1 Guardian Base DPS "
	float m_flT1BossDPS; // 0x111c	
	float m_flT1BossDPSBaseResist; // 0x1120	
	float m_flT1BossDPSMaxResist; // 0x1124	
	float m_flT1BossDPSMaxResistTimeInSeconds; // 0x1128	
	// MPropertyDescription "Trooper vs T2 Guardian Base DPS "
	float m_flT2BossDPS; // 0x112c	
	float m_flT2BossDPSBaseResist; // 0x1130	
	float m_flT2BossDPSMaxResist; // 0x1134	
	float m_flT2BossDPSMaxResistTimeInSeconds; // 0x1138	
	// MPropertyDescription "Trooper vs T3 Guardian DPS"
	float m_flT3BossDPS; // 0x113c	
	// MPropertyDescription "Trooper vs Barrack Guardian DPS"
	float m_flBarrackBossDPS; // 0x1140	
	// MPropertyDescription "Trooper vs Generator DPS"
	float m_flGeneratorBossDPS; // 0x1144	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BossAttackParticle; // 0x1148	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LastHitParticle; // 0x1228	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingLaserParticle; // 0x1308	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetingEyeFlashParticle; // 0x13e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromDamageParticle; // 0x14c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sZiplineContainerBreakFromLandingParticle; // 0x15a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MedicHealActiveParticle; // 0x1688	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sPlayerLastHitSound; // 0x1768	
	CSoundEventName m_sCelebrationSound; // 0x1778	
	CSoundEventName m_sZiplineContainerBreakSound; // 0x1788	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_NearDeathModifier; // 0x1798	
	CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // 0x17a8	
};

