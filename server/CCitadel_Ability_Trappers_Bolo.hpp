#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc28
// Has VTable
class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x38]; // 0xab0
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xae8	
	CHandle< CBaseEntity > m_hNextTarget; // 0xaec	
	CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // 0xaf0	
	int32_t m_iBounces; // 0xb08	
	bool m_bReturning; // 0xb0c	
};

