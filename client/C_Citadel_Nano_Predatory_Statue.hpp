#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa90
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class C_Citadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0a78[0x8]; // 0xa78
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xa80	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hTarget; // 0xa84	
	float m_flLifetime; // 0xa88	
};

