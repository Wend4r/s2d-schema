#pragma once

#include <cstdint>

struct ShotID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x168
// Has VTable
// Is Abstract
class CCitadel_Modifier_BaseEventProc : public CCitadelModifier
{
public:
	CUtlVector< C_BaseEntity* > m_vecProcdUnitsThisShot; // 0xc0	
	CUtlVector< C_BaseEntity* > m_vecTrackedUnitsThisFrame; // 0xd8	
	ShotID_t m_nLastShotId; // 0xf0	
};

