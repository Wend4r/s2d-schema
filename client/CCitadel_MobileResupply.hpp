#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb10
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "bool m_bFloating"
class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xb08	
	// MNetworkEnable
	bool m_bFloating; // 0xb0c	
};

