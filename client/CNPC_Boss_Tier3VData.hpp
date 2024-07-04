#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier3VData : public CAI_CitadelNPCVData
{
public:
	int32_t m_nPhase2Health; // 0xe18	
	float m_flEyeZOffset; // 0xe1c	
	float m_flDefaultMoveSpeed; // 0xe20	
	float m_flDyingMoveSpeed; // 0xe24	
	float m_flMovingToFinalPositionSpeed; // 0xe28	
private:
	[[maybe_unused]] uint8_t __pad0e2c[0x4]; // 0xe2c
public:
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
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_LaserBeamModifier; // 0x12e0	
	CEmbeddedSubclass< CBaseModifier > m_DyingModifier; // 0x12f0	
	CEmbeddedSubclass< CBaseModifier > m_VulnerableModifier; // 0x1300	
	CEmbeddedSubclass< CBaseModifier > m_Phase1Modifier; // 0x1310	
	CEmbeddedSubclass< CBaseModifier > m_Phase2Modifier; // 0x1320	
	CEmbeddedSubclass< CBaseModifier > m_BackdoorProtection; // 0x1330	
	CEmbeddedSubclass< CBaseModifier > m_ObjectiveRegen; // 0x1340	
	// MPropertyStartGroup "Laser"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserChargingParticle; // 0x1350	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserBeamEffect; // 0x1430	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserPreviewEffect; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserDamageEffect; // 0x15f0	
	float m_flLaserTrackingSpeed; // 0x16d0	
	float m_flLaserTrackingMaxSpeed; // 0x16d4	
	float m_flLaserCastingTrackSpeed; // 0x16d8	
	float m_flLaserCastingTrackMaxSpeed; // 0x16dc	
	float m_flLaserTargetingZOffset; // 0x16e0	
	float m_flLaserDPSToPlayers; // 0x16e4	
	float m_flLaserDPSToNPCs; // 0x16e8	
};

