#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_Ability_Gunslinger_KnockbackBlast : public CCitadelBaseAbility
{
public:
	Vector m_vecKnockbackDirection; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x4]; // 0xb0c
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecKnockbackedUnits; // 0xb10	
};

