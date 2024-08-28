#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1010
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
	[[maybe_unused]] uint8_t __pad0c28[0x1c0]; // 0xc28
public:
	// MNetworkEnable
	bool m_bActive; // 0xde8	
private:
	[[maybe_unused]] uint8_t __pad0de9[0x3]; // 0xde9
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xdec	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xdf0	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xdfc	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xe08	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xe20	
	Vector m_vLastKnownSafePos; // 0xe38	
private:
	[[maybe_unused]] uint8_t __pad0e44[0x4]; // 0xe44
public:
	// MNetworkEnable
	GameTime_t m_flDrainSuppressEndTime; // 0xe48	
};

