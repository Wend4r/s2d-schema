#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkVarNames "float m_flProgress"
// MNetworkVarNames "int m_nNumPushers"
class C_CitadelPayload : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	float m_flProgress; // 0xb08	
	// MNetworkEnable
	int32_t m_nNumPushers; // 0xb0c	
};

