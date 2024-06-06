#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MNetworkVarNames "CHandle< CBaseEntity> m_hPlayerPing"
class CCSPlayer_PingServices : public CPlayerPawnComponent
{
public:
	GameTime_t m_flPlayerPingTokens[5]; // 0x40	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hPlayerPing; // 0x54	
};

