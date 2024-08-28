#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechCleaveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleavePlayerParticle; // 0x5f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleaveTrooperParticle; // 0x6d8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sVictimSound; // 0x7b8	
};

