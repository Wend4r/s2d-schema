#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "float m_flDissipationRate"
// MNetworkVarNames "GameTime_t m_flDissipationTime"
// MNetworkVarNames "GameTime_t m_flHeatTime"
// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
// MNetworkVarNames "bool m_bOverheating"
class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public CCitadelBaseAbility
{
public:
	int32_t m_nIntervalsElapsed; // 0xad8	
	GameTime_t m_NextShotTime; // 0xadc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flDissipationRate; // 0xae0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDissipationTime; // 0xae4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flHeatTime; // 0xae8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flOverheatSoundTime; // 0xaec	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bOverheating; // 0xaf0	
};

