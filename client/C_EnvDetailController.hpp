#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x540
// Has VTable
// 
// MNetworkVarNames "float32 m_flFadeStartDist"
// MNetworkVarNames "float32 m_flFadeEndDist"
class C_EnvDetailController : public C_BaseEntity
{
public:
	// MNetworkEnable
	float m_flFadeStartDist; // 0x538	
	// MNetworkEnable
	float m_flFadeEndDist; // 0x53c	
};

