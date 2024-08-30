#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_FireBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x15d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProgressBarModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_FireBombModifier; // 0x15f0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1600	
};

