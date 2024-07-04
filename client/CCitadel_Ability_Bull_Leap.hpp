#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
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
	float m_flBoostYaw; // 0xc28	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xc2c	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xc38	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xc48	
private:
	[[maybe_unused]] uint8_t __pad0c4c[0x4]; // 0xc4c
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xc50	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c80[0x120]; // 0xc80
public:
	Vector m_vecLastVel; // 0xda0	
};

