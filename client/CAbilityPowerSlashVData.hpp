#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a08
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flAirDrag; // 0x14e8	
	float m_flMaxPowerPadding; // 0x14ec	
	float m_flEffectGroundTrace; // 0x14f0	
	float m_flWhizbyMaxRange; // 0x14f4	
	float m_flStartPosTestCapsuleLength; // 0x14f8	
	// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
	Vector m_vecLongEffectOffset; // 0x14fc	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // 0x1508	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // 0x1888	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x1968	
	CSoundEventName m_strDamageImpactSound; // 0x1978	
	CSoundEventName m_strDamageImpactVictimSound; // 0x1988	
	CSoundEventName m_strPowerUp1Sounds; // 0x1998	
	CSoundEventName m_strPowerUp2Sounds; // 0x19a8	
	CSoundEventName m_strPowerUp3Sounds; // 0x19b8	
	CSoundEventName m_strWhizbySound; // 0x19c8	
	CSoundEventName m_strSlashSound; // 0x19d8	
	CSoundEventName m_strSlashFullSound; // 0x19e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x19f8	
};

