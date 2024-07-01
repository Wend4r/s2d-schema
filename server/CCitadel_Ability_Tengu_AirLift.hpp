#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb88
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bFirstMovementTick"
// MNetworkVarNames "float m_flCurrentSpeed"
// MNetworkVarNames "QAngle m_qLastAngles"
class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0xc8]; // 0xaa8
public:
	// MNetworkEnable
	bool m_bFlying; // 0xb70	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xb71	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xb72	
private:
	[[maybe_unused]] uint8_t __pad0b73[0x1]; // 0xb73
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xb74	
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xb78	
};

