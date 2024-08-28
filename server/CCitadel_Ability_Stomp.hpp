#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd8
// Has VTable
class CCitadel_Ability_Stomp : public CCitadelBaseAbility
{
public:
	Vector m_vStompPos; // 0xab0	
	Vector m_vStompDir; // 0xabc	
	CUtlVector< CHandle< CBaseEntity > > m_vecStompedEnemies; // 0xac8	
};

