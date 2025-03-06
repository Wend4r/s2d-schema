#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1630
// Has VTable
// 
// MGetKV3ClassDefaults
class CItem_FleetfootBoots_VData : public CitadelItemVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsModifier; // 0x1610	
	CEmbeddedSubclass< CCitadelModifier > m_FleetfootBootsBonusClipModifier; // 0x1620	
};

