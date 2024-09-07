#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x198
// Has VTable
class CCitadel_Modifier_ThrowSandProjectile : public CCitadel_Modifier_Intrinsic_Base
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00e0[0xa8]; // 0xe0
public:
	Vector m_vInitialCastPosition; // 0x188	
};

