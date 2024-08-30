#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1900
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_RocketBoosterVData : public CCitadel_UtilityUpgrade_RocketBootsVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LandingParticle; // 0x1628	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // 0x1708	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DropDownStartParticle; // 0x17e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_DropDownStartSound; // 0x18c8	
	CSoundEventName m_LandingSound; // 0x18d8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x18e8	
	// MPropertyStartGroup "Gameplay"
	float m_flSlamEnabledTime; // 0x18f8	
};

