#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Fathom_Breach_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // 0x16a8	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strInFlightAnimGraphParam; // 0x1788	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1790	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InFlightModifier; // 0x17a0	
};

