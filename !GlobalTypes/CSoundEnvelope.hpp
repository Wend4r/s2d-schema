#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
class CSoundEnvelope
{
public:
	float m_current; // 0x0	
	float m_target; // 0x4	
	float m_rate; // 0x8	
	bool m_forceupdate; // 0xc	
};

