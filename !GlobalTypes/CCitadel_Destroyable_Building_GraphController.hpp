#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d0
// Has VTable
class CCitadel_Destroyable_Building_GraphController : public CBaseAnimGraphAnimGraphController
{
public:
	CAnimGraphParamOptionalRef< bool > m_bHitTrigger; // 0xc8	
	CAnimGraphParamOptionalRef< char* > m_eState; // 0xe8	
	CAnimGraphParamOptionalRef< float32 > m_flHealth; // 0x110	
	CAnimGraphParamOptionalRef< bool > m_bActive; // 0x130	
	CAnimGraphParamOptionalRef< float32 > m_flHealthPercent; // 0x150	
	CAnimGraphParamOptionalRef< bool > m_bVulnerable; // 0x170	
	CAnimGraphParamOptionalRef< bool > m_bDestroyed; // 0x190	
	CAnimGraphParamOptionalRef< float32 > m_flExposedDurationFraction; // 0x1b0	
};

