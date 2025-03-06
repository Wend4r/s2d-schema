#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadelModifierItemPickupTimerVData : public CCitadelModifierVData
{
public:
	// MPropertyGroupName "Timers"
	float m_TimerToSilence; // 0x658	
	float m_SilenceDuration; // 0x65c	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x660	
	// MPropertyStartGroup "Gameplay"
	bool m_bIsIdolPickup; // 0x670	
};

