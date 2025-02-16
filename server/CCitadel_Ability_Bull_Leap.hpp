#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
// 
// MNetworkVarNames "float m_flBoostYaw"
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
	float m_flBoostYaw; // 0xb00	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xb04	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xb10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b1d[0x3]; // 0xb1d
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b24[0x4]; // 0xb24
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xb28	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b58[0x158]; // 0xb58
public:
	Vector m_vecLastVel; // 0xcb0	
};

