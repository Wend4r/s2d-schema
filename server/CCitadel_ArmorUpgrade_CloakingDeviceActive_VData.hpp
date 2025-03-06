#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1630
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_CloakingDeviceActive_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AmbushModifier; // 0x1610	
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1620	
};

