#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MNetworkVarNames "float m_flDissipationRate"
// MNetworkVarNames "GameTime_t m_flDissipationTime"
// MNetworkVarNames "GameTime_t m_flHeatTime"
// MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
// MNetworkVarNames "bool m_bOverheating"
class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public C_CitadelBaseAbility
{
public:
	int32_t m_nIntervalsElapsed; // 0xc50	
	GameTime_t m_NextShotTime; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	float m_flDissipationRate; // 0xc58	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDissipationTime; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flHeatTime; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flOverheatSoundTime; // 0xc64	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bOverheating; // 0xc68	
};

