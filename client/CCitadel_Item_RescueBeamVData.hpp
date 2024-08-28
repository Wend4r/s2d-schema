#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1550
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_RescueBeamVData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DispelAndHealModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_PullModifier; // 0x1540	
};

