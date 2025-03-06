#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe00
// Has VTable
class CCitadel_Ability_Gunslinger_KnockbackBlast : public C_CitadelBaseAbility
{
public:
	Vector m_vecKnockbackDirection; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c5c[0x4]; // 0xc5c
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecKnockbackedUnits; // 0xc60	
};

