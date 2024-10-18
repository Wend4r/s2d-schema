#pragma once

#include <cstdint>

struct GameTime_t;
struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf90
// Has VTable
// 
// MNetworkVarNames "bool m_bRedraw"
// MNetworkVarNames "bool m_bIsHeldByPlayer"
// MNetworkVarNames "bool m_bPinPulled"
// MNetworkVarNames "bool m_bJumpThrow"
// MNetworkVarNames "bool m_bThrowAnimating"
// MNetworkVarNames "GameTime_t m_fThrowTime"
// MNetworkVarNames "float m_flThrowStrength"
// MNetworkVarNames "float m_flThrowStrengthApproach"
// MNetworkVarNames "GameTime_t m_fDropTime"
// MNetworkVarNames "GameTime_t m_fPinPullTime"
// MNetworkVarNames "bool m_bJustPulledPin"
// MNetworkVarNames "GameTick_t m_nNextHoldTick"
// MNetworkVarNames "float m_flNextHoldFrac"
// MNetworkVarNames "CHandle< CCSWeaponBase> m_hSwitchToWeaponAfterThrow"
class CBaseCSGrenade : public CCSWeaponBase
{
public:
	// MNetworkEnable
	bool m_bRedraw; // 0xf58	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bIsHeldByPlayer; // 0xf59	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bPinPulled; // 0xf5a	
	// MNetworkEnable
	bool m_bJumpThrow; // 0xf5b	
	// MNetworkEnable
	bool m_bThrowAnimating; // 0xf5c	
private:
	[[maybe_unused]] uint8_t __pad0f5d[0x3]; // 0xf5d
public:
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0xf60	
	// MNetworkEnable
	float m_flThrowStrength; // 0xf64	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0xf68	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0xf6c	
	// MNetworkEnable
	GameTime_t m_fPinPullTime; // 0xf70	
	// MNetworkEnable
	bool m_bJustPulledPin; // 0xf74	
private:
	[[maybe_unused]] uint8_t __pad0f75[0x3]; // 0xf75
public:
	// MNetworkEnable
	GameTick_t m_nNextHoldTick; // 0xf78	
	// MNetworkEnable
	float m_flNextHoldFrac; // 0xf7c	
	// MNetworkEnable
	CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0xf80	
};

