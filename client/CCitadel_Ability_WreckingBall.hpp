#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc90
// Has VTable
// 
// MNetworkVarNames "bool m_bHoldingBall"
class CCitadel_Ability_WreckingBall : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x38]; // 0xc50
public:
	// MNetworkEnable
	bool m_bHoldingBall; // 0xc88	
};

