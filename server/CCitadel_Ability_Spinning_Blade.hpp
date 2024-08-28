#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc8
// Has VTable
class CCitadel_Ability_Spinning_Blade : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x1f8]; // 0xab0
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHits; // 0xca8	
	CHandle< CCitadelProjectile > m_hActiveProjectile; // 0xcc0	
};

