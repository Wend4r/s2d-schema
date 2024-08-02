#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1718
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier3VData : public CAI_CitadelNPCVData
{
public:
	int32_t m_nPhase2Health; // 0xe18	
	float m_flEyeZOffset; // 0xe1c	
	float m_flDefaultMoveSpeed; // 0xe20	
	float m_flNoShieldMoveSpeed; // 0xe24	
	float m_flDyingMoveSpeed; // 0xe28	
	float m_flMovingToFinalPositionSpeed; // 0xe2c	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathSmallExplosionParticle; // 0xe30	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathLargeExplosionParticle; // 0xf10	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeakpointBrokenExplosionParticle; // 0xff0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpExplosionParticle; // 0x10d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x11b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DyingSmallExplosion; // 0x1290	
	CSoundEventName m_AvatarKilledSound; // 0x12a0	
	CSoundEventName m_AvatarBecomePatronSound; // 0x12b0	
	CSoundEventName m_PatronLandedSound; // 0x12c0	
	CSoundEventName m_PatronKilledSound; // 0x12d0	
	CSoundEventName m_LaserSound; // 0x12e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_LaserBeamModifier; // 0x12f0	
	CEmbeddedSubclass< CBaseModifier > m_DyingModifier; // 0x1300	
	CEmbeddedSubclass< CBaseModifier > m_VulnerableModifier; // 0x1310	
	CEmbeddedSubclass< CBaseModifier > m_Phase1Modifier; // 0x1320	
	CEmbeddedSubclass< CBaseModifier > m_Phase2Modifier; // 0x1330	
	CEmbeddedSubclass< CBaseModifier > m_BackdoorProtection; // 0x1340	
	CEmbeddedSubclass< CBaseModifier > m_ObjectiveRegen; // 0x1350	
	// MPropertyStartGroup "Laser"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserChargingParticle; // 0x1360	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserBeamEffect; // 0x1440	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserPreviewEffect; // 0x1520	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserDamageEffect; // 0x1600	
	float m_flLaserTargetingZOffset; // 0x16e0	
	float m_flLaserTrackingSpeed; // 0x16e4	
	float m_flLaserTrackingMaxSpeed; // 0x16e8	
	float m_flLaserCastingTrackSpeed; // 0x16ec	
	float m_flLaserCastingTrackMaxSpeed; // 0x16f0	
	float m_flLaserDPSToPlayers; // 0x16f4	
	float m_flLaserDPSToNPCs; // 0x16f8	
	float m_flNoShieldLaserTrackingSpeed; // 0x16fc	
	float m_flNoShieldLaserTrackingMaxSpeed; // 0x1700	
	float m_flNoShieldLaserCastingTrackSpeed; // 0x1704	
	float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x1708	
	float m_flNoShieldLaserDPSToPlayers; // 0x170c	
	float m_flNoShieldLaserDPSToNPCs; // 0x1710	
};

