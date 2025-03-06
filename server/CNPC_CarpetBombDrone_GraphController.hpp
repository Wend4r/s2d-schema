#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
class CNPC_CarpetBombDrone_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamOptionalRef< float32 > m_flPanel1; // 0xbd8	
	CAnimGraphParamOptionalRef< bool > m_bUnpackInstant; // 0xbf8	
	CAnimGraphParamOptionalRef< float32 > m_flVelocity; // 0xc18	
};

