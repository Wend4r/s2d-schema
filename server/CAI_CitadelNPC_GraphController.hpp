#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd8
// Has VTable
class CAI_CitadelNPC_GraphController : public CAI_BaseNPCGraphController
{
public:
	CAnimGraph1ParamOptionalRef< int32 > m_nHitLayerTrigger; // 0xad0	
	CAnimGraphParamOptionalRef< char* > m_pszDamageState; // 0xae8	
	CAnimGraphParamOptionalRef< float32 > m_flHealth; // 0xb10	
	CAnimGraph1ParamOptionalRef< float32 > m_flTimeScale; // 0xb30	
	CAnimGraphParamOptionalRef< bool > m_bBeam; // 0xb48	
	CAnimGraphParamOptionalRef< bool > m_bCrouching; // 0xb68	
	CAnimGraph1ParamOptionalRef< bool > m_bInAir; // 0xb88	
	CAnimGraph1ParamOptionalRef< bool > m_bHasTarget; // 0xba0	
	CAnimGraphParamOptionalRef< bool > m_bReloading; // 0xbb8	
};

