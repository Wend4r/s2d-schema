#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1628
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_ArmorUpgrade_AblativeCoatVData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_RestoreEffectModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_OnTakeDamageEffectModifier; // 0x15e8	
	CEmbeddedSubclass< CCitadelModifier > m_OnBreakEffectModifier; // 0x15f8	
	CEmbeddedSubclass< CCitadelModifier > m_ResistBuffModifier; // 0x1608	
	// MPropertyStartGroup "Gameplay"
	float m_flOnTakeDamageEffectDuration; // 0x1618	
	float m_flOnBreakEffectDuration; // 0x161c	
	float m_flOnRestoreEffectDuration; // 0x1620	
};

