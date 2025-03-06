#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1818
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WarpStone_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x1610	
	CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // 0x1620	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x1630	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // 0x1640	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x1720	
	// MPropertyGroupName "Gameplay"
	float m_flGroundProbeSpeed; // 0x1800	
	float m_flGroundStepDown; // 0x1804	
	float m_flGroundStepUp; // 0x1808	
	int32_t m_iMaxGroundIterations; // 0x180c	
	float m_flVelocityScale; // 0x1810	
};

