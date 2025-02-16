#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x38]; // 0xb00
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xb38	
	CHandle< CBaseEntity > m_hNextTarget; // 0xb3c	
	CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // 0xb40	
	int32_t m_iBounces; // 0xb58	
	bool m_bReturning; // 0xb5c	
};

