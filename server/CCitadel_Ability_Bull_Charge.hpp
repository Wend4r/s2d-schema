#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
class CCitadel_Ability_Bull_Charge : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xaa8	
	bool m_bGainedWeaponPowerBuff; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ac1[0x237]; // 0xac1
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xcf8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xd04	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xd08	
};

