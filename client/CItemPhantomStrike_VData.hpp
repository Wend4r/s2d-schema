#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1640
// Has VTable
// 
// MGetKV3ClassDefaults
class CItemPhantomStrike_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1538	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1548	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1558	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x1638	
};

