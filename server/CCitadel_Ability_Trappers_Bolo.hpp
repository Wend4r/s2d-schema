#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc50
// Has VTable
class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x38]; // 0xad8
public:
	CHandle< CBaseEntity > m_hProjectile; // 0xb10	
	CHandle< CBaseEntity > m_hNextTarget; // 0xb14	
	CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // 0xb18	
	int32_t m_iBounces; // 0xb30	
	bool m_bReturning; // 0xb34	
};

