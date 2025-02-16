#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
class CCitadel_Ability_Stomp : public CCitadelBaseAbility
{
public:
	Vector m_vStompPos; // 0xb00	
	Vector m_vStompDir; // 0xb0c	
	CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies; // 0xb18	
};

