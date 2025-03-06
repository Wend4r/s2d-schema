#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData
{
public:
	ENeutralTrooperType m_eTrooperType; // 0x10d8	
	float m_flGoldReward; // 0x10dc	
	float m_flGoldRewardBonusPercentPerMinute; // 0x10e0	
	bool m_bGiveGoldOnHit; // 0x10e4	
	bool m_bOrbDropper; // 0x10e5	
	bool m_bCapSimultanousAttackers; // 0x10e6	
private:
	[[maybe_unused]] uint8_t __pad10e7[0x1]; // 0x10e7
public:
	float m_flShieldReactivateDelay; // 0x10e8	
	float m_flDyingDuration; // 0x10ec	
	// MPropertyStartGroup "Behavior"
	// MPropertyFriendlyName "Damaged by Bullets?"
	bool m_bDamagedByBullets; // 0x10f0	
	// MPropertyFriendlyName "Damaged by Melee?"
	bool m_bDamagedByMelee; // 0x10f1	
	// MPropertyFriendlyName "Damaged by Abilities?"
	bool m_bDamagedByAbilities; // 0x10f2	
	// MPropertyFriendlyName "Fixed Melee Damage?"
	bool m_bFixedMeleeDamage; // 0x10f3	
private:
	[[maybe_unused]] uint8_t __pad10f4[0x4]; // 0x10f4
public:
	// MPropertyStartGroup "Shield FX"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // 0x10f8	
	// MPropertyStartGroup "Retaliation Attack"
	// MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
	float m_flRetaliateDamage; // 0x11d8	
	float m_flRetaliateCooldown; // 0x11dc	
	// MPropertyDescription "Particle to play when dealing retaliate damage"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // 0x11e0	
	// MPropertyStartGroup "AOE Attack"
	bool m_bHasAOEAttack; // 0x12c0	
private:
	[[maybe_unused]] uint8_t __pad12c1[0x3]; // 0x12c1
public:
	float m_flAOERadius; // 0x12c4	
	float m_flAOEDamage; // 0x12c8	
	float m_flAOEAttackCooldown; // 0x12cc	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x12d0	
	CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // 0x13b0	
	CSoundEventName m_AOEInitiateSound; // 0x13c0	
	CSoundEventName m_AOESound; // 0x13d0	
	float m_AOEDebuffDuration; // 0x13e0	
private:
	[[maybe_unused]] uint8_t __pad13e4[0x4]; // 0x13e4
public:
	// MPropertyStartGroup "Body"
	CUtlVector< CUtlString > m_vecRandomBodyGroup; // 0x13e8	
	CUtlVector< CUtlString > m_vecRandomSkin; // 0x1400	
	// MPropertyStartGroup "Visuals"
	float m_flHullCapsuleRadius; // 0x1418	
	float m_flHullCapsuleHeight; // 0x141c	
	// MPropertyStartGroup "Idles"
	bool m_bFaceEnemyWhileIdle; // 0x1420	
private:
	[[maybe_unused]] uint8_t __pad1421[0x7]; // 0x1421
public:
	CSoundEventName m_IdleLoopSound; // 0x1428	
	// MPropertyStartGroup "Movement"
	MoveType_t m_MoveType; // 0x1438	
private:
	[[maybe_unused]] uint8_t __pad1439[0x3]; // 0x1439
public:
	// MPropertyStartGroup "NPC Vault Data"
	float m_flVaultMiniGameTime; // 0x143c	
	float m_flVaultMiniGameHitWindow; // 0x1440	
	float m_flVaultMiniGameWheelScrollTime; // 0x1444	
	int32_t m_iVaultSuccessLightBuffDropCount; // 0x1448	
	int32_t m_iVaultSuccessHeavyBuffDropCount; // 0x144c	
	float m_flVaultLightScrollTime; // 0x1450	
	float m_flVaultWheelScrollTime; // 0x1454	
	float m_flVaultSuccessLightsScroll; // 0x1458	
	float m_flVaultSuccessWheelScroll; // 0x145c	
	float m_flVaultSuccessDestroyTime; // 0x1460	
private:
	[[maybe_unused]] uint8_t __pad1464[0x4]; // 0x1464
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VaultSuccessParticle; // 0x1468	
	// MPropertyStartGroup "NPC Vault Sounds"
	CSoundEventName m_VaultIdleLoopSound; // 0x1548	
	CSoundEventName m_VaultStartActiveSound; // 0x1558	
	CSoundEventName m_VaultActiveLoopSound; // 0x1568	
	CSoundEventName m_VaultStartCriticalSound; // 0x1578	
	CSoundEventName m_VaultCriticalLoopSound; // 0x1588	
	CSoundEventName m_VaultHitSuccessSoundLight; // 0x1598	
	CSoundEventName m_VaultHitSuccessSoundHeavy; // 0x15a8	
	CSoundEventName m_VaultHitFailSound; // 0x15b8	
	CSoundEventName m_VaultHit01; // 0x15c8	
	CSoundEventName m_VaultHit02; // 0x15d8	
	CSoundEventName m_VaultHit03; // 0x15e8	
	CSoundEventName m_VaultHit04; // 0x15f8	
	CSoundEventName m_VaultHit05; // 0x1608	
	CSoundEventName m_VaultHit06; // 0x1618	
	CSoundEventName m_VaultHit07; // 0x1628	
	CSoundEventName m_VaultLight01; // 0x1638	
	CSoundEventName m_VaultLight02; // 0x1648	
	CSoundEventName m_VaultLight03; // 0x1658	
	CSoundEventName m_VaultLight04; // 0x1668	
	CSoundEventName m_VaultLight05; // 0x1678	
	CSoundEventName m_VaultLight06; // 0x1688	
	CSoundEventName m_VaultLight07; // 0x1698	
	CSoundEventName m_VaultLight08; // 0x16a8	
	CSoundEventName m_VaultLightHitWindow; // 0x16b8	
	CSoundEventName m_VaultWheelSuccessDing; // 0x16c8	
};

