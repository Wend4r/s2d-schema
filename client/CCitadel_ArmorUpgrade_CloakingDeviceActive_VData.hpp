#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1550
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_CloakingDeviceActive_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_AmbushModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_InvisModifier; // 0x1540	
};

