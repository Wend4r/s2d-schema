#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1558
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_RescueBeamVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DispelAndHealModifier; // 0x1538	
	CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // 0x1548	
};

