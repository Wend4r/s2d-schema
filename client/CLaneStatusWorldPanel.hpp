#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa80
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
class CLaneStatusWorldPanel : public C_PointClientUIWorldPanel
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0xa70	
};

