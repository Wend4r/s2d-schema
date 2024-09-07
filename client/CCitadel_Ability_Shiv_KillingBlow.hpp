#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1048
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
	[[maybe_unused]] uint8_t __pad0c60[0x1c0]; // 0xc60
public:
	// MNetworkEnable
	bool m_bActive; // 0xe20	
private:
	[[maybe_unused]] uint8_t __pad0e21[0x3]; // 0xe21
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xe24	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xe28	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xe34	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xe40	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xe58	
	Vector m_vLastKnownSafePos; // 0xe70	
private:
	[[maybe_unused]] uint8_t __pad0e7c[0x4]; // 0xe7c
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xe80	
};

