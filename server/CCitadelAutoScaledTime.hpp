#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flTime"
class CCitadelAutoScaledTime
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	GameTime_t m_flTime; // 0x8	
};

