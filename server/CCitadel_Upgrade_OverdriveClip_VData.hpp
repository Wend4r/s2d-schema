#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Upgrade_OverdriveClip_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_OverdriveClipModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_ReloadModifier; // 0x1538	
};

