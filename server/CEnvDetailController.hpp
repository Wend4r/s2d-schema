#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeStartDist"
// MNetworkVarNames "float32 m_flFadeEndDist"
class CEnvDetailController : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x4e0	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x4e4	
};

