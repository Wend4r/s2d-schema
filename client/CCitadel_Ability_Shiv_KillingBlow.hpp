#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1038
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
	[[maybe_unused]] uint8_t __pad0c50[0x1c0]; // 0xc50
public:
	// MNetworkEnable
	bool m_bActive; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e11[0x3]; // 0xe11
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xe14	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xe18	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xe24	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xe30	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xe48	
	Vector m_vLastKnownSafePos; // 0xe60	
private:
	[[maybe_unused]] uint8_t __pad0e6c[0x4]; // 0xe6c
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xe70	
};

