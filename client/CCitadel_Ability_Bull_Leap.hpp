#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe20
// Has VTable
// 
// MNetworkVarNames "float m_flBoostYaw"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
// MNetworkVarNames "ELeapState_t m_eLeapState"
// MNetworkVarNames "GameTime_t m_flStateEnterTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
class CCitadel_Ability_Bull_Leap : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	float m_flBoostYaw; // 0xc60	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xc64	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xc70	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xc7c	
private:
	[[maybe_unused]] uint8_t __pad0c7d[0x3]; // 0xc7d
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xc80	
private:
	[[maybe_unused]] uint8_t __pad0c84[0x4]; // 0xc84
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xc88	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x158]; // 0xcb8
public:
	Vector m_vecLastVel; // 0xe10	
};

