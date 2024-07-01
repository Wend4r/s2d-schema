#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10
// Has Trivial Destructor
class CRandSimTimer : public CSimpleSimTimer
{
public:
	float m_minInterval; // 0x8	
	float m_maxInterval; // 0xc	
};

