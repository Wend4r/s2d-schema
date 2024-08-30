#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1730
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WarpStone_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1538	
	CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // 0x1548	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1558	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // 0x1568	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x1648	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x1728	
};

