#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16d8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Tier2Boss_RocketBarrageVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplosionSound; // 0x16a8	
	CSoundEventName m_RocketFireSound; // 0x16b8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AuraModifier; // 0x16c8	
};

