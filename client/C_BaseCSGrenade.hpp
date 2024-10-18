#pragma once

#include <cstdint>

struct GameTime_t;
struct GameTick_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b50
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
class C_BaseCSGrenade : public C_CSWeaponBase
{
public:
	bool m_bClientPredictDelete; // 0x1b10	
	// MNetworkEnable
	bool m_bRedraw; // 0x1b11	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bIsHeldByPlayer; // 0x1b12	
	// MNetworkEnable
	// MNetworkChangeCallback "OnGrenadeStateChanged"
	bool m_bPinPulled; // 0x1b13	
	// MNetworkEnable
	bool m_bJumpThrow; // 0x1b14	
	// MNetworkEnable
	bool m_bThrowAnimating; // 0x1b15	
private:
	[[maybe_unused]] uint8_t __pad1b16[0x2]; // 0x1b16
public:
	// MNetworkEnable
	GameTime_t m_fThrowTime; // 0x1b18	
	// MNetworkEnable
	float m_flThrowStrength; // 0x1b1c	
	// MNetworkEnable
	float m_flThrowStrengthApproach; // 0x1b20	
	// MNetworkEnable
	GameTime_t m_fDropTime; // 0x1b24	
	// MNetworkEnable
	GameTime_t m_fPinPullTime; // 0x1b28	
	// MNetworkEnable
	bool m_bJustPulledPin; // 0x1b2c	
private:
	[[maybe_unused]] uint8_t __pad1b2d[0x3]; // 0x1b2d
public:
	// MNetworkEnable
	GameTick_t m_nNextHoldTick; // 0x1b30	
	// MNetworkEnable
	float m_flNextHoldFrac; // 0x1b34	
	// MNetworkEnable
	CHandle< C_CSWeaponBase > m_hSwitchToWeaponAfterThrow; // 0x1b38	
};

