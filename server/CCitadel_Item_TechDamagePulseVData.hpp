#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_TechDamagePulseVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // 0x1528	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // 0x1608	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strPulseTickSound; // 0x16e8	
};

