#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf8
// Has VTable
class CCitadel_Ability_HornetSting : public C_CitadelBaseAbility
{
public:
	int32_t m_BounceCount; // 0xc50	
	bool m_bHitHero; // 0xc54	
private:
	[[maybe_unused]] uint8_t __pad0c55[0x3]; // 0xc55
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecValidBounceTargets; // 0xc58	
};

