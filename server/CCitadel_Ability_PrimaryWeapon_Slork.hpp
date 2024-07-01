#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "QAngle m_angAimAngles"
class CCitadel_Ability_PrimaryWeapon_Slork : public CCitadel_Ability_PrimaryWeapon
{
private:
	[[maybe_unused]] uint8_t __pad0b60[0x198]; // 0xb60
public:
	CUtlString m_strSprayerName; // 0xcf8	
	CUtlString m_strPoisonName; // 0xd00	
	// MNetworkEnable
	QAngle m_angAimAngles; // 0xd08	
	bool m_bTracingConeAttack; // 0xd14	
};

