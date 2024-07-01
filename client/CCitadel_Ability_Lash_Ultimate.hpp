#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef8
// Has VTable
// 
// MNetworkVarNames "ELashGrappleState m_EGrappleState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility
{
private:
	[[maybe_unused]] uint8_t __pad0da0[0x2]; // 0xda0
public:
	// MNetworkEnable
	ELashGrappleState m_EGrappleState; // 0xda2	
private:
	[[maybe_unused]] uint8_t __pad0da3[0x1]; // 0xda3
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xda4	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xda8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xdc0	
};

