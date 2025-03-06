#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1710
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_BubbleVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1610	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_CastTargetSound; // 0x16f0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_BubbleModifier; // 0x1700	
};

