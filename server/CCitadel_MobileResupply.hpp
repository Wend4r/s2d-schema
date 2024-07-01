#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
// MNetworkVarNames "bool m_bFloating"
class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x5c]; // 0xad8
public:
	// MNetworkEnable
	CHandle< CCitadelBaseAbility > m_hAbility; // 0xb34	
	// MNetworkEnable
	bool m_bFloating; // 0xb38	
};

