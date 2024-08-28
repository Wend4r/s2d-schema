#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Slork_InvisVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x14e8	
	CEmbeddedSubclass< CCitadelModifier > m_PreventHealingModifier; // 0x14f8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbushExplosionParticle; // 0x1508	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AmbushExplosionSound; // 0x15e8	
};

