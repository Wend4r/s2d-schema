#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1aa0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x1788	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x1868	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x1948	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x1a28	
	CSoundEventName m_SelfPortalSound; // 0x1a38	
	CSoundEventName m_WindupSound; // 0x1a48	
	CSoundEventName m_PunchSound; // 0x1a58	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PunchRollSlowModifier; // 0x1a68	
	CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // 0x1a78	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x1a88	
	float m_flSelfPortalTelegraphTime; // 0x1a8c	
	float m_flWindupTime; // 0x1a90	
	float m_flAttackTime; // 0x1a94	
	float m_flGroundTraceOnPlayerHitDistance; // 0x1a98	
	float m_flPlayerCheckSphereRadius; // 0x1a9c	
};

