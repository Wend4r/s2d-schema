#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class CCitadel_Ability_PrimaryWeapon_Slork : public CCitadel_Ability_PrimaryWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0d08[0x198]; // 0xd08
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnSlorkAimAnglesChanged"
	QAngle m_angAimAngles; // 0xea0	
private:
	[[maybe_unused]] uint8_t __pad0eac[0x24]; // 0xeac
public:
	bool m_bNeedAimAngleReset; // 0xed0	
};

