#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1608
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FireBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProgressBarModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_FireBombModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15f8	
};

