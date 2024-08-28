#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1580
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // 0x1540	
	CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // 0x1550	
	CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // 0x1560	
	// MPropertyStartGroup "Gameplay"
	float m_flOnTakeDamageEffectDuration; // 0x1570	
	float m_flOnBreakEffectDuration; // 0x1574	
	float m_flOnRestoreEffectDuration; // 0x1578	
};

