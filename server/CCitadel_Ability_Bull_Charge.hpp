#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd50
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
class CCitadel_Ability_Bull_Charge : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xab0	
	bool m_bGainedWeaponPowerBuff; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ac9[0x26f]; // 0xac9
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xd38	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xd44	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xd48	
};

