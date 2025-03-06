#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1710
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemAOERootVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x1610	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strRootTargetSound; // 0x16f0	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // 0x1700	
};

