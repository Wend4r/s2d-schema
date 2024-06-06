#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDMBonusStartTime"
// MNetworkVarNames "float m_flDMBonusTimeLength"
// MNetworkVarNames "CUtlString m_sDMBonusWeapon"
class CCSGameModeRules_Deathmatch : public CCSGameModeRules
{
public:
	// MNetworkEnable
	GameTime_t m_flDMBonusStartTime; // 0x38	
	// MNetworkEnable
	float m_flDMBonusTimeLength; // 0x3c	
	// MNetworkEnable
	CUtlString m_sDMBonusWeapon; // 0x40	
};

