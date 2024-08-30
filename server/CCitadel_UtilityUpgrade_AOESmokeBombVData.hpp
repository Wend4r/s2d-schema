#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1638
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_UtilityUpgrade_AOESmokeBombVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastCompleteParticle; // 0x1538	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strBuffGainedSound; // 0x1618	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1628	
};

