#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
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
	float m_flBoostYaw; // 0xab0	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xab4	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xac0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xacc	
private:
	[[maybe_unused]] uint8_t __pad0acd[0x3]; // 0xacd
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xad0	
private:
	[[maybe_unused]] uint8_t __pad0ad4[0x4]; // 0xad4
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xad8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xaf0	
private:
	[[maybe_unused]] uint8_t __pad0b08[0x158]; // 0xb08
public:
	Vector m_vecLastVel; // 0xc60	
};

