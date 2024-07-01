#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_Stomp : public CCitadelBaseAbility
{
public:
	Vector m_vStompPos; // 0xaa8	
	Vector m_vStompDir; // 0xab4	
	CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies; // 0xac0	
};

