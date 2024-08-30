#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x17d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShivDaggerVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DamageDebuffModifier; // 0x14f0	
	CEmbeddedSubclass< CCitadelModifier > m_SlowDebuffModifier; // 0x1500	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerStuckParticle; // 0x1510	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerImpactParticle; // 0x15f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerExplodeParticle; // 0x16d0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDaggerHitSound; // 0x17b0	
	CSoundEventName m_strDaggerExplodeSound; // 0x17c0	
};

