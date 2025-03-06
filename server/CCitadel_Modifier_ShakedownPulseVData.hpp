#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ShakedownPulseVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strFireSound; // 0x658	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShakeParticle; // 0x668	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x748	
};

