#pragma once

#include <cstdint>

struct CSMatchStats_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MNetworkVarNames "CSPerRoundStats_t m_perRoundStats"
// MNetworkVarNames "CSMatchStats_t m_matchStats"
// MNetworkVarNames "int m_iNumRoundKills"
// MNetworkVarNames "int m_iNumRoundKillsHeadshots"
// MNetworkVarNames "uint32 m_unTotalRoundDamageDealt"
class CCSPlayerController_ActionTrackingServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	C_UtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40	
	// MNetworkEnable
	// -> m_iEnemy5Ks - 0xf8
	// -> m_iEnemy4Ks - 0xfc
	// -> m_iEnemy3Ks - 0x100
	// -> m_iEnemyKnifeKills - 0x104
	// -> m_iEnemyTaserKills - 0x108
	CSMatchStats_t m_matchStats; // 0x90	
	// MNetworkEnable
	int32_t m_iNumRoundKills; // 0x110	
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; // 0x114	
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0x118	
};

