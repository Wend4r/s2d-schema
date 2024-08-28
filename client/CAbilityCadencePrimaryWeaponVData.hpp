#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1540
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityCadencePrimaryWeaponVData : public CCitadel_Ability_PrimaryWeaponVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x1530	
};

