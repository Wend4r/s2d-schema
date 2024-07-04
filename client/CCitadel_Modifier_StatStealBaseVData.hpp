#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_StatStealBaseVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_StatStolenDebuffModifier; // 0x5f0	
	CEmbeddedSubclass< CCitadelModifier > m_StatStolenBuffModifier; // 0x600	
};

