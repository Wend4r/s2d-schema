#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_TechCleaveVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleavePlayerParticle; // 0x5e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CleaveTrooperParticle; // 0x6c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sVictimSound; // 0x7a0	
};

