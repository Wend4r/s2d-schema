#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
class CCitadel_Ability_Thumper_1 : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xb00	
	Vector m_vecAimPos; // 0xb18	
	Vector m_vecAimNormal; // 0xb24	
	float m_flPushForce; // 0xb30	
};

