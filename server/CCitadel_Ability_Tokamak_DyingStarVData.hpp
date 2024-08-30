#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tokamak_DyingStarVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FlameAuraParticle; // 0x15d0	
	// MPropertyLeafSuggestionProviderFn
	CGlobalSymbol m_strInFlightAnimGraphParam; // 0x16b0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x16b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InFlightModifier; // 0x16c8	
};

