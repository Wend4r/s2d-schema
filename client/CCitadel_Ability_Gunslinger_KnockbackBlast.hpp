#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe50
// Has VTable
class CCitadel_Ability_Gunslinger_KnockbackBlast : public C_CitadelBaseAbility
{
public:
	Vector m_vecKnockbackDirection; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0cac[0x4]; // 0xcac
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecKnockbackedUnits; // 0xcb0	
};

