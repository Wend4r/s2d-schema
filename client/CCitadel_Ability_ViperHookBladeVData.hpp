#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1898
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ViperHookBladeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowDebuffModifier; // 0x15c8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerStuckParticle; // 0x15d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerImpactParticle; // 0x16b8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DaggerExplodeParticle; // 0x1798	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strDaggerHitSound; // 0x1878	
	CSoundEventName m_strDaggerExplodeSound; // 0x1888	
};

