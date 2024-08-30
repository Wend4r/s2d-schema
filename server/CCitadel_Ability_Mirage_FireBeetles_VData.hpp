#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Mirage_FireBeetles_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x15e0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x15f0	
};

