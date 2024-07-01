#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf0
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x8]; // 0xad8
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xae0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTarget; // 0xae4	
	float m_flLifetime; // 0xae8	
};

