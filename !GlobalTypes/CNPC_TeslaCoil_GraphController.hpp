#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x128
// Has VTable
class CNPC_TeslaCoil_GraphController : public CNPC_SimpleAnimatingAI_GraphController
{
public:
	CAnimGraphParamOptionalRef< float32 > m_flPanel1; // 0xe8	
	CAnimGraphParamOptionalRef< float32 > m_flVelocity; // 0x108	
};

