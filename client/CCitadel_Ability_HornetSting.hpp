#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe48
// Has VTable
class CCitadel_Ability_HornetSting : public C_CitadelBaseAbility
{
public:
	int32_t m_BounceCount; // 0xca0	
	bool m_bHitHero; // 0xca4	
private:
	[[maybe_unused]] uint8_t __pad0ca5[0x3]; // 0xca5
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecValidBounceTargets; // 0xca8	
};

