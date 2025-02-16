#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
class CCitadel_Ability_ViperHookblade : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHitList; // 0xb00	
	CUtlVector< CHandle< CBaseEntity > > m_vecReturningHitList; // 0xb18	
};

