#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
class CCitadelHornetStingProjectile : public CCitadelProjectile
{
public:
	int32_t m_iMaxBounces; // 0x7f8	
	int32_t m_BounceCount; // 0x7fc	
	bool m_bHitHero; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0801[0x7]; // 0x801
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // 0x808	
	float m_flBounceRange; // 0x820	
};

