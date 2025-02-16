#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe60
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
	float m_flBoostYaw; // 0xca0	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xca4	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xcb0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xcbc	
private:
	[[maybe_unused]] uint8_t __pad0cbd[0x3]; // 0xcbd
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc4[0x4]; // 0xcc4
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xcc8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xce0	
private:
	[[maybe_unused]] uint8_t __pad0cf8[0x158]; // 0xcf8
public:
	Vector m_vecLastVel; // 0xe50	
};

