#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1848
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Wrecker_BoulderGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x1670	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // 0x1750	
	CUtlString m_SummonParticleAttachment; // 0x1830	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x1838	
};

