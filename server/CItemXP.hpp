#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_timeLaunch"
// MNetworkVarNames "GameTime_t m_flAttackableTime"
class CItemXP : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad07b8[0x58]; // 0x7b8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnLaunchTimeChanged"
	GameTime_t m_timeLaunch; // 0x810	
	// MNetworkEnable
	GameTime_t m_flAttackableTime; // 0x814	
};

