#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "QAngle m_angAimAngles"
class CCitadel_Ability_PrimaryWeapon_Slork : public CCitadel_Ability_PrimaryWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0b58[0x198]; // 0xb58
public:
	CUtlString m_strSprayerName; // 0xcf0	
	CUtlString m_strPoisonName; // 0xcf8	
	// MNetworkEnable
	QAngle m_angAimAngles; // 0xd00	
	bool m_bTracingConeAttack; // 0xd0c	
};

