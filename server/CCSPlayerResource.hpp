#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x578
// Has VTable
// 
// MNetworkVarNames "bool m_bHostageAlive"
// MNetworkVarNames "bool m_isHostageFollowingSomeone"
// MNetworkVarNames "CEntityIndex m_iHostageEntityIDs"
// MNetworkVarNames "Vector m_bombsiteCenterA"
// MNetworkVarNames "Vector m_bombsiteCenterB"
// MNetworkVarNames "int m_hostageRescueX"
// MNetworkVarNames "int m_hostageRescueY"
// MNetworkVarNames "int m_hostageRescueZ"
// MNetworkVarNames "bool m_bEndMatchNextMapAllVoted"
class CCSPlayerResource : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bHostageAlive[12]; // 0x4e0	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x4ec	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x4f8	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x528	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x534	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x540	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x550	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x560	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x570	
	bool m_foundGoalPositions; // 0x571	
};

