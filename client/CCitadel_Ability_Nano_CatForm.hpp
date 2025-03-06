#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd70
// Has VTable
// 
// MNetworkVarNames "bool m_bIsInCatform"
// MNetworkVarNames "GameTime_t m_flLastDamageTime"
class CCitadel_Ability_Nano_CatForm : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bIsInCatform; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c51[0x3]; // 0xc51
public:
	// MNetworkEnable
	GameTime_t m_flLastDamageTime; // 0xc54	
};

