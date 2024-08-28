#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Mirage_FireBeetles_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14e8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x15e8	
};

