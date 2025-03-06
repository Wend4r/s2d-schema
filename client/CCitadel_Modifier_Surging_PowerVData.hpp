#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Surging_PowerVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BerserkerSound; // 0x658	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ModifierActiveDisplay; // 0x668	
};

