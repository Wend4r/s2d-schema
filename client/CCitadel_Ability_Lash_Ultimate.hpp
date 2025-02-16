#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf98
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
private:
	[[maybe_unused]] uint8_t __pad0e30[0x2]; // 0xe30
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xe32	
private:
	[[maybe_unused]] uint8_t __pad0e33[0x1]; // 0xe33
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xe34	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xe38	
	// MNetworkEnable
	GameTime_t m_flBoostEndTime; // 0xe3c	
};

