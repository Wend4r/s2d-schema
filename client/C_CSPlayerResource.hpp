#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5e0
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
class C_CSPlayerResource : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bHostageAlive[12]; // 0x548	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x554	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x560	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x590	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x59c	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x5a8	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x5b8	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x5c8	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x5d8	
	bool m_foundGoalPositions; // 0x5d9	
};

