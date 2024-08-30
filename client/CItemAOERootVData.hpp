#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1638
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemAOERootVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // 0x1538	
	// MPropertyGroupName "Sounds"
	CSoundEventName m_strRootTargetSound; // 0x1618	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_TetherModifier; // 0x1628	
};

