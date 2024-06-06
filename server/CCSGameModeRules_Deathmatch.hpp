#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDMBonusStartTime"
// MNetworkVarNames "float m_flDMBonusTimeLength"
// MNetworkVarNames "CUtlString m_sDMBonusWeapon"
class CCSGameModeRules_Deathmatch : public CCSGameModeRules
{
public:
	// MNetworkEnable
	GameTime_t m_flDMBonusStartTime; // 0x30	
	// MNetworkEnable
	float m_flDMBonusTimeLength; // 0x34	
	// MNetworkEnable
	CUtlString m_sDMBonusWeapon; // 0x38	
};

