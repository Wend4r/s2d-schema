#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
class CCitadel_Ability_ViperHookblade : public C_CitadelBaseAbility
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecOutgoingHitList; // 0xca0	
	CUtlVector< CHandle< C_BaseEntity > > m_vecReturningHitList; // 0xcb8	
};

