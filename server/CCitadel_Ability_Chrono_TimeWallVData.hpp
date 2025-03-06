#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1978
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_TimeWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallParticle; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallChargeParticle; // 0x16b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // 0x1798	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // 0x1878	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallCreated; // 0x1958	
	CSoundEventName m_strChargeUpSound; // 0x1968	
};

