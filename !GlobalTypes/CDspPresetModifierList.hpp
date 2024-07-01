#pragma once

#include <cstdint>

// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
class CDspPresetModifierList
{
public:
	// MPropertyDescription "Name of the DSP effect / subgraph used."
	// MPropertyFriendlyName "DSP Effect Name"
	CUtlString m_dspName; // 0x0	
	// MPropertyDescription "Set of modifiers for individual mix groups"
	// MPropertyFriendlyName "Mixgroup Modifiers"
	CUtlVector< CDSPMixgroupModifier > m_modifiers; // 0x8	
};

