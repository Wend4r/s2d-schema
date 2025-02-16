#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf40
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
	[[maybe_unused]] uint8_t __pad0ca0[0x230]; // 0xca0
public:
	// MNetworkEnable
	bool m_bActive; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0ed1[0x3]; // 0xed1
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hCurrentTarget; // 0xed4	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hLastCastTarget; // 0xed8	
	// MNetworkEnable
	Vector m_vStartPosition; // 0xedc	
	// MNetworkEnable
	Vector m_vDeparturePosition; // 0xee8	
private:
	[[maybe_unused]] uint8_t __pad0ef4[0x4]; // 0xef4
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flDepartureTime; // 0xef8	
	// MNetworkEnable
	CCitadelAutoScaledTime m_flArrivalTime; // 0xf10	
	Vector m_vLastKnownSafePos; // 0xf28	
private:
	[[maybe_unused]] uint8_t __pad0f34[0x2]; // 0xf34
public:
	// MNetworkEnable
	bool m_bIsFirstCastCompleted; // 0xf36	
private:
	[[maybe_unused]] uint8_t __pad0f37[0x1]; // 0xf37
public:
	// MNetworkEnable
	GameTime_t m_tDoubleCastWindow; // 0xf38	
};

