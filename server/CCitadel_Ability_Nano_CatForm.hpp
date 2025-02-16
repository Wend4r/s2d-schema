#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "bool m_bIsInCatform"
// MNetworkVarNames "GameTime_t m_flLastDamageTime"
class CCitadel_Ability_Nano_CatForm : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bIsInCatform; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
public:
	// MNetworkEnable
	GameTime_t m_flLastDamageTime; // 0xb04	
};

