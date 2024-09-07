#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "GameTime_t m_flLatchTime"
// MNetworkVarNames "float m_flLatchValue"
struct AbilityResource_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	float m_flCurrentValue; // 0x8	
	float m_flPrevRegenRate; // 0xc	
	float m_flMaxValue; // 0x10	
	// MNetworkEnable
	GameTime_t m_flLatchTime; // 0x14	
	// MNetworkEnable
	float m_flLatchValue; // 0x18	
};

