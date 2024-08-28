#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x610
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierItemPickupTimerVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_TimerToSilence; // 0x5f8	
	float m_SilenceDuration; // 0x5fc	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x600	
};

