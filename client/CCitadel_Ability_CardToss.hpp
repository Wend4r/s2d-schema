#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea0
// Has VTable
// 
// MNetworkVarNames "bool m_bCardIsFlying"
class CCitadel_Ability_CardToss : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x248]; // 0xc50
public:
	// MNetworkEnable
	bool m_bCardIsFlying; // 0xe98	
};

