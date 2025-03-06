#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf18
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
// MNetworkVarNames "bool m_bHitAPlayer"
class CCitadel_Ability_Bull_Charge : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x2a0]; // 0xc50
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xef0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xefc	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xf00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitAPlayer; // 0xf04	
private:
	[[maybe_unused]] uint8_t __pad0f05[0x3]; // 0xf05
public:
	bool m_bFirstTick; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f09[0x3]; // 0xf09
public:
	Vector m_vGoalDir; // 0xf0c	
};

