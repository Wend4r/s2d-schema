#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa8
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class C_Citadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0a98[0x8]; // 0xa98
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xaa0	
	float m_flLifetime; // 0xaa4	
};

