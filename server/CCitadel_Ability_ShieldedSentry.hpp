#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe60
// Has VTable
class CCitadel_Ability_ShieldedSentry : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CNPC_SimpleAnimatingAI > > m_vecDeployedSentries; // 0xad8	
};

