#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x19b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x1780	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x1860	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x1940	
	CSoundEventName m_SelfPortalSound; // 0x1950	
	CSoundEventName m_WindupSound; // 0x1960	
	CSoundEventName m_PunchSound; // 0x1970	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // 0x1980	
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1990	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x19a0	
	float m_flSelfPortalTelegraphTime; // 0x19a4	
	float m_flWindupTime; // 0x19a8	
	float m_flAttackTime; // 0x19ac	
	float m_flGroundTraceOnPlayerHitDistance; // 0x19b0	
	float m_flPlayerCheckSphereRadius; // 0x19b4	
};

