#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1588
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // 0x1538	
	CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // 0x1548	
	CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // 0x1558	
	CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // 0x1568	
	// MPropertyStartGroup "Gameplay"
	float m_flOnTakeDamageEffectDuration; // 0x1578	
	float m_flOnBreakEffectDuration; // 0x157c	
	float m_flOnRestoreEffectDuration; // 0x1580	
};

