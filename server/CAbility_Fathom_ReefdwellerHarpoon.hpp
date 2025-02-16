#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkVarNames "bool m_bBulletFlying"
// MNetworkVarNames "bool m_bHasLatchedOnce"
// MNetworkVarNames "bool m_bLatched"
// MNetworkVarNames "Vector m_vHarpoonTarget"
// MNetworkVarNames "float m_flLatchedYaw"
// MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
// MNetworkVarNames "GameTime_t m_flStuckStartTime"
// MNetworkVarNames "GameTime_t m_flReelStartTime"
class CAbility_Fathom_ReefdwellerHarpoon : public CCitadelBaseAbility
{
public:
	bool m_bHitTarget; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	Vector m_vPrevPos; // 0xb04	
	// MNetworkEnable
	bool m_bBulletFlying; // 0xb10	
	// MNetworkEnable
	bool m_bHasLatchedOnce; // 0xb11	
	// MNetworkEnable
	bool m_bLatched; // 0xb12	
private:
	[[maybe_unused]] uint8_t __pad0b13[0x1]; // 0xb13
public:
	// MNetworkEnable
	Vector m_vHarpoonTarget; // 0xb14	
	// MNetworkEnable
	float m_flLatchedYaw; // 0xb20	
	// MNetworkEnable
	GameTime_t m_flCloseEnoughStartTime; // 0xb24	
	// MNetworkEnable
	GameTime_t m_flStuckStartTime; // 0xb28	
	// MNetworkEnable
	GameTime_t m_flReelStartTime; // 0xb2c	
};

