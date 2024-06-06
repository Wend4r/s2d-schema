#pragma once

#include <cstdint>

struct CSMatchStats_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x258
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
	CUtlVectorEmbeddedNetworkVar< CSPerRoundStats_t > m_perRoundStats; // 0x40	
	// MNetworkEnable
	CSMatchStats_t m_matchStats; // 0xb0	
	// MNetworkEnable
	int32_t m_iNumRoundKills; // 0x170	
	// MNetworkEnable
	int32_t m_iNumRoundKillsHeadshots; // 0x174	
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0x178	
};

