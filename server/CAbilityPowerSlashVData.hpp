#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1ae8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flAirDrag; // 0x15d0	
	float m_flMaxPowerPadding; // 0x15d4	
	float m_flEffectGroundTrace; // 0x15d8	
	float m_flWhizbyMaxRange; // 0x15dc	
	float m_flStartPosTestCapsuleLength; // 0x15e0	
	float m_flCoverLOSBackDist; // 0x15e4	
	// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
	Vector m_vecLongEffectOffset; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15f4[0x4]; // 0x15f4
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x17b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1898	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // 0x1978	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x1a58	
	CSoundEventName m_strHitConfirmSound; // 0x1a68	
	CSoundEventName m_strPowerUp1Sounds; // 0x1a78	
	CSoundEventName m_strPowerUp2Sounds; // 0x1a88	
	CSoundEventName m_strPowerUp3Sounds; // 0x1a98	
	CSoundEventName m_strWhizbySound; // 0x1aa8	
	CSoundEventName m_strSlashSound; // 0x1ab8	
	CSoundEventName m_strSlashFullSound; // 0x1ac8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1ad8	
};

