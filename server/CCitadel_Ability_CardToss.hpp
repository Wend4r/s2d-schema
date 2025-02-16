#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xda0
// Has VTable
// 
// MNetworkVarNames "bool m_bCardIsFlying"
class CCitadel_Ability_CardToss : public CCitadelBaseAbility
{
public:
	CUtlVector< CCitadel_Ability_CardToss::Card_t > m_vecCards; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b18[0x280]; // 0xb18
public:
	// MNetworkEnable
	bool m_bCardIsFlying; // 0xd98	
};

