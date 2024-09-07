#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xac8
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkVarNames "int m_nHitIndex"
class C_Citadel_BreakableProp : public CBaseAnimGraph
{
public:
	// MNetworkEnable
	int32_t m_nHitIndex; // 0xa90	
};

