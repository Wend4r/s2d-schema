#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea8
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x268]; // 0xc28
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xe90	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xe9c	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xea0	
};

