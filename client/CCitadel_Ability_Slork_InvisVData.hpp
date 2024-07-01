#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Slork_InvisVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x14e0	
	CEmbeddedSubclass< CCitadelModifier > m_PreventHealingModifier; // 0x14f0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbushExplosionParticle; // 0x1500	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_AmbushExplosionSound; // 0x15e0	
};

