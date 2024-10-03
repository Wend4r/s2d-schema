#pragma once

#include <cstdint>

struct GameTime_t;
struct GameTick_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf48
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
	bool m_bRedraw; // 0xf10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bIsHeldByPlayer; // 0xf11	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bPinPulled; // 0xf12	
	// MNetworkEnable
	bool m_bJumpThrow; // 0xf13	
	// MNetworkEnable
	bool m_bThrowAnimating; // 0xf14	
private:
	[[maybe_unused]] uint8_t __pad0f15[0x3]; // 0xf15
public:
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0xf18	
	// MNetworkEnable
	float m_flThrowStrength; // 0xf1c	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0xf20	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0xf24	
	// MNetworkEnable
	GameTime_t m_fPinPullTime; // 0xf28	
	// MNetworkEnable
	bool m_bJustPulledPin; // 0xf2c	
private:
	[[maybe_unused]] uint8_t __pad0f2d[0x3]; // 0xf2d
public:
	// MNetworkEnable
	GameTick_t m_nNextHoldTick; // 0xf30	
	// MNetworkEnable
	float m_flNextHoldFrac; // 0xf34	
	// MNetworkEnable
	CHandle< CCSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0xf38	
};

