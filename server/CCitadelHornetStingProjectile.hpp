#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CCitadelHornetStingProjectile : public CCitadelProjectile
{
public:
	int32_t m_iMaxBounces; // 0x800	
	int32_t m_BounceCount; // 0x804	
	bool m_bHitHero; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad0809[0x7]; // 0x809
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // 0x810	
	float m_flBounceRange; // 0x828	
};

