#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc28
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hAutoTarget"
// MNetworkVarNames "GameTime_t m_flHookEndTime"
// MNetworkVarNames "float m_flBombBonus"
class CCitadel_Ability_StickyBomb : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x4]; // 0xb00
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hAutoTarget; // 0xb04	
	// MNetworkEnable
	GameTime_t m_flHookEndTime; // 0xb08	
	// MNetworkEnable
	float m_flBombBonus; // 0xb0c	
};

