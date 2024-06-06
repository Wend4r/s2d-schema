#pragma once

#include <cstdint>

struct GameTime_t;
struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xed0
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
	bool m_bRedraw; // 0xe98	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bIsHeldByPlayer; // 0xe99	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bPinPulled; // 0xe9a	
	// MNetworkEnable
	bool m_bJumpThrow; // 0xe9b	
	// MNetworkEnable
	bool m_bThrowAnimating; // 0xe9c	
private:
	[[maybe_unused]] uint8_t __pad0e9d[0x3]; // 0xe9d
public:
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0xea0	
	// MNetworkEnable
	float m_flThrowStrength; // 0xea4	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0xea8	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0xeac	
	// MNetworkEnable
	GameTime_t m_fPinPullTime; // 0xeb0	
	// MNetworkEnable
	bool m_bJustPulledPin; // 0xeb4	
private:
	[[maybe_unused]] uint8_t __pad0eb5[0x3]; // 0xeb5
public:
	// MNetworkEnable
	GameTick_t m_nNextHoldTick; // 0xeb8	
	// MNetworkEnable
	float m_flNextHoldFrac; // 0xebc	
	// MNetworkEnable
	CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0xec0	
};

