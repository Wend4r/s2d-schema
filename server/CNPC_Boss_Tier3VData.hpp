#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_Boss_Tier3VData : public CAI_CitadelNPCVData
{
public:
	int32_t m_nPhase2Health; // 0xe00	
	float m_flEyeZOffset; // 0xe04	
	float m_flDefaultMoveSpeed; // 0xe08	
	float m_flDyingMoveSpeed; // 0xe0c	
	float m_flMovingToFinalPositionSpeed; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e14[0x4]; // 0xe14
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathSmallExplosionParticle; // 0xe18	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathLargeExplosionParticle; // 0xef8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeakpointBrokenExplosionParticle; // 0xfd8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeUpExplosionParticle; // 0x10b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_strWIPModelName; // 0x1198	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DyingSmallExplosion; // 0x1278	
	CSoundEventName m_AvatarKilledSound; // 0x1288	
	CSoundEventName m_AvatarBecomePatronSound; // 0x1298	
	CSoundEventName m_PatronLandedSound; // 0x12a8	
	CSoundEventName m_PatronKilledSound; // 0x12b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_LaserBeamModifier; // 0x12c8	
	CEmbeddedSubclass< CBaseModifier > m_DyingModifier; // 0x12d8	
	CEmbeddedSubclass< CBaseModifier > m_VulnerableModifier; // 0x12e8	
	CEmbeddedSubclass< CBaseModifier > m_Phase1Modifier; // 0x12f8	
	CEmbeddedSubclass< CBaseModifier > m_Phase2Modifier; // 0x1308	
	CEmbeddedSubclass< CBaseModifier > m_BackdoorProtection; // 0x1318	
	CEmbeddedSubclass< CBaseModifier > m_ObjectiveRegen; // 0x1328	
	// MPropertyStartGroup "Laser"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserChargingParticle; // 0x1338	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserBeamEffect; // 0x1418	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserPreviewEffect; // 0x14f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserDamageEffect; // 0x15d8	
	float m_flLaserTrackingSpeed; // 0x16b8	
	float m_flLaserTrackingMaxSpeed; // 0x16bc	
	float m_flLaserCastingTrackSpeed; // 0x16c0	
	float m_flLaserCastingTrackMaxSpeed; // 0x16c4	
	float m_flLaserTargetingZOffset; // 0x16c8	
	float m_flLaserDPSToPlayers; // 0x16cc	
	float m_flLaserDPSToNPCs; // 0x16d0	
};

