#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18a0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Chrono_TimeWallVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallParticle; // 0x1500	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallChargeParticle; // 0x15e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitParticle; // 0x16c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TimeWallHitTimerParticle; // 0x17a0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWallCreated; // 0x1880	
	CSoundEventName m_strChargeUpSound; // 0x1890	
};

