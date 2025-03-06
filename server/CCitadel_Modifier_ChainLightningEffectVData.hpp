#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x758
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChainLightningEffectVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x658	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_ChainSound; // 0x738	
	CSoundEventName m_VictimSound; // 0x748	
};

