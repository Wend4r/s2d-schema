#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
class CCitadel_Ability_PrimaryWeapon_Slork : public CCitadel_Ability_PrimaryWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d00[0x198]; // 0xd00
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnSlorkAimAnglesChanged"
	QAngle m_angAimAngles; // 0xe98	
private:
	[[maybe_unused]] uint8_t __pad0ea4[0x24]; // 0xea4
public:
	bool m_bNeedAimAngleReset; // 0xec8	
};

