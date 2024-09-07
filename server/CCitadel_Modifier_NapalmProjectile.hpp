#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
class CCitadel_Modifier_NapalmProjectile : public CCitadel_Modifier_Intrinsic_Base
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00e0[0x118]; // 0xe0
public:
	Vector m_vInitialCastPosition; // 0x1f8	
	float m_flProjectileSpeed; // 0x204	
};

