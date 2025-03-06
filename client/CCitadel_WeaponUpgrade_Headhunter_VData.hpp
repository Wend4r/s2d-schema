#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1640
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_WeaponUpgrade_Headhunter_VData : public CCitadel_WeaponUpgrade_HeadshotBooster_VData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_HeadshotBuffModifier; // 0x1630	
};

