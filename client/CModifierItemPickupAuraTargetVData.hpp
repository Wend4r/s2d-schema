#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_PickupTimer; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // 0x600	
};

