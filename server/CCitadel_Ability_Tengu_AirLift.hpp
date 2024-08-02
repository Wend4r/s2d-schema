#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x100]; // 0xaa8
public:
	// MNetworkEnable
	bool m_bFlying; // 0xba8	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xba9	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xbaa	
private:
	[[maybe_unused]] uint8_t __pad0bab[0x1]; // 0xbab
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xbac	
};

