#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe08
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xc88	
private:
	[[maybe_unused]] uint8_t __pad0c89[0x3]; // 0xc89
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xc8c	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xc90	
	// MNetworkEnable
	GameTime_t m_flBoostEndTime; // 0xc94	
};

