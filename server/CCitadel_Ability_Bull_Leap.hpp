#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc30
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
	float m_flBoostYaw; // 0xaa8	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xaac	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xab8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xac4	
private:
	[[maybe_unused]] uint8_t __pad0ac5[0x3]; // 0xac5
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xad0	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0b00[0x120]; // 0xb00
public:
	Vector m_vecLastVel; // 0xc20	
};

