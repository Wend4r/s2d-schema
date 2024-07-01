#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Viscous_TelepunchVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TelepunchTravelModifier; // 0x14e0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PortalParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PunchParticle; // 0x15d0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallPunchParticle; // 0x16b0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CeilingPunchParticle; // 0x1790	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_EnemyPortalSound; // 0x1870	
	CSoundEventName m_SelfPortalSound; // 0x1880	
	CSoundEventName m_WindupSound; // 0x1890	
	CSoundEventName m_PunchSound; // 0x18a0	
	// MPropertyStartGroup "+Telepunch Parameters"
	float m_flEnemyPortalTelegraphTime; // 0x18b0	
	float m_flSelfPortalTelegraphTime; // 0x18b4	
	float m_flWindupTime; // 0x18b8	
	float m_flAttackTime; // 0x18bc	
};

