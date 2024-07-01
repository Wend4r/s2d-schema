#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseEventProc : public CCitadelModifier
{
public:
	CUtlVector< CBaseEntity* > m_vecProcdUnitsThisShot; // 0xc8	
	CUtlVector< CBaseEntity* > m_vecTrackedUnitsThisFrame; // 0xe0	
	ShotID_t m_nLastShotId; // 0xf8	
};

