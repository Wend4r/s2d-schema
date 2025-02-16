#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc60
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelProjectile> m_hActiveProjectile"
class CAbility_Mirage_Tornado : public CCitadelBaseAbility
{
public:
	Vector m_vLastValidMovementPosition; // 0xb00	
	// MNetworkEnable
	CHandle< CCitadelProjectile > m_hActiveProjectile; // 0xb0c	
};

