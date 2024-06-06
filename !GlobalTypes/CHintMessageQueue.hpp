#pragma once

#include <cstdint>

struct CBasePlayerController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
class CHintMessageQueue
{
public:
	float m_tmMessageEnd; // 0x0	
	CUtlVector< CHintMessage* > m_messages; // 0x8	
	CBasePlayerController* m_pPlayerController; // 0x20	
};

