#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_FullSpectrumVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // 0x688	
	CEmbeddedSubclass< CCitadelModifier > m_BonusDamageModifier; // 0x698	
};

