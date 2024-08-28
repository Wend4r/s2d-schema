#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xab0	
	Vector m_vecAimPos; // 0xac8	
	Vector m_vecAimNormal; // 0xad4	
	float m_flPushForce; // 0xae0	
};

