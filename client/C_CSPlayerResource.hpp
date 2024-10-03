#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
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
	bool m_bHostageAlive[12]; // 0x568	
	// MNetworkEnable
	bool m_isHostageFollowingSomeone[12]; // 0x574	
	// MNetworkEnable
	CEntityIndex m_iHostageEntityIDs[12]; // 0x580	
	// MNetworkEnable
	Vector m_bombsiteCenterA; // 0x5b0	
	// MNetworkEnable
	Vector m_bombsiteCenterB; // 0x5bc	
	// MNetworkEnable
	int32_t m_hostageRescueX[4]; // 0x5c8	
	// MNetworkEnable
	int32_t m_hostageRescueY[4]; // 0x5d8	
	// MNetworkEnable
	int32_t m_hostageRescueZ[4]; // 0x5e8	
	// MNetworkEnable
	bool m_bEndMatchNextMapAllVoted; // 0x5f8	
	bool m_foundGoalPositions; // 0x5f9	
};

