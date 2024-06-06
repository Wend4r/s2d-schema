#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MNetworkVarNames "int32 m_nFlameModelIndex"
// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
class CFireSmoke : public CBaseFire
{
public:
	// MNetworkEnable
	int32_t m_nFlameModelIndex; // 0x4d0	
	// MNetworkEnable
	int32_t m_nFlameFromAboveModelIndex; // 0x4d4	
};

