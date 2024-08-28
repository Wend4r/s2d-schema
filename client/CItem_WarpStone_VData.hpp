#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1728
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WarpStone_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // 0x1540	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1550	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // 0x1560	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x1640	
	// MPropertyGroupName "Gameplay"
	float m_flTeleportDistance; // 0x1720	
};

