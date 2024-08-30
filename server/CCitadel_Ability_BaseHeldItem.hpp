#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
class CCitadel_Ability_BaseHeldItem : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x38]; // 0xad8
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xb10	
	Vector m_vHomePosition; // 0xb14	
};

