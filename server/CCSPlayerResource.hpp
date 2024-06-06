#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x558
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
	bool m_bHostageAlive[12]; // 0x4c0	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x4cc	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x4d8	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x508	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x514	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x520	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x530	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x540	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x550	
	bool m_foundGoalPositions; // 0x551	
};

