#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x268]; // 0xc50
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xeb8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xec4	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xec8	
};

