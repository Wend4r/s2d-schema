#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hPlayerPing"
class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hPlayerPing; // 0x40	
};

