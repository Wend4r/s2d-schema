#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x168
// Has VTable
class CNPC_BaseDefenseSentry_GraphController : public CNPC_SimpleAnimatingAI_GraphController
{
public:
	CAnimGraphParamOptionalRef< float32 > m_flPanel1; // 0xe8	
	CAnimGraphParamOptionalRef< bool > m_bUnpackInstant; // 0x108	
	CAnimGraphParamOptionalRef< float32 > m_flVelocity; // 0x128	
	CAnimGraphParamOptionalRef< bool > m_bAlert; // 0x148	
};

