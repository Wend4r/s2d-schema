#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0c10[0x28]; // 0xc10
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xc38	
	float m_flLifetime; // 0xc3c	
};

