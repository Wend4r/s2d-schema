#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a68
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x1750	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x1830	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x1910	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x19f0	
	CSoundEventName m_SelfPortalSound; // 0x1a00	
	CSoundEventName m_WindupSound; // 0x1a10	
	CSoundEventName m_PunchSound; // 0x1a20	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // 0x1a30	
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1a40	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x1a50	
	float m_flSelfPortalTelegraphTime; // 0x1a54	
	float m_flWindupTime; // 0x1a58	
	float m_flAttackTime; // 0x1a5c	
	float m_flGroundTraceOnPlayerHitDistance; // 0x1a60	
	float m_flPlayerCheckSphereRadius; // 0x1a64	
};

