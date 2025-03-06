#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
class CNPC_Trooper_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphTagRef m_sUsingMelee; // 0xbd8	
	CAnimGraph1ParamOptionalRef< bool > m_b_Falling; // 0xbf0	
	CAnimGraph1ParamOptionalRef< bool > m_b_Ziplining; // 0xc08	
};

