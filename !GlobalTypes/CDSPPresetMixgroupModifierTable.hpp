#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
class CDSPPresetMixgroupModifierTable
{
public:
	// MPropertyDescription "Table of mixgroup modifiers for effect names."
	// MPropertyFriendlyName "Modifier Table"
	CUtlVector< CDspPresetModifierList > m_table; // 0x0	
};

