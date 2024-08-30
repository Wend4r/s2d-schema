#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaa0
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "bool m_bFloating"
class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity
{
public:
	// MNetworkEnable
	CHandle< C_CitadelBaseAbility > m_hAbility; // 0xa98	
	// MNetworkEnable
	bool m_bFloating; // 0xa9c	
};

