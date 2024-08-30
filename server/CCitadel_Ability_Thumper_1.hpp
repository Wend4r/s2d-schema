#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc98
// Has VTable
class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xad8	
	Vector m_vecAimPos; // 0xaf0	
	Vector m_vecAimNormal; // 0xafc	
	float m_flPushForce; // 0xb08	
};

