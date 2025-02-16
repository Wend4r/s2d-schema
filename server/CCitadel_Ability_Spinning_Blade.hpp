#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce0
// Has VTable
class CCitadel_Ability_Spinning_Blade : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1c0]; // 0xb00
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHits; // 0xcc0	
	CHandle< CCitadelProjectile > m_hActiveProjectile; // 0xcd8	
};

