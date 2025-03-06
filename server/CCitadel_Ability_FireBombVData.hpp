#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FireBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProgressBarModifier; // 0x16b8	
	CEmbeddedSubclass< CCitadelModifier > m_FireBombModifier; // 0x16c8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16d8	
};

