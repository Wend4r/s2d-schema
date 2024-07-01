#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
class CCitadel_Ability_Spinning_Blade : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x1f8]; // 0xaa8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHits; // 0xca0	
	CHandle< CCitadelProjectile > m_hActiveProjectile; // 0xcb8	
};

