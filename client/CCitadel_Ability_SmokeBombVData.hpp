#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_SmokeBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_PhaseOutModifier; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeParticle; // 0x15f8	
};

