#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1168
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData
{
public:
	ENeutralTrooperType m_eTrooperType; // 0xe00	
	float m_flGoldReward; // 0xe04	
	float m_flGoldRewardBonusPercentPerMinute; // 0xe08	
	bool m_bGiveGoldOnHit; // 0xe0c	
	bool m_bOrbDropper; // 0xe0d	
	bool m_bCapSimultanousAttackers; // 0xe0e	
private:
	[[maybe_unused]] uint8_t __pad0e0f[0x1]; // 0xe0f
public:
	float m_flShieldReactivateDelay; // 0xe10	
	float m_flDyingDuration; // 0xe14	
	// MPropertyStartGroup "Behavior"
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0xe18	
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0xe19	
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0xe1a	
	// MPropertyFriendlyName "Fixed Melee Damage?"
	bool m_bFixedMeleeDamage; // 0xe1b	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0x4]; // 0xe1c
public:
	// MPropertyStartGroup "Shield FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0xe20	
	// MPropertyStartGroup "Retaliation Attack"
	// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
	float m_flRetaliateDamage; // 0xf00	
	float m_flRetaliateCooldown; // 0xf04	
	// MPropertyDescription "Particle to play when dealing retaliate damage"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // 0xf08	
	// MPropertyStartGroup "AOE Attack"
	bool m_bHasAOEAttack; // 0xfe8	
private:
	[[maybe_unused]] uint8_t __pad0fe9[0x3]; // 0xfe9
public:
	float m_flAOERadius; // 0xfec	
	float m_flAOEDamage; // 0xff0	
	float m_flAOEAttackCooldown; // 0xff4	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0xff8	
	CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // 0x10d8	
	CSoundEventName m_AOEInitiateSound; // 0x10e8	
	CSoundEventName m_AOESound; // 0x10f8	
	float m_AOEDebuffDuration; // 0x1108	
private:
	[[maybe_unused]] uint8_t __pad110c[0x4]; // 0x110c
public:
	// MPropertyStartGroup "Body"
	CUtlVector< CUtlString > m_vecRandomBodyGroup; // 0x1110	
	CUtlVector< CUtlString > m_vecRandomSkin; // 0x1128	
	// MPropertyStartGroup "Visuals"
	float m_flHullCapsuleRadius; // 0x1140	
	float m_flHullCapsuleHeight; // 0x1144	
	// MPropertyStartGroup "Idles"
	bool m_bFaceEnemyWhileIdle; // 0x1148	
private:
	[[maybe_unused]] uint8_t __pad1149[0x7]; // 0x1149
public:
	CSoundEventName m_IdleLoopSound; // 0x1150	
	// MPropertyStartGroup "Movement"
	MoveType_t m_MoveType; // 0x1160	
};

