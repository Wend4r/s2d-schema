#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca8
// Has VTable
class CCitadel_Ability_HornetSting : public CCitadelBaseAbility
{
public:
	int32_t m_BounceCount; // 0xb00	
	bool m_bHitHero; // 0xb04	
private:
	[[maybe_unused]] uint8_t __pad0b05[0x3]; // 0xb05
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecValidBounceTargets; // 0xb08	
};

