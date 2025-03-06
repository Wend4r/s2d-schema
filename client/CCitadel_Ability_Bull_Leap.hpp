#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe10
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
	float m_flBoostYaw; // 0xc50	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xc54	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xc60	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xc70	
private:
	[[maybe_unused]] uint8_t __pad0c74[0x4]; // 0xc74
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xc78	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xc90	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x158]; // 0xca8
public:
	Vector m_vecLastVel; // 0xe00	
};

