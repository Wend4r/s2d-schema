#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // 0x1610	
	CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // 0x1620	
	CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // 0x1630	
	CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // 0x1640	
	// MPropertyStartGroup "Gameplay"
	float m_flOnTakeDamageEffectDuration; // 0x1650	
	float m_flOnBreakEffectDuration; // 0x1654	
	float m_flOnRestoreEffectDuration; // 0x1658	
};

