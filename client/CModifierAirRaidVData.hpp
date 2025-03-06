#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x6a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierAirRaidVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // 0x688	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strWeaponShootSound; // 0x698	
};

