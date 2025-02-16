#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData
{
public:
	float m_flPlayerInitialSightRange; // 0x10e8	
private:
	[[maybe_unused]] uint8_t __pad10ec[0x4]; // 0x10ec
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x10f0	
	// MPropertyStartGroup "Weak Points"
	CUtlVector< WeakPointParams_t > m_vecWeakPoints; // 0x11d0	
	// MPropertyStartGroup "Electric Beam (Laser)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // 0x11e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // 0x12c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // 0x13a8	
	// MPropertyStartGroup "Stomp"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // 0x1488	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompWarningEffect; // 0x1568	
	float m_flTossSpeed; // 0x1648	
	float m_flStompDamage; // 0x164c	
	float m_flStompDamageMaxHealthPercent; // 0x1650	
	float m_flStompTossUpMagnitude; // 0x1654	
	float m_flStunDuration; // 0x1658	
	float m_flStompImpactRadius; // 0x165c	
	float m_flStompImpactHeight; // 0x1660	
	float m_flSweepRadius; // 0x1664	
	float m_flSweepSpeed; // 0x1668	
	float m_flSweepZScale; // 0x166c	
	float m_flSweepMaxAngle; // 0x1670	
	float m_flSweepMaxRange; // 0x1674	
	float m_flSweepAdjustSpeed; // 0x1678	
	// MPropertyStartGroup "Gun"
	float m_flBurstDuration; // 0x167c	
	float m_flBurstCooldown; // 0x1680	
private:
	[[maybe_unused]] uint8_t __pad1684[0x4]; // 0x1684
public:
	// MPropertyStartGroup "Modifiers"
	// MPropertyDescription "Backdoor Protection Modifier"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x1688	
	float m_flBackDoorProtectionRange; // 0x1698	
private:
	[[maybe_unused]] uint8_t __pad169c[0x4]; // 0x169c
public:
	CEmbeddedSubclass< CCitadelModifier > m_InvulModifier; // 0x16a0	
	float m_flInvulModifierRange; // 0x16b0	
private:
	[[maybe_unused]] uint8_t __pad16b4[0x4]; // 0x16b4
public:
	CEmbeddedSubclass< CCitadelModifier > m_RangedArmorModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0x16c8	
	CEmbeddedSubclass< CCitadelModifier > m_NearbyEnemyResist; // 0x16d8	
};

