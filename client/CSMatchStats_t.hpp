#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x80
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
};

