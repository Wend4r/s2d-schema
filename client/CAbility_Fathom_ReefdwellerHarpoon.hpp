#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd98
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
	bool m_bHitTarget; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c51[0x3]; // 0xc51
public:
	Vector m_vPrevPos; // 0xc54	
	// MNetworkEnable
	bool m_bBulletFlying; // 0xc60	
	// MNetworkEnable
	bool m_bHasLatchedOnce; // 0xc61	
	// MNetworkEnable
	bool m_bLatched; // 0xc62	
private:
	[[maybe_unused]] uint8_t __pad0c63[0x1]; // 0xc63
public:
	// MNetworkEnable
	Vector m_vHarpoonTarget; // 0xc64	
	// MNetworkEnable
	float m_flLatchedYaw; // 0xc70	
	// MNetworkEnable
	GameTime_t m_flCloseEnoughStartTime; // 0xc74	
	// MNetworkEnable
	GameTime_t m_flStuckStartTime; // 0xc78	
	// MNetworkEnable
	GameTime_t m_flReelStartTime; // 0xc7c	
};

