#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x38]; // 0xaa8
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xae0	
	CHandle< CBaseEntity > m_hNextTarget; // 0xae4	
	CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // 0xae8	
	int32_t m_iBounces; // 0xb00	
	bool m_bReturning; // 0xb04	
};

