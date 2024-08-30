#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef8
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
private:
	[[maybe_unused]] uint8_t __pad0dc8[0x2]; // 0xdc8
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xdca	
private:
	[[maybe_unused]] uint8_t __pad0dcb[0x1]; // 0xdcb
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xdcc	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xdd0	
	// MNetworkEnable
	GameTime_t m_flBoostEndTime; // 0xdd4	
};

