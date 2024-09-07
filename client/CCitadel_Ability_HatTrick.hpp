#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
class CCitadel_Ability_HatTrick : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	CHandle< C_CitadelProjectile > m_hProjectile; // 0xc60	
};

