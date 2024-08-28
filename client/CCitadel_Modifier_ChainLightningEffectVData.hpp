#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ChainLightningEffectVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // 0x5f8	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_ChainSound; // 0x6d8	
	CSoundEventName m_VictimSound; // 0x6e8	
};

