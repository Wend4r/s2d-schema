#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd00
// Has VTable
class CCitadel_Ability_Stomp : public CCitadelBaseAbility
{
public:
	Vector m_vStompPos; // 0xad8	
	Vector m_vStompDir; // 0xae4	
	CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies; // 0xaf0	
};

