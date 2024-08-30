#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x850
// Has VTable
class CCitadelHornetStingProjectile : public CCitadelProjectile
{
public:
	int32_t m_iMaxBounces; // 0x820	
	int32_t m_BounceCount; // 0x824	
	bool m_bHitHero; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x7]; // 0x829
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // 0x830	
	float m_flBounceRange; // 0x848	
};

