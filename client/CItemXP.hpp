#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLaunch"
class CItemXP : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0830[0x20]; // 0x830
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnLaunchTimeChanged"
	GameTime_t m_timeLaunch; // 0x850	
};

