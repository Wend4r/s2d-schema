#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flEndTime"
class CCitadel_Item_Bubble : public CCitadel_Item
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flEndTime; // 0xad0	
};

