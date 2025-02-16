#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1088
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "EHANDLE m_hCurrentTarget"
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDeparturePosition"
// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
class CCitadel_Ability_Shiv_KillingBlow : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x1c0]; // 0xca0
public:
	// MNetworkEnable
	bool m_bActive; // 0xe60	
private:
	[[maybe_unused]] uint8_t __pad0e61[0x3]; // 0xe61
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xe64	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xe68	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xe74	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xe80	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xe98	
	Vector m_vLastKnownSafePos; // 0xeb0	
private:
	[[maybe_unused]] uint8_t __pad0ebc[0x4]; // 0xebc
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xec0	
};

