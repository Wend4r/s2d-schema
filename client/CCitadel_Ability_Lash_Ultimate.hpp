#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf48
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "GameTime_t m_flNextStateTime"
// MNetworkVarNames "GameTime_t m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
private:
	[[maybe_unused]] uint8_t __pad0de0[0x2]; // 0xde0
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xde2	
private:
	[[maybe_unused]] uint8_t __pad0de3[0x1]; // 0xde3
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xde4	
	// MNetworkEnable
	GameTime_t m_flNextStateTime; // 0xde8	
	// MNetworkEnable
	GameTime_t m_flBoostEndTime; // 0xdec	
};

