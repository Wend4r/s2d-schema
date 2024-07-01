#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c19[0x3]; // 0xc19
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xc1c	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xc20	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xc38	
};

