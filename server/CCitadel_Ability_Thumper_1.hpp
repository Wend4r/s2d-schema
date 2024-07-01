#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xaa8	
	Vector m_vecAimPos; // 0xac0	
	Vector m_vecAimNormal; // 0xacc	
	float m_flPushForce; // 0xad8	
};

