#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf08
// Has VTable
class CCitadel_Ability_PrimaryWeapon_Slork : public CCitadel_Ability_PrimaryWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d38[0x198]; // 0xd38
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnSlorkAimAnglesChanged"
	QAngle m_angAimAngles; // 0xed0	
private:
	[[maybe_unused]] uint8_t __pad0edc[0x24]; // 0xedc
public:
	bool m_bNeedAimAngleReset; // 0xf00	
};

