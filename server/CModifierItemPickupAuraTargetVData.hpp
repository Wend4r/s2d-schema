#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x670
// Has VTable
// 
// MGetKV3ClassDefaults
class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_PickupTimer; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x4]; // 0x65c
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // 0x660	
};

