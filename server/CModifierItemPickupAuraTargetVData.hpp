#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_PickupTimer; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e4[0x4]; // 0x5e4
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // 0x5e8	
};

