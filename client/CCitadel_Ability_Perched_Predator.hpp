#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CCitadel_Ability_Perched_Predator : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_BaseEntity > m_hActiveProjectile; // 0xc28	
};

