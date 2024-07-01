#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdc0
// Has VTable
class CCitadel_Ability_ShieldedSentry : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSentries; // 0xaa8	
};

