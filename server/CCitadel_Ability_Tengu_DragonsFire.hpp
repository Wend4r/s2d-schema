#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x11d0
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "bool m_bFirstMovementTick"
// MNetworkVarNames "float m_flCurrentSpeed"
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Tengu_DragonsFire : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x70]; // 0xaa8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FlyingStateChanged"
	bool m_bFlying; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b19[0x3]; // 0xb19
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xb1c	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xb28	
private:
	[[maybe_unused]] uint8_t __pad0b29[0x3]; // 0xb29
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b30[0x688]; // 0xb30
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x11b8	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0x11c4	
};

