#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1880
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Wrecker_BoulderGrenadeVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonParticle; // 0x16a8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SummonReadyParticle; // 0x1788	
	CUtlString m_SummonParticleAttachment; // 0x1868	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_ExplodeSound; // 0x1870	
};

