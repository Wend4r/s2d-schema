#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
// 
// MNetworkVarNames "int m_nPlayersHit"
class CCitadel_Ability_StickyBomb : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x8]; // 0xc50
public:
	// MNetworkEnable
	int32_t m_nPlayersHit; // 0xc58	
};

