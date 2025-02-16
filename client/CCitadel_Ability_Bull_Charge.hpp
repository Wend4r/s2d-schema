#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf68
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
// MNetworkVarNames "bool m_bHitAPlayer"
class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x2a0]; // 0xca0
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xf40	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xf4c	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xf50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitAPlayer; // 0xf54	
private:
	[[maybe_unused]] uint8_t __pad0f55[0x3]; // 0xf55
public:
	bool m_bFirstTick; // 0xf58	
private:
	[[maybe_unused]] uint8_t __pad0f59[0x3]; // 0xf59
public:
	Vector m_vGoalDir; // 0xf5c	
};

