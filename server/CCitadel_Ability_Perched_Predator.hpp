#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hActiveProjectile"
class CCitadel_Ability_Perched_Predator : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x120]; // 0xab0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< CBaseEntity > m_hActiveProjectile; // 0xbd0	
};

