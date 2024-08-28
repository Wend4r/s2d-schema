#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf8
// Has VTable
class CCitadel_Ability_BaseHeldItem : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x38]; // 0xab0
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xae8	
	Vector m_vHomePosition; // 0xaec	
};

