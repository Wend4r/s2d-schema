#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShivDaggerVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DamageDebuffModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_SlowDebuffModifier; // 0x15d8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerStuckParticle; // 0x15e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerImpactParticle; // 0x16c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerExplodeParticle; // 0x17a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDaggerHitSound; // 0x1888	
	CSoundEventName m_strDaggerExplodeSound; // 0x1898	
};

