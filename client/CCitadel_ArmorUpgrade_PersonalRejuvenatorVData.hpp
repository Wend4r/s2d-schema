#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_PersonalRejuvenatorVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeployParticle; // 0x1610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RespawnParticle; // 0x16f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sDeploySound; // 0x17d0	
	CSoundEventName m_sRespawnSound; // 0x17e0	
};

