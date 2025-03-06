#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier2VData : public CAI_CitadelNPCVData
{
public:
	float m_flPlayerInitialSightRange; // 0x10d8	
private:
	[[maybe_unused]] uint8_t __pad10dc[0x4]; // 0x10dc
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x10e0	
	// MPropertyStartGroup "Weak Points"
	CUtlVector< WeakPointParams_t > m_vecWeakPoints; // 0x11c0	
	// MPropertyStartGroup "Electric Beam (Laser)"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamChargingEffect; // 0x11d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamPreviewEffect; // 0x12b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamActiveEffect; // 0x1398	
	// MPropertyStartGroup "Stomp"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactEffect; // 0x1478	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompWarningEffect; // 0x1558	
	float m_flTossSpeed; // 0x1638	
	float m_flStompDamage; // 0x163c	
	float m_flStompDamageMaxHealthPercent; // 0x1640	
	float m_flStompTossUpMagnitude; // 0x1644	
	float m_flStunDuration; // 0x1648	
	float m_flStompImpactRadius; // 0x164c	
	float m_flStompImpactHeight; // 0x1650	
	float m_flSweepRadius; // 0x1654	
	float m_flSweepSpeed; // 0x1658	
	float m_flSweepZScale; // 0x165c	
	float m_flSweepMaxAngle; // 0x1660	
	float m_flSweepMaxRange; // 0x1664	
	float m_flSweepAdjustSpeed; // 0x1668	
	// MPropertyStartGroup "Gun"
	float m_flBurstDuration; // 0x166c	
	float m_flBurstCooldown; // 0x1670	
private:
	[[maybe_unused]] uint8_t __pad1674[0x4]; // 0x1674
public:
	// MPropertyStartGroup "Modifiers"
	// MPropertyDescription "Backdoor Protection Modifier"
	CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // 0x1678	
	float m_flBackDoorProtectionRange; // 0x1688	
private:
	[[maybe_unused]] uint8_t __pad168c[0x4]; // 0x168c
public:
	CEmbeddedSubclass< CCitadelModifier > m_InvulModifier; // 0x1690	
	float m_flInvulModifierRange; // 0x16a0	
private:
	[[maybe_unused]] uint8_t __pad16a4[0x4]; // 0x16a4
public:
	CEmbeddedSubclass< CCitadelModifier > m_RangedArmorModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_FriendlyAuraModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_NearbyEnemyResist; // 0x16c8	
};

