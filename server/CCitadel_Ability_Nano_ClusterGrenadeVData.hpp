#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_ClusterGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x16b8	
};

