#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Surging_PowerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BerserkerSound; // 0x5e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierActiveDisplay; // 0x5f0	
};

