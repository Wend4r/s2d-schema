#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x19d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_RocketBoosterVData : public CCitadel_UtilityUpgrade_RocketBootsVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LandingParticle; // 0x1700	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x17e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DropDownStartParticle; // 0x18c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DropDownStartSound; // 0x19a0	
	CSoundEventName m_LandingSound; // 0x19b0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x19c0	
	// MPropertyStartGroup "Gameplay"
	float m_flSlamEnabledTime; // 0x19d0	
};

