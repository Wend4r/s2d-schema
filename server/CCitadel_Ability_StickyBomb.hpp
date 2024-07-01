#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb98
// Has VTable
// 
// MNetworkVarNames "int m_nPlayersHit"
class CCitadel_Ability_StickyBomb : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x8]; // 0xaa8
public:
	// MNetworkEnable
	int32_t m_nPlayersHit; // 0xab0	
};

