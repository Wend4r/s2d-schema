#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a08
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier3VData : public CAI_CitadelNPCVData
{
public:
	int32_t m_nPhase2Health; // 0x10d8	
	float m_flEyeZOffset; // 0x10dc	
	float m_flDefaultMoveSpeed; // 0x10e0	
	float m_flNoShieldMoveSpeed; // 0x10e4	
	float m_flDyingMoveSpeed; // 0x10e8	
	float m_flMovingToFinalPositionSpeed; // 0x10ec	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathSmallExplosionParticle; // 0x10f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathLargeExplosionParticle; // 0x11d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeakpointBrokenExplosionParticle; // 0x12b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpExplosionParticle; // 0x1390	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x1470	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DyingSmallExplosion; // 0x1550	
	CSoundEventName m_AvatarKilledSound; // 0x1560	
	CSoundEventName m_AvatarBecomePatronSound; // 0x1570	
	CSoundEventName m_PatronLandedSound; // 0x1580	
	CSoundEventName m_PatronKilledSound; // 0x1590	
	CSoundEventName m_LaserSound; // 0x15a0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_LaserBeamModifier; // 0x15b0	
	CEmbeddedSubclass< CBaseModifier > m_DyingModifier; // 0x15c0	
	CEmbeddedSubclass< CBaseModifier > m_VulnerableModifier; // 0x15d0	
	CEmbeddedSubclass< CBaseModifier > m_Phase1Modifier; // 0x15e0	
	CEmbeddedSubclass< CBaseModifier > m_Phase2Modifier; // 0x15f0	
	CEmbeddedSubclass< CBaseModifier > m_BackdoorProtection; // 0x1600	
	CEmbeddedSubclass< CBaseModifier > m_RangedArmorModifier; // 0x1610	
	CEmbeddedSubclass< CBaseModifier > m_ObjectiveRegen; // 0x1620	
	CEmbeddedSubclass< CBaseModifier > m_ObjectiveHealthGrowthPhase1; // 0x1630	
	CEmbeddedSubclass< CBaseModifier > m_ObjectiveHealthGrowthPhase2; // 0x1640	
	// MPropertyStartGroup "Laser"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserChargingParticle; // 0x1650	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserBeamEffect; // 0x1730	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserPreviewEffect; // 0x1810	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserDamageEffect; // 0x18f0	
	float m_flLaserTargetingZOffset; // 0x19d0	
	float m_flLaserTrackingSpeed; // 0x19d4	
	float m_flLaserTrackingMaxSpeed; // 0x19d8	
	float m_flLaserCastingTrackSpeed; // 0x19dc	
	float m_flLaserCastingTrackMaxSpeed; // 0x19e0	
	float m_flLaserDPSToPlayers; // 0x19e4	
	float m_flLaserDPSToNPCs; // 0x19e8	
	float m_flLaserDPSMaxHealth; // 0x19ec	
	float m_flNoShieldLaserTrackingSpeed; // 0x19f0	
	float m_flNoShieldLaserTrackingMaxSpeed; // 0x19f4	
	float m_flNoShieldLaserCastingTrackSpeed; // 0x19f8	
	float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x19fc	
	float m_flNoShieldLaserDPSToPlayers; // 0x1a00	
	float m_flNoShieldLaserDPSToNPCs; // 0x1a04	
};

