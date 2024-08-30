#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc98
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
	float m_flBoostYaw; // 0xad8	
	// MNetworkEnable
	Vector m_vecCrashPosition; // 0xadc	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xae8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xaf4	
private:
	[[maybe_unused]] uint8_t __pad0af5[0x3]; // 0xaf5
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0afc[0x4]; // 0xafc
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xb00	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b30[0x158]; // 0xb30
public:
	Vector m_vecLastVel; // 0xc88	
};

