#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb18
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0x18]; // 0xaf8
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xb10	
	float m_flLifetime; // 0xb14	
};

