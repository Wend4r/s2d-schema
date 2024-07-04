#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1180
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData
{
public:
	ENeutralTrooperType m_eTrooperType; // 0xe18	
	float m_flGoldReward; // 0xe1c	
	float m_flGoldRewardBonusPercentPerMinute; // 0xe20	
	bool m_bGiveGoldOnHit; // 0xe24	
	bool m_bOrbDropper; // 0xe25	
	bool m_bCapSimultanousAttackers; // 0xe26	
private:
	[[maybe_unused]] uint8_t __pad0e27[0x1]; // 0xe27
public:
	float m_flShieldReactivateDelay; // 0xe28	
	float m_flDyingDuration; // 0xe2c	
	// MPropertyStartGroup "Behavior"
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0xe30	
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0xe31	
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0xe32	
	// MPropertyFriendlyName "Fixed Melee Damage?"
	bool m_bFixedMeleeDamage; // 0xe33	
private:
	[[maybe_unused]] uint8_t __pad0e34[0x4]; // 0xe34
public:
	// MPropertyStartGroup "Shield FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0xe38	
	// MPropertyStartGroup "Retaliation Attack"
	// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
	float m_flRetaliateDamage; // 0xf18	
	float m_flRetaliateCooldown; // 0xf1c	
	// MPropertyDescription "Particle to play when dealing retaliate damage"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // 0xf20	
	// MPropertyStartGroup "AOE Attack"
	bool m_bHasAOEAttack; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1001[0x3]; // 0x1001
public:
	float m_flAOERadius; // 0x1004	
	float m_flAOEDamage; // 0x1008	
	float m_flAOEAttackCooldown; // 0x100c	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x1010	
	CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // 0x10f0	
	CSoundEventName m_AOEInitiateSound; // 0x1100	
	CSoundEventName m_AOESound; // 0x1110	
	float m_AOEDebuffDuration; // 0x1120	
private:
	[[maybe_unused]] uint8_t __pad1124[0x4]; // 0x1124
public:
	// MPropertyStartGroup "Body"
	CUtlVector< CUtlString > m_vecRandomBodyGroup; // 0x1128	
	CUtlVector< CUtlString > m_vecRandomSkin; // 0x1140	
	// MPropertyStartGroup "Visuals"
	float m_flHullCapsuleRadius; // 0x1158	
	float m_flHullCapsuleHeight; // 0x115c	
	// MPropertyStartGroup "Idles"
	bool m_bFaceEnemyWhileIdle; // 0x1160	
private:
	[[maybe_unused]] uint8_t __pad1161[0x7]; // 0x1161
public:
	CSoundEventName m_IdleLoopSound; // 0x1168	
	// MPropertyStartGroup "Movement"
	MoveType_t m_MoveType; // 0x1178	
};

