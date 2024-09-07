#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc
// Has Trivial Destructor
class CStopwatchBase : public CSimpleSimTimer
{
public:
	bool m_fIsRunning; // 0x8	
};

