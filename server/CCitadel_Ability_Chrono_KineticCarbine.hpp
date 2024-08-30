#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "bool m_bWantsSlow"
// MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
// MNetworkVarNames "float m_flLatchedTimeScaleFrac"
// MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
// MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
class CCitadel_Ability_Chrono_KineticCarbine : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bWantsSlow; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0ad9[0x3]; // 0xad9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xadc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flLatchedTimeScaleFrac; // 0xae0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flSpeedBoostEndTime; // 0xae4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flShotTimeScaleEndTime; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0aec[0x4]; // 0xaec
public:
	float m_flStoredPowerPct; // 0xaf0	
};

