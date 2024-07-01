#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1548
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_CloakingDeviceActive_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AmbushModifier; // 0x1528	
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1538	
};

