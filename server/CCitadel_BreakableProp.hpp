#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x960
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkVarNames "int m_nHitIndex"
class CCitadel_BreakableProp : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	int32_t m_nHitIndex; // 0x958	
};

