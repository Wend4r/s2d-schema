#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xde8
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
class CAbility_Fathom_ReefdwellerHarpoon : public C_CitadelBaseAbility
{
public:
	bool m_bHitTarget; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca1[0x3]; // 0xca1
public:
	Vector m_vPrevPos; // 0xca4	
	// MNetworkEnable
	bool m_bBulletFlying; // 0xcb0	
	// MNetworkEnable
	bool m_bHasLatchedOnce; // 0xcb1	
	// MNetworkEnable
	bool m_bLatched; // 0xcb2	
private:
	[[maybe_unused]] uint8_t __pad0cb3[0x1]; // 0xcb3
public:
	// MNetworkEnable
	Vector m_vHarpoonTarget; // 0xcb4	
	// MNetworkEnable
	float m_flLatchedYaw; // 0xcc0	
	// MNetworkEnable
	GameTime_t m_flCloseEnoughStartTime; // 0xcc4	
	// MNetworkEnable
	GameTime_t m_flStuckStartTime; // 0xcc8	
	// MNetworkEnable
	GameTime_t m_flReelStartTime; // 0xccc	
};

