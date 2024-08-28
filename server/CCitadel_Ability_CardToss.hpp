#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "bool m_bCardIsFlying"
class CCitadel_Ability_CardToss : public CCitadelBaseAbility
{
public:
	CUtlVector< CCitadel_Ability_CardToss::Card_t > m_vecCards; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ac8[0x248]; // 0xac8
public:
	// MNetworkEnable
	bool m_bCardIsFlying; // 0xd10	
};

