#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef8
// Has VTable
class CCitadel_Ability_PrimaryWeapon_Slork : public CCitadel_Ability_PrimaryWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d28[0x198]; // 0xd28
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnSlorkAimAnglesChanged"
	QAngle m_angAimAngles; // 0xec0	
private:
	[[maybe_unused]] uint8_t __pad0ecc[0x24]; // 0xecc
public:
	bool m_bNeedAimAngleReset; // 0xef0	
};

