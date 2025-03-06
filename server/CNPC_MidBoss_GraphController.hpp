#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
// Has VTable
class CNPC_MidBoss_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0xbd8	
	CAnimGraphTagRef m_sAbilityDeployActive; // 0xc00	
};

