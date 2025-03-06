#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hAutoTarget"
// MNetworkVarNames "GameTime_t m_flHookEndTime"
// MNetworkVarNames "float m_flBombBonus"
class CCitadel_Ability_StickyBomb : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x4]; // 0xc50
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hAutoTarget; // 0xc54	
	// MNetworkEnable
	GameTime_t m_flHookEndTime; // 0xc58	
	// MNetworkEnable
	float m_flBombBonus; // 0xc5c	
};

