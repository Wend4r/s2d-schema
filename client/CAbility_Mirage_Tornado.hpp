#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe00
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelProjectile> m_hActiveProjectile"
class CAbility_Mirage_Tornado : public C_CitadelBaseAbility
{
public:
	Vector m_vLastValidMovementPosition; // 0xca0	
	// MNetworkEnable
	CHandle< C_CitadelProjectile > m_hActiveProjectile; // 0xcac	
};

