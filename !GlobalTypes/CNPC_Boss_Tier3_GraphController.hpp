#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
// Has VTable
class CNPC_Boss_Tier3_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0xbd8	
	CAnimGraphTagOptionalRef m_sDeathExplode; // 0xc00	
};

