#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf0
// Has VTable
class CCitadel_Ability_BaseHeldItem : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x38]; // 0xaa8
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xae0	
	Vector m_vHomePosition; // 0xae4	
};

