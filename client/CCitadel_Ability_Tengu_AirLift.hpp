#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xe0]; // 0xc28
public:
	// MNetworkEnable
	bool m_bFlying; // 0xd08	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xd09	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xd0a	
private:
	[[maybe_unused]] uint8_t __pad0d0b[0x1]; // 0xd0b
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xd0c	
};

