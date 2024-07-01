#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbf0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
// MNetworkVarNames "ELeapState_t m_eLeapState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Bull_Leap : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xaa8	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xab4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ac1[0x3]; // 0xac1
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xac4	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xac8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xae0	
private:
	[[maybe_unused]] uint8_t __pad0af8[0xe8]; // 0xaf8
public:
	Vector m_vecLastVel; // 0xbe0	
};

