#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FireBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1590	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x1670	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProgressBarModifier; // 0x1680	
	CEmbeddedSubclass< CCitadelModifier > m_FireBombModifier; // 0x1690	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x16a0	
};

