#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tier2Boss_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x14f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x15d0	
	CSoundEventName m_RocketFireSound; // 0x15e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x15f0	
};

