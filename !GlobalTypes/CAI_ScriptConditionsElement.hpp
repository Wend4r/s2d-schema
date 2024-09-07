#pragma once

#include <cstdint>

struct CSimTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c
// Has Trivial Destructor
class CAI_ScriptConditionsElement
{
public:
	CHandle< CBaseEntity > m_hActor; // 0x0	
	CSimTimer m_Timer; // 0x4	
	CSimTimer m_Timeout; // 0x10	
};

