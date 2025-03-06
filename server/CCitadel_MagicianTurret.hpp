#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class CCitadel_MagicianTurret : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0c10[0x50]; // 0xc10
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xc60	
};

