#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc0
// Has VTable
// 
// MNetworkVarNames "int m_iEnemy5Ks"
// MNetworkVarNames "int m_iEnemy4Ks"
// MNetworkVarNames "int m_iEnemy3Ks"
// MNetworkVarNames "int m_iEnemyKnifeKills"
// MNetworkVarNames "int m_iEnemyTaserKills"
struct CSMatchStats_t : public CSPerRoundStats_t
{
public:
	// MNetworkEnable
	int32_t m_iEnemy5Ks; // 0x68	
	// MNetworkEnable
	int32_t m_iEnemy4Ks; // 0x6c	
	// MNetworkEnable
	int32_t m_iEnemy3Ks; // 0x70	
	// MNetworkEnable
	int32_t m_iEnemyKnifeKills; // 0x74	
	// MNetworkEnable
	int32_t m_iEnemyTaserKills; // 0x78	
	int32_t m_iEnemy2Ks; // 0x7c	
	int32_t m_iUtility_Count; // 0x80	
	int32_t m_iUtility_Successes; // 0x84	
	int32_t m_iUtility_Enemies; // 0x88	
	int32_t m_iFlash_Count; // 0x8c	
	int32_t m_iFlash_Successes; // 0x90	
	int32_t m_nHealthPointsRemovedTotal; // 0x94	
	int32_t m_nHealthPointsDealtTotal; // 0x98	
	int32_t m_nShotsFiredTotal; // 0x9c	
	int32_t m_nShotsOnTargetTotal; // 0xa0	
	int32_t m_i1v1Count; // 0xa4	
	int32_t m_i1v1Wins; // 0xa8	
	int32_t m_i1v2Count; // 0xac	
	int32_t m_i1v2Wins; // 0xb0	
	int32_t m_iEntryCount; // 0xb4	
	int32_t m_iEntryWins; // 0xb8	
};

