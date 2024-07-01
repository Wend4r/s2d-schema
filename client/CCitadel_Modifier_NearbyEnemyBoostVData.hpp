#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearbyEnemyBoostVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_BerserkerSound; // 0x5e0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x5f0	
};

