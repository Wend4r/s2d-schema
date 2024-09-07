#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
struct HealingReceivedSounds_t
{
public:
	// MPropertyDescription "While healing in the base"
	CSoundEventName m_strHealingInBaseLoop; // 0x0	
	// MPropertyDescription "When base healing has topped off the player"
	CSoundEventName m_strHealingInBaseToppedOff; // 0x10	
	// MPropertyDescription "A direct healing ability was applied to us"
	CSoundEventName m_strDirectHealing; // 0x20	
};

