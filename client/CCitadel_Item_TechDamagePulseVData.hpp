#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17e8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechDamagePulseVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x1610	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x16f0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPulseTickSound; // 0x17d0	
	// MPropertyStartGroup "Gameplay"
	int32_t m_iMaxTargets; // 0x17e0	
};

