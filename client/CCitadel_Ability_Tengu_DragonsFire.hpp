#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1368
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "QAngle m_qLastAngles"
// MNetworkVarNames "bool m_bFirstMovementTick"
// MNetworkVarNames "float m_flCurrentSpeed"
// MNetworkVarNames "Vector m_vBeamAimPos"
class CCitadel_Ability_Tengu_DragonsFire : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x70]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkChangeCallback "FlyingStateChanged"
	bool m_bFlying; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	// MNetworkEnable
	QAngle m_qLastAngles; // 0xc9c	
	// MNetworkEnable
	bool m_bFirstMovementTick; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
public:
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xcac	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x688]; // 0xcb0
public:
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1338	
private:
	[[maybe_unused]] uint8_t __pad1344[0x4]; // 0x1344
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnTenguBeamAnglesChanged"
	QAngle m_angBeamAngles; // 0x1348	
private:
	[[maybe_unused]] uint8_t __pad1354[0xc]; // 0x1354
public:
	bool m_bNeedsBeamReset; // 0x1360	
};

