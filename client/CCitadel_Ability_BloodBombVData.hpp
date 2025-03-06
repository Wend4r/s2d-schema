#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_BloodBombVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SpilledBloodModifier; // 0x16a8	
	// MPropertyStartGroup "Misc"
	CUtlString m_strBloodSpillStatName; // 0x16b8	
};

