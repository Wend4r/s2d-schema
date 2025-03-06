#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x168
// Has VTable
class CNPC_ShieldedSentry_GraphController : public CNPC_SimpleAnimatingAI_GraphController
{
public:
	CAnimGraphParamOptionalRef< float32 > m_flPanel1; // 0xe8	
	CAnimGraphParamOptionalRef< float32 > m_flVelocity; // 0x108	
	CAnimGraphParamOptionalRef< bool > m_bShoot; // 0x128	
	CAnimGraphParamOptionalRef< float32 > m_flDeploySpeed; // 0x148	
};

