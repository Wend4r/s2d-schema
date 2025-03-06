#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1700
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_AerialAssualtVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_WatcherModifier; // 0x1610	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // 0x1620	
};

