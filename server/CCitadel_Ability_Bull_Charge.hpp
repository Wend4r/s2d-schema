#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xde8
// Has VTable
// 
// MNetworkVarNames "QAngle m_anglesCharging"
// MNetworkVarNames "GameTime_t m_flChargeStartTime"
// MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
// MNetworkVarNames "bool m_bHitAPlayer"
class CCitadel_Ability_Bull_Charge : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xb00	
	bool m_bGainedWeaponPowerBuff; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0x2a7]; // 0xb19
public:
	// MNetworkEnable
	QAngle m_anglesCharging; // 0xdc0	
	// MNetworkEnable
	// MNetworkChangeCallback "OnChargingStateChanged"
	GameTime_t m_flChargeStartTime; // 0xdcc	
	// MNetworkEnable
	GameTime_t m_flFastChargeEndTime; // 0xdd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bHitAPlayer; // 0xdd4	
private:
	[[maybe_unused]] uint8_t __pad0dd5[0x3]; // 0xdd5
public:
	bool m_bFirstTick; // 0xdd8	
private:
	[[maybe_unused]] uint8_t __pad0dd9[0x3]; // 0xdd9
public:
	Vector m_vGoalDir; // 0xddc	
};

