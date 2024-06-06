#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MNetworkVarNames "int32 m_totalHitsOnServer"
class CCSPlayer_BulletServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	int32_t m_totalHitsOnServer; // 0x40	
};

