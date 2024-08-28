#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a10
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData
{
public:
	float m_flAirDrag; // 0x14f0	
	float m_flMaxPowerPadding; // 0x14f4	
	float m_flEffectGroundTrace; // 0x14f8	
	float m_flWhizbyMaxRange; // 0x14fc	
	float m_flStartPosTestCapsuleLength; // 0x1500	
	// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
	Vector m_vecLongEffectOffset; // 0x1504	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // 0x16d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // 0x1890	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x1970	
	CSoundEventName m_strDamageImpactSound; // 0x1980	
	CSoundEventName m_strDamageImpactVictimSound; // 0x1990	
	CSoundEventName m_strPowerUp1Sounds; // 0x19a0	
	CSoundEventName m_strPowerUp2Sounds; // 0x19b0	
	CSoundEventName m_strPowerUp3Sounds; // 0x19c0	
	CSoundEventName m_strWhizbySound; // 0x19d0	
	CSoundEventName m_strSlashSound; // 0x19e0	
	CSoundEventName m_strSlashFullSound; // 0x19f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // 0x1a00	
};

