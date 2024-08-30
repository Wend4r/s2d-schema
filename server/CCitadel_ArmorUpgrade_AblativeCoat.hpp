#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
// 
// MNetworkVarNames "int m_iCurrentResistValue"
class CCitadel_ArmorUpgrade_AblativeCoat : public CCitadel_Item
{
public:
	GameTime_t m_flLastDamageTime; // 0xaf8	
	// MNetworkEnable
	int32_t m_iCurrentResistValue; // 0xafc	
};

