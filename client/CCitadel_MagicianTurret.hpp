#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
class CCitadel_MagicianTurret : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xb08	
};

