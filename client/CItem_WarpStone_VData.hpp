#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_WarpStone_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_CasterDebuffModifier; // 0x15e8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strExplodeSound; // 0x15f8	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastDelayParticle; // 0x1608	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // 0x16e8	
	// MPropertyGroupName "Gameplay"
	float m_flGroundProbeSpeed; // 0x17c8	
	float m_flGroundStepDown; // 0x17cc	
	float m_flGroundStepUp; // 0x17d0	
	int32_t m_iMaxGroundIterations; // 0x17d4	
	float m_flVelocityScale; // 0x17d8	
};

