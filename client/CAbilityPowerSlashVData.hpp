#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1ab0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flAirDrag; // 0x1598	
	float m_flMaxPowerPadding; // 0x159c	
	float m_flEffectGroundTrace; // 0x15a0	
	float m_flWhizbyMaxRange; // 0x15a4	
	float m_flStartPosTestCapsuleLength; // 0x15a8	
	float m_flCoverLOSBackDist; // 0x15ac	
	// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
	Vector m_vecLongEffectOffset; // 0x15b0	
private:
	[[maybe_unused]] uint8_t __pad15bc[0x4]; // 0x15bc
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x1780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1860	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // 0x1940	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x1a20	
	CSoundEventName m_strHitConfirmSound; // 0x1a30	
	CSoundEventName m_strPowerUp1Sounds; // 0x1a40	
	CSoundEventName m_strPowerUp2Sounds; // 0x1a50	
	CSoundEventName m_strPowerUp3Sounds; // 0x1a60	
	CSoundEventName m_strWhizbySound; // 0x1a70	
	CSoundEventName m_strSlashSound; // 0x1a80	
	CSoundEventName m_strSlashFullSound; // 0x1a90	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1aa0	
};

