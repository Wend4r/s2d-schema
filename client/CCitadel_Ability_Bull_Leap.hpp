#pragma once

#include <cstdint>

struct GameTime_t;
struct CCitadelAutoScaledTime;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd70
// Has VTable
// 
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
	Vector m_vecCrashPosition; // 0xc28	
	// MNetworkEnable
	Vector m_vecCrashDirection; // 0xc34	
	// MNetworkEnable
	// MNetworkChangeCallback "OnLeapStateChanged"
	ELeapState_t m_eLeapState; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c41[0x3]; // 0xc41
public:
	// MNetworkEnable
	GameTime_t m_flStateEnterTime; // 0xc44	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flNextStateTime; // 0xc48	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flBoostEndTime; // 0xc60	
private:
	[[maybe_unused]] uint8_t __pad0c78[0xe8]; // 0xc78
public:
	Vector m_vecLastVel; // 0xd60	
};

