#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef0
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "EHANDLE m_hCurrentTarget"
// MNetworkVarNames "EHANDLE m_hLastCastTarget"
// MNetworkVarNames "Vector m_vStartPosition"
// MNetworkVarNames "Vector m_vDeparturePosition"
// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
// MNetworkVarNames "bool m_bIsFirstCastCompleted"
// MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
class CCitadel_Ability_Nano_Pounce : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x230]; // 0xc50
public:
	// MNetworkEnable
	bool m_bActive; // 0xe80	
private:
	[[maybe_unused]] uint8_t __pad0e81[0x3]; // 0xe81
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xe84	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLastCastTarget; // 0xe88	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xe8c	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0ea4[0x4]; // 0xea4
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xea8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xec0	
	Vector m_vLastKnownSafePos; // 0xed8	
private:
	[[maybe_unused]] uint8_t __pad0ee4[0x2]; // 0xee4
public:
	// MNetworkEnable
	bool m_bIsFirstCastCompleted; // 0xee6	
private:
	[[maybe_unused]] uint8_t __pad0ee7[0x1]; // 0xee7
public:
	// MNetworkEnable
	GameTime_t m_tDoubleCastWindow; // 0xee8	
};

